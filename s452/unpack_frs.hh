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

DUMMY_EXTERNAL_MAP_STRUCT_FORW(EXT_TPAT);

struct frs_tpat_item
{   
    bool skip;
    int len;
    uint32 tpat_main[32];
    int utpat; // this is to pass down the line
    int uphystrig; // to have something else than TPC
    int unbtrig; // number of triggers in utpat
    int umaxtrig; // second trigger in utpat

    void __clean() {};

    void dump(const signal_id &id,pretty_dump_info &pdi) const;
    void show_members(const signal_id &id,const char *unit) const;
    void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
    void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);
    const char* get_name(const std::string &name, int index) const;



};

class EXT_TPAT
{
    public:
        EXT_TPAT();
        ~EXT_TPAT();

        EXT_DECL_UNPACK();

        void __clean();

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);
        const char* get_name(const std::string &name, int index) const;

    public:
        // eugh change how you name all of this - CALUM
        raw_list_ii_zero_suppress<frs_tpat_item,frs_tpat_item, FRS_TPAT_MAX_HITS> tpat_info;


};

DUMMY_EXTERNAL_MAP_STRUCT(EXT_TPAT);
DUMMY_EXTERNAL_WATCHER_STRUCT(EXT_TPAT);
DUMMY_EXTERNAL_CORRELATION_STRUCT(EXT_TPAT);
DUMMY_EXTERNAL_CALIB_MAP_STRUCT(EXT_TPAT);

#endif /* __FRS_UNPACK_HH__ */