// header link
#include "ext_unpacking.hh"
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

EXT_PLASTIC::EXT_PLASTIC()
{
    __clean();
}

EXT_PLASTIC::~EXT_PLASTIC()
{
}

void EXT_PLASTIC::__clean()
{
    //something clean
    plastic_info.__clean();
}

EXT_DECL_DATA_SRC_FCN(void, EXT_PLASTIC::__unpack)
{   

    while (!__buffer.empty())
    {   
        auto & item = plastic_info.append_item();

        item.tamex_end = false;
        item.tamex_iter = 0;

        reset_edges(item);

        while (!item.tamex_end)
        {   
            Process_TAMEX(__buffer, item);
            if (!item.tamex_end)
            {
                item.tamex_iter++;
                __buffer.advance(4);
                if (item.tamex_iter > 3)
                {
                    std::cout << "iter over 3" << std::endl;
                }
            }   
            //__buffer.advance(4);

        }

        // calibration??
    }

    //std::cout << "err count: " << tamex_err_count << std::endl;

}

EXT_FORCE_IMPL_DATA_SRC_FCN(void, EXT_PLASTIC::__unpack);

template<typename __data_src_t>
void EXT_PLASTIC::Process_TAMEX(__data_src_t &__buffer, plastic_tamex_item &item)
{
    item.iterator[item.tamex_iter] = 0;
    item.no_edges[item.tamex_iter] = false;

    item.written = false;

    if (item.tamex_iter == 0)
    {
        uint32 trigger_window = 0;
        __buffer.peek_uint32(&trigger_window);

        item.Pre_Trigger_Window = (trigger_window & 0xFFFF);
        item.Post_Trigger_Window = ((trigger_window >> 16) & 0xFFFF);

        __buffer.advance(4);

        skip_padding(__buffer, item);
    }

    uint32 tamex_header = 0;
    __buffer.peek_uint32(&tamex_header);

    bool ongoing = ((tamex_header & 0xFF) == item.tamex_identifier) && (((tamex_header >> 24) & 0xFF) == 0) && ((((tamex_header >> 12) & 0xF) == 1) || (((tamex_header >> 12) & 0xF) == 0));
    
    if (!ongoing)
    {
        item.tamex_end = true;
        return;
    }
    if (item.tamex_iter > 0)
    {
        if (((tamex_header >> 16) & 0xFF) <= item.tamex_id[item.tamex_iter - 1])
        {
            item.tamex_end = true;
            return;
        }
    }

    item.sfp_id[item.tamex_iter] = ((tamex_header >> 12) & 0xF);
    item.trigger_type[item.tamex_iter] = ((tamex_header >> 8) & 0xF);
    item.tamex_id[item.tamex_iter] = ((tamex_header >> 16) & 0xFF);

    __buffer.advance(4);

    uint32 tamex_fired = 0;
    __buffer.peek_uint32(&tamex_fired);
    item.am_fired[item.tamex_iter] = (tamex_fired & 0xFFF) / 4 - 2;

    if (item.am_fired[item.tamex_iter] < 0)
    {
        std::cerr << "NEGATIVE TAMEX FIRED AMOUNT ENCOUNTERED IN bPlast!" << std::endl;
        //exit(0);
        item.error = true;
    }
    else item.error = false;

    __buffer.advance(4);

    uint32 tamex_begin = 0;
    __buffer.peek_uint32(&tamex_begin);
    if (((tamex_begin >> 24) & 0xFF) != item.aa)
    {
        std::cerr << "error in TAMEX format! 0xAA... word not found after fired amount!" << std::endl;
        std::cerr << "TAMEX word: " << std::hex << tamex_begin << std::endl;
        item.error = true;
    }
    else item.error = false;

    __buffer.advance(4);

    get_trigger(__buffer, item);

    if (item.am_fired[item.tamex_iter] > 3)
    {
        get_edges(__buffer, item);
    }
    else
    {
        item.no_edges[item.tamex_iter] = true;
    }

    check_trailer(__buffer, item);

}

template<typename __data_src_t>
void EXT_PLASTIC::skip_padding(__data_src_t &__buffer, plastic_tamex_item &item)
{
    bool still_padding = true;
    while (still_padding)
    {
        uint32 padding = 0;
        __buffer.peek_uint32(&padding);

        if (((padding >> 20) & 0xFFF) == 0xADD) // item.add
        {   
            __buffer.advance(4);
        }
        else still_padding = false;
    }
}

