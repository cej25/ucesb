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
    uint32 counter = 0;

    while (!__buffer.empty())
    {   
        auto & item = plastic_info.append_item();
        counter++;

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
            }   
            //__buffer.advance(4);

        }

        std::cout << "counter: " << counter << std::endl;

        // calibration??

    }

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

        std::cout << "trigger_window: " << std::hex  << trigger_window << std::dec << std::endl;

        item.Pre_Trigger_Window = (trigger_window & 0xFFFF);
        item.Post_Trigger_Window = ((trigger_window >> 16) & 0xFFFF);

        __buffer.advance(4);

        skip_padding(__buffer, item);
    }

    uint32 tamex_header = 0;
    __buffer.peek_uint32(&tamex_header);

    std::cout << "tamex_header: " << std::hex  << tamex_header << std::dec << std::endl;

    bool ongoing = ((tamex_header & 0xFF) == item.tamex_identifier) && (((tamex_header >> 24) & 0xFF) == 0) && ((((tamex_header >> 12) & 0xF) == 1) || (((tamex_header >> 12) & 0xF) == 0));
    
    if (!ongoing)
    {
        item.tamex_end = true;
        std::cout << "tamex end is true (1). buffer left is: " << __buffer.left() << std::endl;
        return;
    }
    if (item.tamex_iter > 0)
    {
        if (((tamex_header >> 16) & 0xFF) <= item.tamex_id[item.tamex_iter - 1])
        {
            item.tamex_end = true;
            std::cout << "tamex end is true (2). buffer left is: " << __buffer.left() << std::endl;
            return;
        }
    }

    item.sfp_id[item.tamex_iter] = ((tamex_header >> 12) & 0xF);
    item.trigger_type[item.tamex_iter] = ((tamex_header >> 8) & 0xF);
    item.tamex_id[item.tamex_iter] = ((tamex_header >> 16) & 0xFF);

    __buffer.advance(4);

    uint32 tamex_fired = 0;
    __buffer.peek_uint32(&tamex_fired);
    std::cout << "tamex_fired: " << std::hex  << tamex_fired << std::dec << std::endl;
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
    std::cout << "tamex_begin: " << std::hex  << tamex_begin << std::dec << std::endl;
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
        std::cout << "padding: " << std::hex  << padding << std::dec << std::endl;

        if (((padding >> 20) & 0xFFF) == item.add)
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
    std::cout << "place_holder: " << std::hex  << place_holder << std::dec << std::endl;

    // unused things with placeholder // ERRORR?R?R??R?R
    if (((place_holder >> 28) & 0xF) != item.six_f)
    {
        std::cerr << "place holder error in TAMEX!" << std::endl;
        return;
    }

    __buffer.advance(4);

    uint32 tamex_data = 0;
    __buffer.peek_uint32(&tamex_data);
    std::cout << "tamex_data: " << std::hex  << tamex_data << std::dec << std::endl;

    if (item.error == false)
    {
        item.coarse_T[item.tamex_iter] = (double) (tamex_data & 0x7FF);
        item.fine_T[item.tamex_iter] = (double) ((tamex_data >> 12) & 0x3FF);
        item.ch_ID[item.tamex_iter] = ((tamex_data >> 22) & 0x7F);
    }

    __buffer.advance(4);
}

void EXT_PLASTIC::reset_edges(plastic_tamex_item &item)
{
    for (int i = 0; i < 4; i++)
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

        std::cout << "apparently no error reached - error code = " << std::hex  << item.error_code << std::dec << std::endl;
        uint32 place_holder = 0;
        __buffer.peek_uint32(&place_holder);
        std::cout << "place_holder: " << std::hex  << place_holder << std::dec << std::endl;

        if (((place_holder >> 28) & 0xF) != item.six_f && item.written)
        {
            __buffer.advance(4);
            continue;
        }
        else if (((place_holder >> 28) & 0xF) == item.six_f)
        {
            item.written = false;
        }

         // unused things with placeholder // ERRORR?R?R??R?R
        /*if (((place_holder >> 28) & 0xF) != item.six_f)
        {
            std::cerr << "place holder error in TAMEX!" << std::endl;
            //return;
            break;
        }*/

        __buffer.advance(4);

        uint32 tamex_data = 0;
        __buffer.peek_uint32(&tamex_data);
        std::cout << "tamex_data: " << std::hex  << tamex_data << std::dec << std::endl;

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
    std::cout << "tamex_error: " << std::hex  << tamex_error << std::dec << std::endl;

    // 238 or "error_code"
    return (((tamex_error >> 24) & 0xFF) != item.error_code);
}

template<typename __data_src_t>
void EXT_PLASTIC::check_trailer(__data_src_t &__buffer, plastic_tamex_item &item)
{
    __buffer.advance(4);

    uint32 tamex_trailer = 0;
    __buffer.peek_uint32(&tamex_trailer);
    std::cout << "tamex_trailer: " << std::hex  << tamex_trailer << std::dec << std::endl;

    // 187 or trailer_code
    if (((tamex_trailer >> 24) & 0xFF) != item.trailer_code)
    {
        // print something?
    }

}



void EXT_PLASTIC::dump(const signal_id &id, pretty_dump_info &pdi) const
{
}

void EXT_PLASTIC::show_members(const signal_id& id, const char* unit) const
{
}

void EXT_PLASTIC::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
}

void EXT_PLASTIC::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
}