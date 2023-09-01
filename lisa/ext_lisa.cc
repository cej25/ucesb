#include "ext_lisa.hh"
#include "enumerate.hh"
#include "simple_data_ops.hh"
#include "zero_suppress.hh"
#include "zero_suppress_map.hh"
#include "error.hh"
#include <algorithm>
#include <iterator>
#include <set>
#include <iostream>
#include <fstream>
#include <sstream>

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
        bool                      _used;
};

template<typename Tsingle,typename T,int n>
void raw_list_ii_zero_suppress<Tsingle,T,n>::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{
  
    for (int i = 0; i < n; ++i)
    {
        zero_suppress_info *info =
	    new zero_suppress_info(used_info._info,true);
        zzp_on_insert_index(i,*info);
        used_zero_suppress_info sub_used_info(info);

        call_zero_suppress_info_ptrs(&_items[i],sub_used_info);
    }
}

template<typename Tsingle,typename T,int n>
void raw_array_zero_suppress<Tsingle,T,n>::
zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{
  if ((used_info._info->_type & ZZP_INFO_MASK) != ZZP_INFO_NONE)
    ERROR("Two levels of zero suppression not supported!");

  for (int i = 0; i < n; ++i)
    {
      zero_suppress_info *info = new zero_suppress_info(used_info._info);
      zzp_on_insert_index(i,*info);
      used_zero_suppress_info sub_used_info(info);

      call_zero_suppress_info_ptrs(&_items[i],sub_used_info);
    }
}

template<typename T>
void show_members(const signal_id &id, const char *unit)
{
    char buf[256];
    id.format(buf, sizeof(buf));

    char buf_paw[256];
    id.format_paw(buf_paw, sizeof(buf_paw));

    printf ("%-30s %-30s %s\n",buf_paw,buf,unit ? unit : "");
}

EXT_LISA::EXT_LISA()
{
    __clean();
}

EXT_LISA::~EXT_LISA()
{
}

void EXT_LISA::__clean()
{
    event.__clean();
}

EXT_DECL_DATA_SRC_FCN(void, EXT_LISA::__unpack)
{
    //while (!__buffer.empty())
    //{
        auto & item = event.append_item();

        uint32 padding = 0;
        __buffer.peek_uint32(&padding);
        while ((padding & 0xFFF00000) == 0xadd00000)
        {
            __buffer.advance(4);
            __buffer.peek_uint32(&padding);
        }

        uint32 sum_chan_head = padding;
        __buffer.advance(4); 

        int board_id = -1;
        int nchan = 0;
        int nmod = 1;

        
        if (((sum_chan_head >> 24) & 0xFF) == 0xFF)
        {
            std::cout << "sum channel header: " << std::hex << sum_chan_head << std::dec << std::endl;

            board_id = ((sum_chan_head >> 16) & 0xFF);

            item.fboard = board_id;

            uint32 chan_size = 0;
            __buffer.peek_uint32(&chan_size);

            std::cout << "chan size: " << std::hex << chan_size << std::dec << std::endl;
            nchan = (((chan_size >> 2) & 0x3FFFFFFF) / 4) - 1;
            std::cout << "nchan: " << nchan << std::endl;

            if (nchan == 0) nmod--;

            __buffer.advance(4);

            // skip sum_time and ext_time
            __buffer.advance(8);

            // skip febex_flags
            __buffer.advance(4);

            // check deadbeef for sanity
            uint32 deadbeef = 0;
            __buffer.peek_uint32(&deadbeef);

            std::cout << "deadbeef check: " << std::hex << deadbeef << std::dec << std::endl;

            __buffer.advance(4);

        }
        else
        {
            std::cout << "Expected sum channel header with 0xFF?" << std::endl;
        }

        uint32 sum_chan_data_head = 0;
        __buffer.peek_uint32(&sum_chan_data_head);

        if (((sum_chan_data_head >> 24) & 0xFF) == 0xF0)
        {
            // reverse needed? don't think so ..
            
            for (int i = 0; i < nchan; i++)
            {
                std::cout << "sum channel data header: " << std::hex << sum_chan_data_head << std::dec << std::endl;

                int tmp_ch_id = ((sum_chan_data_head >> 16) & 0xFF);
                std::cout << "tmp_ch_id: " << tmp_ch_id << std::endl;
                item.fchn = tmp_ch_id;

                __buffer.advance(4);

                if (board_id < 0)
                {
                    std::cout << "Something went wrong, we don't have the board ID" << std::endl;
                    
                    // skip 3 words
                    __buffer.advance(12);
                    continue;
                }

                // are the Setters even needed

                uint32 tmp_chan_ts_lo = 0;
                __buffer.peek_uint32(&tmp_chan_ts_lo);
                uint32 tmp_chan_ts_hi = (sum_chan_data_head & 0xFFFF);

                std::cout << "tmp_chan_ts_lo: " << std::hex << tmp_chan_ts_lo << std::dec << std::endl;
                std::cout << "tmp_chan_ts_hi: " << std::hex << tmp_chan_ts_hi << std::dec << std::endl;

                item.fts_lo[tmp_ch_id] = tmp_chan_ts_lo;
                item.fts_hi[tmp_ch_id] = tmp_chan_ts_hi;

                __buffer.advance(4);

                uint32 chan_energy = 0;
                __buffer.peek_uint32(&chan_energy);
                uint32 tmp_chan_energy = (chan_energy & 0xFFFFFF);

                std::cout << "chan energy: " << std::hex << chan_energy << std::endl;

                if (tmp_chan_energy & 0x00800000)
                {
                    tmp_chan_energy = 0xFF000000 | tmp_chan_energy;
                }

                item.fen[tmp_ch_id] = tmp_chan_energy;

                __buffer.advance(4);

                // skip future use
                __buffer.advance(4);

            } // nchan loop

            nmod--;

        }

        // some conditions here from GO4 code, 
        // not needed if exact data coming through is known?
        // i.e. how must be written in spec format anyway. 

        
    //}
}