template<typename __data_src_t>
void EXT_PLASTIC::get_trigger(__data_src_t &__buffer, plastic_tamex_item &item)
{
    uint32 place_holder = 0;
    __buffer.peek_uint32(&place_holder);

    // unused things with placeholder // error checking
    if (((place_holder >> 28) & 0xF) != 6) // item.six_f
    {
        //std::cerr << "place holder error in TAMEX!" << std::endl;
        tamex_err_count++;
        return;
    }

    __buffer.advance(4);

    uint32 tamex_data = 0;
    __buffer.peek_uint32(&tamex_data);

    if (item.error == false)
    {
        item.coarse_T[item.tamex_iter] = (double)(tamex_data & 0x7FF);// (double)
        //std::cout << "coarse: " << item.coarse_T[item.tamex_iter] << std::endl;
        item.fine_T[item.tamex_iter] = (double) ((tamex_data >> 12) & 0x3FF);
        //std::cout << "fine: " << item.fine_T[item.tamex_iter] << std::endl;
        item.ch_ID[item.tamex_iter] = ((tamex_data >> 22) & 0x7F);
    }

    __buffer.advance(4);
}

void EXT_PLASTIC::reset_edges(plastic_tamex_item &item)
{
    for (int i = 0; i < PLASTIC_MAX_ITER; i++)
    {
        for (int j = 0; j < 100; ++j)
        {
            item.leading_hits[i][j] = 0;
            item.trailing_hits[i][j] = 0;
            item.ch_num[i][j] = 131313;
            item.edge_coarse[i][j] = 131313;
            item.edge_fine[i][j] = 131313;
            item.ch_ID_edge[i][j] = 131313;
        }
    }
}

template<typename __data_src_t>
void EXT_PLASTIC::get_edges(__data_src_t &__buffer, plastic_tamex_item &item)
{
    item.iterator[item.tamex_iter] = 0;

    item.written = false;

    while (no_error_reached(__buffer, item))
    {   

        uint32 place_holder = 0;
        __buffer.peek_uint32(&place_holder);

        if (((place_holder >> 28) & 0xF) != item.six_f && item.written)
        {
            __buffer.advance(4);
            continue;
        }
        else if (((place_holder >> 28) & 0xF) == item.six_f)
        {
            item.written = false;
        }


         // unused things with placeholder // error checking
        /*if (((place_holder >> 28) & 0xF) != item.six_f)
        {
            std::cerr << "place holder error in TAMEX!" << std::endl;
            //return;
            break;
        }*/

        __buffer.advance(4);

        uint32 tamex_data = 0;
        __buffer.peek_uint32(&tamex_data);

        if (item.iterator[item.tamex_iter] > 100) break;
        if (item.error == true) break;

        item.edge_coarse[item.tamex_iter][item.iterator[item.tamex_iter]] = (double) (tamex_data & 0x7FF);
        item.edge_fine[item.tamex_iter][item.iterator[item.tamex_iter]] = (double) ((tamex_data >> 12) & 0x3FF);
        item.ch_ID_edge[item.tamex_iter][item.iterator[item.tamex_iter]] = ((tamex_data >> 22) & 0x7F);

        item.lead_arr[item.tamex_iter][item.iterator[item.tamex_iter]] = (((tamex_data >> 22) & 0x7F) % 2);

        if (item.ch_ID_edge[item.tamex_iter][item.iterator[item.tamex_iter]] % 2 == 0) 
        {
            item.ch_num[item.tamex_iter][item.iterator[item.tamex_iter]] = (item.ch_ID_edge[item.tamex_iter][item.iterator[item.tamex_iter]]) / 2 - 1;
        }
        else
        {
            item.ch_num[item.tamex_iter][item.iterator[item.tamex_iter]] = (item.ch_ID_edge[item.tamex_iter][item.iterator[item.tamex_iter]] + 1) / 2 - 1;
        }

        item.iterator[item.tamex_iter]++;
        item.written = true;

        __buffer.advance(4);
    }
}

