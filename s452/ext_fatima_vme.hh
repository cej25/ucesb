#ifndef __GE_EXT_HH__
#define __GE_EXT_HH__

#include "data_src.hh"
#include "dummy_external.hh"
#include "external_data.hh"
#include "zero_suppress.hh"
#include <map>

// don't use 64-bit data items because ucesb doesn't handle them right?
#define NO_UINT64 1

static const uint8 SCALER_MODULE_ON = 1; // 1 = true
static const uint32 MAX_AM_DETS = 60; 
static const uint32 MAX_SCALERS = 32;
static const int FAT_TDC_NUMBER = 2;
static const uint32 FAT_MAX_HITS = 1000; // idk
static const int MAX_CHA_INPUT = 33;

DUMMY_EXTERNAL_MAP_STRUCT_FORW(EXT_FATIMA_VME);

struct fatima_vme_item 
{
    //int fired_QDC_amount = 0;
    //int fired_TDC_amount = 0;

    double QLong[MAX_AM_DETS];
    double QLong_Raw[MAX_AM_DETS];
    double QShort_Raw[MAX_AM_DETS];
    
    uint32 QDC_Time_Coarse[MAX_AM_DETS]; // stores without "ext trig"
    double QDC_Time_Ext[MAX_AM_DETS];
    double QDC_Time_Fine[MAX_AM_DETS];

    /*
    uint32 TDC_Time_raw_lo[MAX_AM_DETS];
    uint32 TDC_Time_raw_hi[MAX_AM_DETS]; 
    */
    uint32 TDC_Time_Raw[MAX_AM_DETS];
    double TDC_Time_ns[MAX_AM_DETS];

    int det_ids_QDC[MAX_AM_DETS];
    int det_ids_TDC[MAX_AM_DETS];

    double Scaler_Data[MAX_SCALERS];

    bool gain_match_used;
    int num_TDC_modules = 0;
    int num_TDC_modules_fixed = 0;
    bool Scaler_Module;
    bool Scaler_module; // wut? this is stupid 

    int Fired_QDC_Channels[100][2];

    void __clean() {};
    void dump(const signal_id& id, pretty_dump_info& pdi) const;
    void show_members(const signal_id &id,const char *unit) const;
    void enumerate_members(const signal_id& id, const enumerate_info& info, enumerate_fcn callback, void* extra) const;
    void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);

};


class EXT_FATIMA_VME
{
    public:
        EXT_FATIMA_VME();
        ~EXT_FATIMA_VME();

        void __clean();
        EXT_DECL_UNPACK();

        void load_board_channel_file();

        template<typename __data_src_t>
        int CHECK_SCALER_DATA(__data_src_t &__buffer, uint32 &geo, fatima_vme_item &fat_info);
        template<typename __data_src_t>
        int CHECK_QDC_DATA(__data_src_t &__buffer, fatima_vme_item &fat_info);
        template<typename __data_src_t>
        int CHECK_TDC_DATA(__data_src_t &__buffer, fatima_vme_item &fat_info);
        bool wired_QDC(int board_id, int ch_num, fatima_vme_item &fat_info);
        bool wired_TDC(int board_id, int ch_num, fatima_vme_item &fat_info);

        void Calibrate_QDC(int id);
        void Calibrate_TDC(int id);

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info &used_info);

    public:
        
        // needed?
        raw_list_ii_zero_suppress<fatima_vme_item, fatima_vme_item, FAT_MAX_HITS> fatima_vme_info;

        // Fatima VME allocation map
        int det_ID_QDC[100][100];
        int det_ID_TDC[100][100];

    
    private:

        //stuff

};

DUMMY_EXTERNAL_MAP_STRUCT(EXT_FATIMA_VME);
DUMMY_EXTERNAL_WATCHER_STRUCT(EXT_FATIMA_VME);
DUMMY_EXTERNAL_CORRELATION_STRUCT(EXT_FATIMA_VME);
DUMMY_EXTERNAL_CALIB_MAP_STRUCT(EXT_FATIMA_VME);


DUMMY_EXTERNAL_MAP_STRUCT_FORW(EXT_FATIMA_TAMEX);

struct fatima_tamex_item
{   
    public:

        // this is a mess need to sort out
        bool tamex_end;
        bool no_edges[100];
        bool written;
        
        bool CALIBRATE = false; // for now
        bool Calibration_Done = false;
        int cal_count;

        int tamex_identifier = 52;

        int trailer_code;

        int am_fired[100];
        int sfp_id[100];
        int trigger_type[100];
        int iterator[200];
        int tamex_id[100];

        int tamex_iter;

        int Pre_Trigger_Window;
        int Post_Trigger_Window;

        bool leading_hit; // bool_t?
        //double** edge_coarse;
        //double** edge_fine;

        uint32 ch_ID_edge_lead[100][100];
        uint32 ch_ID_edge_trail[100][100];

        double coarse_T[200];
        double fine_T[200];
        uint32 ch_ID[200];

        double edge_coarse[200][200]; // * or **?
        double edge_fine[200][200]; // * or **?
        uint32 ch_ID_edge[200][200];

        int lead_arr[200][200];
        int leading_hits[200][200];
        int trailing_hits[200][200];

        void __clean() {};


};


class EXT_FATIMA_TAMEX
{
    public:
        EXT_FATIMA_TAMEX();
        ~EXT_FATIMA_TAMEX();

        EXT_DECL_UNPACK();

        void __clean();
        void reset_edges(fatima_tamex_item &item);

        template<typename __data_src_t>
        bool no_error_reached(__data_src_t &__buffer);
        template<typename __data_src_t>
        void check_trailer(__data_src_t &__buffer);
        template<typename __data_src_t>
        void get_edges(__data_src_t &__buffer, fatima_tamex_item &item);
        template<typename __data_src_t>
        void get_trigger(__data_src_t &__buffer, fatima_tamex_item &item);
        template<typename __data_src_t>
        void skip_padding(__data_src_t &__buffer);
        template<typename __data_src_t>
        void Process_TAMEX(__data_src_t &__buffer, fatima_tamex_item &item);
        void calibrate_ONLINE();
        void calibrate_OFFLINE();

        void get_Calib_type();
        void reset_edges();

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info &used_info);

    public:
        // ?
        raw_list_ii_zero_suppress<fatima_tamex_item, fatima_tamex_item, FAT_MAX_HITS> fat_tamex_info;
};

DUMMY_EXTERNAL_MAP_STRUCT(EXT_FATIMA_TAMEX);
DUMMY_EXTERNAL_WATCHER_STRUCT(EXT_FATIMA_TAMEX);
DUMMY_EXTERNAL_CORRELATION_STRUCT(EXT_FATIMA_TAMEX);
DUMMY_EXTERNAL_CALIB_MAP_STRUCT(EXT_FATIMA_TAMEX);

#endif