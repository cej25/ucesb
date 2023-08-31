#ifndef __TEST_HH__
#define __TEST_HH__

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

DUMMY_EXTERNAL_MAP_STRUCT_FORW(EXT_CRATE_TEST);

struct crate_item
{   
    public:
        uint32 crate_test[2];

        void __clean() {};

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);

};

class EXT_CRATE_TEST
{
    public:
        EXT_CRATE_TEST();
        ~EXT_CRATE_TEST();

        EXT_DECL_UNPACK_ARG(int procid, int type, int subtype);

        void __clean();

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);

    public:
        raw_list_ii_zero_suppress<crate_item, crate_item, 2> crate_info;    
};

DUMMY_EXTERNAL_MAP_STRUCT(EXT_CRATE_TEST);
DUMMY_EXTERNAL_WATCHER_STRUCT(EXT_CRATE_TEST);
DUMMY_EXTERNAL_CORRELATION_STRUCT(EXT_CRATE_TEST);
DUMMY_EXTERNAL_CALIB_MAP_STRUCT(EXT_CRATE_TEST);




// ******** TPC PART *************** ////////


DUMMY_EXTERNAL_MAP_STRUCT_FORW(EXT_TPC_TEST);

struct tpc_item
{   
    public:
        uint32 tpc_test[2];

        void __clean() {};

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);

};

class EXT_TPC_TEST
{
    public:
        EXT_TPC_TEST();
        ~EXT_TPC_TEST();

        EXT_DECL_UNPACK_ARG(int procid, int type, int subtype);

        void __clean();

        void dump(const signal_id &id,pretty_dump_info &pdi) const;
        void show_members(const signal_id &id,const char *unit) const;
        void enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const;
        void zero_suppress_info_ptrs(used_zero_suppress_info& used_info);
        
    public:
        raw_list_ii_zero_suppress<tpc_item, tpc_item, 2> tpc_info;    
};

DUMMY_EXTERNAL_MAP_STRUCT(EXT_TPC_TEST);
DUMMY_EXTERNAL_WATCHER_STRUCT(EXT_TPC_TEST);
DUMMY_EXTERNAL_CORRELATION_STRUCT(EXT_TPC_TEST);
DUMMY_EXTERNAL_CALIB_MAP_STRUCT(EXT_TPC_TEST);


#endif