template<typename __data_src_t>
bool EXT_PLASTIC::no_error_reached(__data_src_t &__buffer, plastic_tamex_item &item)
{
    uint32 tamex_error = 0;
    __buffer.peek_uint32(&tamex_error);

    // 238 or "error_code"
    return (((tamex_error >> 24) & 0xFF) != 238); // item.error_code
}

template<typename __data_src_t>
void EXT_PLASTIC::check_trailer(__data_src_t &__buffer, plastic_tamex_item &item)
{
    __buffer.advance(4);

    uint32 tamex_trailer = 0;
    __buffer.peek_uint32(&tamex_trailer);

    if (((tamex_trailer >> 24) & 0xFF) != 187) // item.trailer_code
    {
        // std::cout << 
    }

}



void EXT_PLASTIC::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    plastic_info.dump(signal_id(id, "plastic_info"), pdi);
}

void EXT_PLASTIC::show_members(const signal_id& id, const char* unit) const
{
    plastic_info.show_members(signal_id(id, "plastic_info"), unit);
}

void EXT_PLASTIC::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
    {
        const signal_id &__shadow_id = __id;
        signal_id __id(__shadow_id, "plastic_info");
        {
            plastic_info.enumerate_members(__id, __info, __callback, __extra);
        }
    }
}

void EXT_PLASTIC::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
    plastic_info.zero_suppress_info_ptrs(used_info);
}

void plastic_tamex_item::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    for (int i = 0; i < PLASTIC_MAX_ITER; i++)
    {   
        ::dump_uint32(am_fired[i], signal_id(id, get_name("am_fired_", i)), pdi);
        ::dump_uint32(sfp_id[i], signal_id(id, get_name("sfp_id_", i)), pdi);
        ::dump_uint32(trigger_type[i], signal_id(id, get_name("trigger_type_", i)), pdi);

        ::dump_double(coarse_T[i], signal_id(id, get_name("coarse_T_", i)), pdi);
        ::dump_double(fine_T[i], signal_id(id, get_name("fine_T_", i)), pdi);
        ::dump_uint32(ch_ID[i], signal_id(id, get_name("ch_ID_", i)), pdi);

        // not tested
        ::dump_uint32(iterator[i], signal_id(id, get_name("iterator_", i)), pdi);
        ::dump_uint32(tamex_id[i], signal_id(id, get_name("tamex_id_", i)), pdi);

        for (int j = 0; j < 100; j++)
        {
            ::dump_uint32(lead_arr[i][j], signal_id(id, get_name2("lead_arr_", i, j)), pdi);

            // not tested
            ::dump_double(edge_coarse[i][j], signal_id(id, get_name2("edge_coarse_", i, j)), pdi);
            ::dump_double(edge_fine[i][j], signal_id(id, get_name2("edge_fine_", i, j)), pdi);
            ::dump_uint32(ch_ID_edge[i][j], signal_id(id, get_name2("ch_ID_edge_", i, j)), pdi);
            ::dump_uint32(ch_num[i][j], signal_id(id, get_name2("ch_num_", i, j)), pdi);

        }
    }
}

void plastic_tamex_item::show_members(const signal_id& id, const char* unit) const
{   
    for (int i = 0; i < PLASTIC_MAX_ITER; i++)
    {   
        ::show_members<uint32>(signal_id(id, get_name("am_fired_", i)), unit);
        ::show_members<uint32>(signal_id(id, get_name("sfp_id_", i)), unit);
        ::show_members<uint32>(signal_id(id, get_name("trigger_type_", i)), unit);

        ::show_members<double>(signal_id(id, get_name("coarse_T_", i)), unit);
        ::show_members<double>(signal_id(id, get_name("fine_T_", i)), unit);
        ::show_members<uint32>(signal_id(id, get_name("ch_ID_", i)), unit);

        // not tested
        ::show_members<uint32>(signal_id(id, get_name("iterator_", i)), unit);
        ::show_members<uint32>(signal_id(id, get_name("tamex_id_", i)), unit);

        for (int j = 0; j < 100; j++)
        {
            ::show_members<uint32>(signal_id(id, get_name2("lead_arr_", i, j)), unit);

            // not 
            ::show_members<double>(signal_id(id, get_name2("edge_coarse_", i, j)), unit);
            ::show_members<double>(signal_id(id, get_name2("edge_fine_", i, j)), unit);
            ::show_members<uint32>(signal_id(id, get_name2("ch_ID_edge_", i, j)), unit);
            ::show_members<uint32>(signal_id(id, get_name2("ch_num_", i, j)), unit);
        }
    }
}

