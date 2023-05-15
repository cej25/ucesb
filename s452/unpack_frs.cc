#include "ext_unpacking.hh"
#include "unpack_frs.hh" // won't be needed when everything is complete i think
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

EXT_TPAT::EXT_TPAT()
{
    __clean();
}

EXT_TPAT::~EXT_TPAT()
{

}

void EXT_TPAT::__clean()
{
    // stuff
    tpat_info.__clean();
}

EXT_DECL_DATA_SRC_FCN(void, EXT_TPAT::__unpack)
{
    while (!__buffer.empty())
    {   

        auto & item = tpat_info.append_item();

        item.skip = false;
        item.unbtrig = 0; // i think this should be set to zero?

        // at the moment can't grab procid etc anyway so... no need to split up
        //FRS_Unpack(__buffer);

        item.len = 0;
        bool skip_subevent = false; // don't think this is needed.

        int lenMax = __buffer.left() / 4;

        uint32 data = 0;
        for (int ii = 0; (ii < lenMax && ii < 32); ii++)
        {
            __buffer.peek_uint32(&data);
            item.tpat_main[ii] = data;

            __buffer.advance(4);
        }

        if (lenMax >= 4)
        {
            item.utpat = (item.tpat_main[4] & 0xFFFF); // not defined
        }

        // uphystrig takes priority lower to highest so I will loop descending
        for (int it = 16; it > 0; --it)
        {
            if ((item.utpat & ((int) std::pow(2, it - 1))) > 0)
            {
                item.uphystrig = it; // not defined
                item.unbtrig += 1; // not defined
            }
        }
        if (item.unbtrig == 2)
        {
            for (int it = 0; it < 16; it++)
            {
                if ((item.utpat & ((int) std::pow(2, it))) > 0)
                {
                    item.umaxtrig = it + 1; // NOT DEFINED
                }
            }
        }

    }
    
    /*

    FRS_Sort();
    FRS_Calib();
    FRS_Anal(); // come on..

    */
    

    
}

EXT_FORCE_IMPL_DATA_SRC_FCN(void, EXT_TPAT::__unpack);

template<typename __data_src_t>
void FRS_Unpack(__data_src_t &__buffer)
{

}

void EXT_TPAT::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    // do something
    tpat_info.dump(signal_id(id, "tpat_info"), pdi);
}

void EXT_TPAT::show_members(const signal_id& id, const char* unit) const
{
    tpat_info.show_members(signal_id(id, "tpat_info"), unit);
}

void EXT_TPAT::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
    {
        const signal_id &__shadow_id = __id;
        signal_id __id(__shadow_id, "tpat_info");
        {
            tpat_info.enumerate_members(__id, __info, __callback, __extra);
        }
    }
}

void EXT_TPAT::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
    tpat_info.zero_suppress_info_ptrs(used_info);
}

void frs_tpat_item::dump(const signal_id &id, pretty_dump_info &pdi) const
{   
}

void frs_tpat_item::show_members(const signal_id &id, const char* unit) const
{
}

void frs_tpat_item::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{
    
}

void frs_tpat_item::enumerate_members(const signal_id &id, const enumerate_info &info, enumerate_fcn callback, void *extra) const
{   

    
}

const char* frs_tpat_item::get_name(const std::string &name, int index) const
{
    std::ostringstream oss;
    oss << name << index;
    std::string str_name = oss.str();
    const char* cstr_name = str_name.c_str();
    return cstr_name;
} 