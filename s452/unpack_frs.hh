#ifndef __FRS_UNPACK_HH__
#define __FRS_UNPACK_HH__

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
#include <vector>

DUMMY_EXTERNAL_MAP_STRUCT_FORW(EXT_FRS);

struct frs_item
{

    // 32 is number of scalers or something?
    // 21 is something else
    // 128 x 64 is something else
    // 32 x 2 is something
    // 32 x 10 is something

    // tpat stuff
    bool skip;
    uint32 tpat_main[32];
    int utpat;
    int uphystrig;
    int unbtrig;
    int umaxtrig;

    // frs crate
    uint32 vme_frs[21][32];
    uint32 scaler_frs[32];
    // lets start here
    std::vector<int> scaler_frs_elements;
    uint32 vme_main[21][32];

    // tpc crate
    uint32 leading_v1190_tpcs2[128][64]; // TPC crate (S2 TPC)
    uint32 nhit_v1190_tpcs2[128];
    int tmp_nhit_prev;
    uint32 vme_tpcs2[21][32]; // TPC crate (S2 TPC)

    // vftx / tof crate
    uint32 vftx_cc[VFTX_N][VFTX_MAX_CHN][VFTX_MAX_HITS]; // maybe uint16 or uint8 works too
    uint32 vftx_ft[VFTX_N][VFTX_MAX_CHN][VFTX_MAX_HITS];
    uint32 vftx_mult[VFTX_N][VFTX_MAX_CHN];
    uint32 vme_tof[21][32]; // TOF crate

    // frs main
    uint32 nhit_v1290_main[32][2]; 
    uint32 leading_v1290_main[32][10]; 
    uint32 trailing_v1290_main[32][10];
    uint32 scaler_main[32];


    void __clean() {};

    void dump(const signal_id &id,pretty_dump_info &pdi) const;
    void show_members(const signal_id &id,const char *unit) const;
    void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
    void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);
    const char* get_name(const std::string &name, int index) const;
    const char* get_name2(const std::string &name, int index, int index2) const;

};

class EXT_FRS
{
    public:
        EXT_FRS();
        ~EXT_FRS();

        EXT_DECL_UNPACK_ARG(int procid, int type, int subtype);

        void __clean();

        int getbits(uint32 value, int nword, int start, int length);
        int get2bits(uint32 value, int nword, int start, int length);

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);
        const char* get_name(const std::string &name, int index) const;

    public:
        raw_list_ii_zero_suppress<frs_item, frs_item, FRS_MAX_HITS> frs_info;

};

DUMMY_EXTERNAL_MAP_STRUCT(EXT_FRS);
DUMMY_EXTERNAL_WATCHER_STRUCT(EXT_FRS);
DUMMY_EXTERNAL_CORRELATION_STRUCT(EXT_FRS);
DUMMY_EXTERNAL_CALIB_MAP_STRUCT(EXT_FRS);

#endif