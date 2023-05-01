#ifndef __PLASTIC_TAMEX_UNPACK_HH__
#define __PLASTIC_TAMEX_UNPACK_HH__

#include "config/setup.hh"

#include "data_src.hh"
#include "dummy_external.hh"
#include "external_data.hh"
#include "zero_suppress.hh"
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <limits>

DUMMY_EXTERNAL_MAP_STRUCT_FORW(EXT_PLASTIC);

struct plastic_tamex_item
{
    public:
      
        // PLASTIC_TAMEX MBS words
        int add = 2781;
        int aa = 170;
        int six_eight = 104;
        int six_f = 6;
        int trailer_code = 187;
        int error_code = 238;
        int tamex_identifier = 52;

        int iterator[100];
        int tamex_id[100];

        int tamex_iter;

        int am_fired[100];
        int sfp_id[100];
        int trigger_type[100];

        double coarse_T[100];
        double fine_T[100];
        uint32 ch_ID[100];

        int lead_arr[100][100];
        int leading_hits[100][100];
        int trailing_hits[100][100];

        double edge_coarse[100][100];
        double edge_fine[100][100];
        uint32 ch_ID_edge[100][100];
        uint32 ch_num[100][100];
     
        bool tamex_end;
        bool written;
        bool no_edges[100];
        bool error;
        bool leading_hit = false;
    
        // calibration stuff?
        bool CALIBRATE = false;
        bool Calibration_Done = false;
        int cal_count = 0;

        int Pre_Trigger_Window = 0;
        int Post_Trigger_Window = 0;

        void __clean() {};

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);
        const char* get_name(const std::string &name, int index) const;
};

class EXT_PLASTIC
{
    public:
        EXT_PLASTIC();
        ~EXT_PLASTIC();

        EXT_DECL_UNPACK();

        void __clean();
        void reset_edges(plastic_tamex_item &item);

        template<typename __data_src_t>
        bool no_error_reached(__data_src_t &__buffer, plastic_tamex_item &item);
        template<typename __data_src_t>
        void check_trailer(__data_src_t &__buffer, plastic_tamex_item &item);
        template<typename __data_src_t>
        void get_edges(__data_src_t &__buffer, plastic_tamex_item &item);
        template<typename __data_src_t>
        void get_trigger(__data_src_t &__buffer, plastic_tamex_item &item);
        template<typename __data_src_t>
        void skip_padding(__data_src_t &__buffer, plastic_tamex_item &item);
        template<typename __data_src_t>
        void Process_TAMEX(__data_src_t &__buffer, plastic_tamex_item &item);
        void calibrate_ONLINE();
        void calibrate_OFFLINE();
    
        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info &used_info);

    public:
        raw_list_ii_zero_suppress<plastic_tamex_item, plastic_tamex_item, PLASTIC_MAX_HITS> plastic_info;


};

DUMMY_EXTERNAL_MAP_STRUCT(EXT_PLASTIC);
DUMMY_EXTERNAL_WATCHER_STRUCT(EXT_PLASTIC);
DUMMY_EXTERNAL_CORRELATION_STRUCT(EXT_PLASTIC);
DUMMY_EXTERNAL_CALIB_MAP_STRUCT(EXT_PLASTIC);

#endif /* __PLASTIC_TAMEX_UNPACK_HH__ */