EXT_FORCE_IMPL_DATA_SRC_FCN(void, EXT_LISA::__unpack);

void EXT_LISA::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    event.dump(signal_id(id, "event"), pdi);
}

void EXT_LISA::show_members(const signal_id &id, const char* unit) const
{

}

void EXT_LISA::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{
     event.zero_suppress_info_ptrs(used_info);
}

void EXT_LISA::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{   
    event.enumerate_members(__id, __info, __callback, __extra);
}

void FebexEvent::dump(const signal_id &id, pretty_dump_info &pdi) const
{   

    for (int i = 0; i < 16; i++)
    {
        ::dump_uint32(fts_lo[i], signal_id(id, get_name("fts_lo_", i)), pdi);
        ::dump_uint32(fts_hi[i], signal_id(id, get_name("fts_hi_", i)), pdi);
        ::dump_uint32(fen[i], signal_id(id, get_name("fen_", i)), pdi);
    }

    ::dump_uint32(fboard, signal_id(id, "fboard"), pdi);
    ::dump_uint32(fchn, signal_id(id, "fchn"), pdi);
}

void FebexEvent::show_members(const signal_id &id, const char* unit) const
{
    for (int i = 0; i < 16; i++)
    {
        ::show_members<uint32>(signal_id(id, get_name("fts_lo_", i)), unit);
    }
}

void FebexEvent::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{

    for (int i = 0; i < 16; i++)
    {
        ::zero_suppress_info_ptrs(&fts_lo[i], used_info);
        ::zero_suppress_info_ptrs(&fts_hi[i], used_info);
        ::zero_suppress_info_ptrs(&fen[i], used_info);
    }

    ::zero_suppress_info_ptrs(&fboard, used_info);
    ::zero_suppress_info_ptrs(&fchn, used_info);
}

void FebexEvent::enumerate_members(const signal_id &id, const enumerate_info &info, enumerate_fcn callback, void *extra) const
{

    for (int i = 0; i < 16; i++)
    {
        callback(signal_id(id, get_name("fts_lo_", i)), enumerate_info(info, &fts_lo[i], ENUM_TYPE_UINT), extra);
        callback(signal_id(id, get_name("fts_hi_", i)), enumerate_info(info, &fts_hi[i], ENUM_TYPE_UINT), extra);
        callback(signal_id(id, get_name("fen_", i)), enumerate_info(info, &fen[i], ENUM_TYPE_UINT), extra);
    }

    callback(signal_id(id, "fboard"), enumerate_info(info, &fboard, ENUM_TYPE_UINT), extra); 
    callback(signal_id(id, "fchn"), enumerate_info(info, &fchn, ENUM_TYPE_UINT), extra);
}

const char* FebexEvent::get_name(const std::string &name, int index) const
{
    std::ostringstream oss;
    oss << name << index;
    std::string str_name = oss.str();
    const char* cstr_name = str_name.c_str();
    return cstr_name;
} 