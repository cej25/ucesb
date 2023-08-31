#include "ext_test.hh"
#include "unpack_structures.hh"

// ucesb internals
#include "data_src.hh"
#include "enumerate.hh"
#include "simple_data_ops.hh"
#include "zero_suppress.hh"
#include "zero_suppress_map.hh"
#include "error.hh"

// c++ stuff
#include <algorithm>
#include <iterator>
#include <set>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>
#include <vector>
#include <cstdlib>

EXT_CRATE_TEST::EXT_CRATE_TEST()
{
    __clean();
}

EXT_CRATE_TEST::~EXT_CRATE_TEST()
{

}

void EXT_CRATE_TEST::__clean()
{
    crate_info.__clean();
    
}

EXT_DECL_DATA_SRC_FCN_ARG(void, EXT_CRATE_TEST::__unpack, int procid, int type, int subtype)
{   

    uint32 data;
    auto & item = crate_info.append_item();
    while (!__buffer.empty())
    {
        __buffer.get_uint32(&data);
        item.crate_test[0] = data;

        std::cout << item.crate_test[0] << std::endl;
    }
}

EXT_FORCE_IMPL_DATA_SRC_FCN_ARG(void, EXT_CRATE_TEST::__unpack, int procid, int type, int subtype);



// ---- required by ucesb ------ //

void EXT_CRATE_TEST::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    // do something
    crate_info.dump(signal_id(id, "crate_info"), pdi);
}

void EXT_CRATE_TEST::show_members(const signal_id& id, const char* unit) const
{
    crate_info.show_members(signal_id(id, "crate_info"), unit);
}

void EXT_CRATE_TEST::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
   {
        const signal_id &__shadow_id = __id;
        signal_id __id(__shadow_id, "crate_info");
        {
            crate_info.enumerate_members(__id, __info, __callback, __extra);
        }
    }
}

void EXT_CRATE_TEST::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
    crate_info.zero_suppress_info_ptrs(used_info);
}

void crate_item::dump(const signal_id &id, pretty_dump_info &pdi) const
{
}

void crate_item::show_members(const signal_id &id, const char* unit) const
{
    
}

void crate_item::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{   

}

void crate_item::enumerate_members(const signal_id &id, const enumerate_info &info, enumerate_fcn callback, void *extra) const
{   

}








// ********* TPC SIDE ************ //


EXT_TPC_TEST::EXT_TPC_TEST()
{
    __clean();
}

EXT_TPC_TEST::~EXT_TPC_TEST()
{

}

void EXT_TPC_TEST::__clean()
{
    tpc_info.__clean();
    
}

EXT_DECL_DATA_SRC_FCN_ARG(void, EXT_TPC_TEST::__unpack, int procid, int type, int subtype)
{   

    uint32 data;
    //auto & item = tpc_info.append_item();
    while (!__buffer.empty())
    {   
        __buffer.get_uint32(&data);
    }
}

EXT_FORCE_IMPL_DATA_SRC_FCN_ARG(void, EXT_TPC_TEST::__unpack, int procid, int type, int subtype);



// ---- required by ucesb ------ //

void EXT_TPC_TEST::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    // do something
    tpc_info.dump(signal_id(id, "tpc_info"), pdi);
}

void EXT_TPC_TEST::show_members(const signal_id& id, const char* unit) const
{
    tpc_info.show_members(signal_id(id, "tpc_info"), unit);
}

void EXT_TPC_TEST::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
   {
        const signal_id &__shadow_id = __id;
        signal_id __id(__shadow_id, "tpc_info");
        {
            tpc_info.enumerate_members(__id, __info, __callback, __extra);
        }
    }
}

void EXT_TPC_TEST::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
    tpc_info.zero_suppress_info_ptrs(used_info);
}

void tpc_item::dump(const signal_id &id, pretty_dump_info &pdi) const
{
}

void tpc_item::show_members(const signal_id &id, const char* unit) const
{
    
}

void tpc_item::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{   
    ::zero_suppress_info_ptrs(&tpc_test[0], used_info);
}

void tpc_item::enumerate_members(const signal_id &id, const enumerate_info &info, enumerate_fcn callback, void *extra) const
{   

}

