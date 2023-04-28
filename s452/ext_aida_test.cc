#include "ext_aida.hh" // maybe use a test version
#include "enumerate.hh" //??
#include "simple_data_ops.hh"
#include "zero_suppress.hh"
#include "zero_suppress_map.hh"
#include "error.hh"
#include <algorithm>
#include <set>

struct used_zero_suppress_info
{
    public:

        used_zero_suppress_info(const zero_suppress_info *info)
        {
            _info = info;
            _used = false;
        }

        ~used_zero_suppress_info()
        {
            if (!_used)
                delete _info;
        }

    public:

        const zero_suppress_info *_info;
        bool _used;

};

template<typename Tsingle, typename T, int n>
void raw_list_ii_zero_suppress<Tsingle, T, n>::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{
    for (int i = 0; i < n; i++)
    {
        zero_suppress_info *info = new zero_suppress_info(used_info._info, true);
        zzp_on_insert_index(i, *info);
        used_zero_suppress_info sub_used_info(info);

        call_zero_suppress_info_ptrs(&_items[i], sub_used_info);
    }
}

template<typename T>
void show_members(const signal_id &id, const char *unit)
{
    char buf[256];
    id.format(buf, sizeof(buf));

    char buf_paw[256];
    id.format_paw(buf_paw, sizeof(buf_paw));

    printf("%-30s %-30s %s\n", buf_paw, buf, unit ? unit : "");

}

EXT_AIDA::EXT_AIDA()
{
    std::fill(&fast_times[0][0], &fast_time[0][0] + sizeof(fast_times) / sizeof(fast_times[0][0], 0));
}