void plastic_tamex_item::enumerate_members(const signal_id &id, const enumerate_info &info, enumerate_fcn callback, void *extra) const
{   
    for (int i = 0; i < PLASTIC_MAX_ITER; i++)
    {   
        callback(signal_id(id, get_name("am_fired_", i)), enumerate_info(info, &am_fired[i], ENUM_TYPE_UINT), extra);
        callback(signal_id(id, get_name("sfp_id_", i)), enumerate_info(info, &sfp_id[i], ENUM_TYPE_UINT), extra);
        callback(signal_id(id, get_name("trigger_type_", i)), enumerate_info(info, &trigger_type[i], ENUM_TYPE_UINT), extra);

        callback(signal_id(id, get_name("coarse_T_", i)), enumerate_info(info, &coarse_T[i], ENUM_TYPE_DOUBLE), extra);
        callback(signal_id(id, get_name("fine_T_", i)), enumerate_info(info, &fine_T[i], ENUM_TYPE_DOUBLE), extra);
        callback(signal_id(id, get_name("ch_ID_", i)), enumerate_info(info, &ch_ID[i], ENUM_TYPE_UINT), extra);

        // not tested
        callback(signal_id(id, get_name("iterator_", i)), enumerate_info(info, &iterator[i], ENUM_TYPE_UINT), extra);
        callback(signal_id(id, get_name("tamex_id_", i)), enumerate_info(info, &tamex_id[i], ENUM_TYPE_UINT), extra);

        for (int j = 0; j < 100; j++)
        {
            callback(signal_id(id, get_name2("lead_arr_", i, j)), enumerate_info(info, &lead_arr[i][j], ENUM_TYPE_UINT), extra);

            // not tested 
            callback(signal_id(id, get_name2("edge_coarse_", i, j)), enumerate_info(info, &edge_coarse[i][j], ENUM_TYPE_DOUBLE), extra);
            callback(signal_id(id, get_name2("edge_fine_", i, j)), enumerate_info(info, &edge_fine[i][j], ENUM_TYPE_DOUBLE), extra);
            callback(signal_id(id, get_name2("ch_ID_edge_", i, j)), enumerate_info(info, &ch_ID_edge[i][j], ENUM_TYPE_UINT), extra);
            callback(signal_id(id, get_name2("ch_num_", i, j)), enumerate_info(info, &ch_num[i][j], ENUM_TYPE_UINT), extra);
        }

    }
}    

void plastic_tamex_item::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
    for (int i = 0; i < PLASTIC_MAX_ITER; i++)
    {
        ::zero_suppress_info_ptrs(&am_fired[i], used_info);
        ::zero_suppress_info_ptrs(&sfp_id[i], used_info);
        ::zero_suppress_info_ptrs(&trigger_type[i], used_info);

        ::zero_suppress_info_ptrs(&coarse_T[i], used_info);
        ::zero_suppress_info_ptrs(&fine_T[i], used_info);
        ::zero_suppress_info_ptrs(&ch_ID[i], used_info);

        // not tested
        ::zero_suppress_info_ptrs(&iterator[i], used_info);
        ::zero_suppress_info_ptrs(&tamex_id[i], used_info);

        for (int j = 0; j < 100; j++)
        {
            ::zero_suppress_info_ptrs(&lead_arr[i][j], used_info);

            // not tested
            ::zero_suppress_info_ptrs(&edge_coarse[i][j], used_info);
            ::zero_suppress_info_ptrs(&edge_fine[i][j], used_info);
            ::zero_suppress_info_ptrs(&ch_ID_edge[i][j], used_info);
            ::zero_suppress_info_ptrs(&ch_num[i][j], used_info);
        }
    }
}

const char* plastic_tamex_item::get_name(const std::string &name, int index) const
{
    std::ostringstream oss;
    oss << name << index;
    std::string str_name = oss.str();
    const char* cstr_name = str_name.c_str();
    return cstr_name;
} 

const char* plastic_tamex_item::get_name2(const std::string &name, int index, int index2) const
{
    std::ostringstream oss;
    oss << name << index << "_" << index2;
    std::string str_name = oss.str();
    const char* cstr_name = str_name.c_str();
    return cstr_name;
} 