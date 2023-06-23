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
#include <vector>

EXT_FRS::EXT_FRS()
{
    __clean();
}

EXT_FRS::~EXT_FRS()
{

}

void EXT_FRS::__clean()
{
    frs_info.__clean();
}

EXT_DECL_DATA_SRC_FCN_ARG(void, EXT_FRS::__unpack, int procid, int type, int subtype)
{

    int lenMax = (int) __buffer.left() / 4; // number of words left
    int len = 0;
    uint32 data = 0;

    //std::cout << "lenMax: " << lenMax << std::endl;

    while (!__buffer.empty()) // not sure if this is needed.. may need to investigate
    {
        auto & item = frs_info.append_item();

        if (type == 36 && subtype == 3600) // tpat
        {
            item.skip = false; // does this need to be part of item?
            item.unbtrig = 0; // idk if this can/should be reset every time.... 

            for (int ii = 0; (ii < lenMax && ii < 32); ii++)
            {   
                __buffer.peek_uint32(&data);
                item.tpat_main[ii] = data;
                __buffer.advance(4);
            }

            if (lenMax >= 4)
            {
                item.utpat = (item.tpat_main[4] & 0xFFFF);
            }

            for (int it = 16; it > 0; --it)
            {
                if ((item.utpat & ((int) std::pow(2, it - 1))) > 0)
                {   
                    item.uphystrig = it;
                    item.unbtrig += 1;
                }
            }

            if (item.unbtrig == 2)
            {
                for (int it = 0; it < 16; it++)
                {
                    if ((item.utpat & ((int) std::pow(2, it))) > 0)
                    {
                        item.umaxtrig = it + 1;
                    }
                }
            }

        }

        else if (type == 12 && subtype == 1)
        {   
            
            uint32 event_flag = 0;
            __buffer.peek_uint32(&event_flag); // unused?
            __buffer.advance(12);
            len += 3;

            // needed?
            for (int i = 0; i < 21; i++)
            {
                for (int j = 0; j < 32; j++)
                {
                    item.vme_main[i][j] = 0;
                }
            }

            switch (procid)
            {
                case 10: // "main crate"
                    
                    // this hack deals with all small data events that also screw up everything else
                    if (lenMax < 15)
                    {   
                        __buffer.peek_uint32(&data);
                        if (data == 0xBABABABA)
                        {
                            __buffer.advance(__buffer.left()); // to end somehow
                            break;
                        }
                    }

                    // v1290 TDC
                    if (len < lenMax)
                    {   
                        __buffer.peek_uint32(&data);
                        //int vme_geo = getbits(data, 1, 1, 5); // unusued in this scope
                        int vme_type = getbits(data, 2, 12, 5);
                        
                        __buffer.advance(4);
                        len++;
                        
                        int multihit = 0; // counter = 0;
                        for (int i = 0; i < 32; i++)
                        {
                            for (int j = 0; j < 2; j++)
                            {
                                item.nhit_v1290_main[i][j] = 0;
                            }
                        }

                        if (vme_type == 8)
                        {
                            while (len < lenMax)
                            {   
                                __buffer.peek_uint32(&data);
                                vme_type = getbits(data, 2, 12, 5);
                                
                                if (vme_type == 1)
                                {
                                    __buffer.advance(4);
                                    len++;
                                }
                                
                                __buffer.peek_uint32(&data);
                                vme_type = getbits(data, 2, 12, 5);

                                if (vme_type == 0)
                                {
                                    // this indicates a TDC measurement
                                    int vme_chn = getbits(data, 2, 6, 5);
                                    int LeadingOrTrailing = getbits(data, 2, 11, 1);
                                    int value = getbits(data, 1, 1, 21);

                                    multihit = item.nhit_v1290_main[vme_chn][LeadingOrTrailing];
                                    
                                    if (multihit >= 10)
                                    {
                                        __buffer.advance(4);
                                        len++;
                                        continue;
                                    }
                                    
                                    if (LeadingOrTrailing == 0)
                                    {
                                        if (value > 0)
                                        {
                                            item.leading_v1290_main[vme_chn][multihit] = value;
                                        }
                                    }
                                    else
                                    {
                                        if (value > 0)
                                        {
                                            item.trailing_v1290_main[vme_chn][multihit] = value;
                                        }
                                    }

                                    item.nhit_v1290_main[vme_chn][LeadingOrTrailing]++;

                                    __buffer.advance(4);
                                    len++;
                                }
                                else
                                {
                                    // TDC trailer
                                    if (vme_type == 16)
                                    {   
                                        //__buffer.peek_uint32(&data);
                                        // unusused here entirely
                                        //int vme_geoEnd = getbits(data, 1, 1, 5); 
                                        
                                        __buffer.advance(4);
                                        len++;
                                        break;
                                    }

                                    __buffer.advance(4);
                                    len++;
                                }
                            } // while len < lenMax loop
                        } // if type == 8
                    }

                    __buffer.advance(4);
                    len++;

                    //std::cout << "buffer left: " << __buffer.left() << std::endl;
                    //std::cout << "len: " << len << std::endl;

                    if (len == lenMax)
                    {
                        break;
                    }


                    // Next is V830 scaler
                    {   
                        __buffer.peek_uint32(&data);
                        //int vme_geo = getbits(data, 2, 12, 5); // unused in this scope
                        //int vme_type = getbits(data, 2, 9, 3); // unused in this scope
                        int vme_nlw = getbits(data, 2, 3, 6);

                        __buffer.advance(4);
                        len++;

                        for (int i_ch = 0; i_ch < vme_nlw; i_ch++)
                        {   
                            __buffer.peek_uint32(&data);
                            item.scaler_main[i_ch] = data;

                            __buffer.advance(4);
                            len++;
                        }
                    } // end of V830

                    // V792
                    {   
                        __buffer.peek_uint32(&data);
                        int vme_chn = 0;
                        int vme_geo = getbits(data, 2, 15, 5);
                        int vme_type = getbits(data, 2, 9, 3);
                        int vme_nlw = getbits(data, 1, 9, 6);

                        __buffer.advance(4);
                        len++;

                        if (vme_type == 6)
                        {
                            // not valid data
                        }

                        if ((vme_type == 2) && (vme_nlw > 0))
                        {
                            for (int i = 0; i < vme_nlw; i++)
                            {   
                                __buffer.peek_uint32(&data);
                                //vme_geo = getbits(data, 2, 12, 5); // commenting out for now since it gets reassigned
                                vme_type = getbits(data, 2, 9, 3);
                                vme_chn = getbits(data, 2, 1, 5);

                                vme_geo = 4; // first line seems pointless but ok
                                item.vme_main[vme_geo][vme_chn] = getbits(data, 1, 1, 16);

                                __buffer.advance(4);
                                len++;
                            }

                            __buffer.advance(4);
                            len++;
                        }
                    } // end of a while loop in Go4 that is commented out
                    
                    // second V792 commented out in Go4
    
                    break; // case 10
                
                case 20: // "tpc crate"

                    // added in !__buffer.empty() to prevent crashes
                    for (int ii = 0; (ii < 17 && !__buffer.empty()); ii++)
                    {   
                        __buffer.advance(4);
                        len++;
                    }

                    for (int ii = 0; ii < 128; ii++)
                    {
                        item.nhit_v1190_tpcs2[ii] = 0;
                    }

                    // checking buffer left rather than len == lenMax is nicer I think.
                    if (__buffer.left() == 0)
                    {
                        break;
                    }
                    else
                    {
                        __buffer.advance(4);
                        len++;
                        if (__buffer.left() == 0)
                        {
                            break;
                        }
                    }

                    __buffer.peek_uint32(&data);
                    while ((len < lenMax) && (data) != 0xBABABABA)
                    {
                        int type_tpc_v1190 = ((data >> 27) & 0x1F);

                        if (type_tpc_v1190 == 0x8)
                        {
                            // global header, ignore
                        }
                        else if (type_tpc_v1190 == 0x1)
                        {
                            // TDC header, ignore
                        }
                        else if (type_tpc_v1190 == 0x3)
                        {
                            // TDC trailer, ignore
                        }
                        else if (type_tpc_v1190 == 0x4)
                        {
                            // error status
                            std::cout << "TPC Crate, V1190, error data are found: " << std::hex << data << std::dec << std::endl; // flush
                        }
                        else if (type_tpc_v1190 == 0x10)
                        {
                            // global trailer, ignore
                        }
                        else if (type_tpc_v1190 == 0x0)
                        {
                            // this is real data
                            int ch_tpc_v1190 = ((data >> 19) & 0x7F);
                            int check_leading_tpc_v1190 = ((data >> 26) & 0x1); // 0 leading, 1 trailing
                            int data_tpc_v1190 = (data & 0x7FFFF); 

                            if (check_leading_tpc_v1190 == 0)
                            {
                                item.tmp_nhit_prev = item.nhit_v1190_tpcs2[ch_tpc_v1190];
                                item.nhit_v1190_tpcs2[ch_tpc_v1190]++;

                                if(item.tmp_nhit_prev < 16) // max 16 prepared. 64 used in sort.
                                {
                                    item.leading_v1190_tpcs2[ch_tpc_v1190][item.tmp_nhit_prev] = data_tpc_v1190;
                                }

                            }

                        }
                        else
                        {
                            std::cout << "TPC crate, V1190, strange data are found: " << std::hex << data << std::dec << std::endl; // flush
                        }

                        __buffer.advance(4);
                        len++;
                        __buffer.peek_uint32(&data); // update data now for while loop to continue

                    } // end of TDC V1190

                    // check if end of this procid (with/without barrier)
                    if (len == lenMax)
                    {
                        break;
                    }
                    if (data == 0xBABABABA)
                    {
                        __buffer.advance(4);
                        len++;
                    }
                    if (len == lenMax)
                    {
                        break;
                    }

                    // from here, 2 ADCs (optional)
                    while (len < lenMax)
                    {   
                        __buffer.peek_uint32(&data);
                        int vme_type = ((data >> 24) & 0x7);
                        int vme_geo = ((data >> 27) & 0x1F);
                        
                        if (vme_type == 2)
                        {
                            // header, ignore
                        }
                        else if (vme_type == 4)
                        {
                            // end-of-block, ignore
                        }
                        else if (vme_type == 0)
                        {
                            // data
                            int vme_chn = ((data >> 16) & 0x3F);
                            int vme_data = (data & 0x3FFF);
                            item.vme_tpcs2[vme_geo][vme_chn] = vme_data;
                        }
                        else if (data == 0xBABABABA)
                        {
                            // barrier between 2 ADCs, for example, ignore
                        }
                        else
                        {
                            // unknown word
                            std::cout << "TPC crate, ADC data, strange data are found: " << std::hex << data << std::dec << std::endl;
                        }

                        __buffer.advance(4);
                        len++;
                    }

                    break;
                
                case 30: // "frs crate"

                    { // start of V830 - do not remove this bracket
                        int isADCgeo2 = 0;

                        __buffer.peek_uint32(&data);

                        int scalertest = getbits(data, 2, 5, 12);
                        if (scalertest == 72) // 0x48
                        {
                            int vme_geo = getbits(data, 2, 12, 5);
                            int vme_type = getbits(data, 2, 9, 3);
                            int vme_nlw = getbits(data, 2, 3, 6);

                            __buffer.advance(4);
                            len++;

                            if (vme_type != 4)
                            {
                                std::cout << "E> Scaler type missed match ! Proc ID 30 GEO " << vme_geo << " type 4 =/=" << vme_type << std::endl; 
                                break;
                            }

                            for (int i_ch = 0; i_ch < vme_nlw; i_ch++)
                            {   
                                __buffer.peek_uint32(&data);
                                item.scaler_frs[i_ch] = data;
                                item.scaler_frs_elements.push_back(i_ch);
                                std::cout << "nlw:" << vme_nlw << std::endl;
                                std::cout << "i_ch: " << i_ch << std::endl;
                                std::cout << "vector [30]: " << item.scaler_frs_elements[30] << std::endl;
                                
                                __buffer.advance(4);
                                len++;
                            }
                        } // end of V830

                        // --- V775 TDC / V785 ADC ---- //
                        while (len < lenMax)
                        {   
                            __buffer.peek_uint32(&data);
                            int vme_chn = 0;
                            int vme_geo = getbits(data, 2, 12, 5);
                            int vme_type = getbits(data, 2, 9, 3);
                            int vme_nlw = getbits(data, 1, 9, 6);

                            __buffer.advance(4);
                            len++;

                            if (vme_geo == 2)
                            {
                                isADCgeo2 = 1;
                            }

                            if ((vme_type == 2) && (vme_nlw > 0))
                            {
                                for (int i = 0; i < vme_nlw; i++)
                                {   
                                    __buffer.peek_uint32(&data);
                                    vme_geo = getbits(data, 2, 12, 5);
                                    vme_type = getbits(data, 2, 9, 3);
                                    vme_chn = getbits(data, 2, 1, 5);
                                    item.vme_frs[vme_geo][vme_chn] = getbits(data, 1, 1, 16);

                                    __buffer.advance(4);
                                    len++;
                                }
                            }

                            // sanity check after V7X5 unpacking (CEJ: ??)
                            __buffer.peek_uint32(&data);
                            vme_type = getbits(data, 2, 9, 3);
                            if (vme_type != 4)
                            {
                                std::cout << "issue in unpacking Proc Id 30, exiting " <<std::endl; 
                                break;
                            }

                            __buffer.advance(4);
                            len++;

                        } // end of while loop

                        if (isADCgeo2 == 1)
                        {
                            for (int i = 0; i < 32; i++)
                            {
                                item.vme_frs[3][i] = item.vme_frs[2][i];
                            }
                        }

                    }

                    break; // procid 30
                
                case 35: 
                    // vftx at S2 SOFIA

                    uint32 p32_tmp, marker;
                    uint16 cnt, channel; // how/why are we redefining this???
                    int word;

                    for (int module = 0; module < VFTX_N; module++)
                    {
                        for (int channel = 0; channel < VFTX_MAX_CHN; channel++)
                        {
                            for (int hit = 0; hit < VFTX_MAX_HITS; hit++)
                            {
                                item.vftx_cc[module][channel][hit] = 0;
                                item.vftx_ft[module][channel][hit] = 0;
                            }
                            item.vftx_mult[module][channel] = 0;
                        }
                    
                    } // first module loop -- GO4 code is stupid and doesn't use brackets for this.

                    for (int module = 0; module < VFTX_N; module++)
                    {   
                        __buffer.peek_uint32(&p32_tmp);
                        __buffer.advance(4);
                        len++; // I think this is necessary but GO4 doesn't do

                        marker = ((p32_tmp >> 24) & 0xFF); // most significant 8 bits
                        cnt = ((p32_tmp >> 9) & 0x1FF); // bits 9-17;
                            
                        if (marker == 0xAB000000)
                        {   
                            __buffer.peek_uint32(&p32_tmp);
                            __buffer.advance(4);
                            len++; // I think this is necessary but GO4 doesn't do

                            for (word = 0; word < cnt - 1; word++)
                            {   
                                __buffer.peek_uint32(&p32_tmp);
                                __buffer.advance(4);
                                len++; // i think this is necessary, but it is not done in GO4 code.

                                channel = (uint16) getbits(p32_tmp, 2, 11, 5);

                                if (item.vftx_mult[module][channel] < VFTX_MAX_HITS)
                                {
                                    item.vftx_cc[module][channel][item.vftx_mult[module][channel]] = ((p32_tmp >> 11) & 0x1FFF); // bits 11 - 23
                                    item.vftx_ft[module][channel][item.vftx_mult[module][channel]] = (p32_tmp & 0x7FF); // least significant 11 digits
                                    // histogram filling???? surely not here. //h1_vftx_ft[module][channel]->Fill(vftx_ft[module][channel][0]);
                                }
                                item.vftx_mult[module][channel]++;
                            }

                            #if CALIBRATION_VFTX
                            for (channel = 0; channel < VFTX_MAX_CHN; channel++)
                            {
                                Vftx_Stat[module][channel]++;
                                std::cout << "Vftx_Stat[module][channel] " << Vftx_Stat[module][channel] << " module " << module << " channel " << channel << std::endl;
                                if (Vftx_Stat[module][channel] == 25000)
                                {
                                    VFTX_Calibration(module, channel);
                                }
                            }
                            #endif
                                
                        } // marker = 0xAB000000
                            
                    } // second module loop

                    __buffer.advance(4);
                    len++;
                    if (len == lenMax)
                    {
                        break;
                    }

                    { // Mesytec MQDC-32

                        int vme_geo = 11;
                        while (len < lenMax)
                        {
                            __buffer.advance(4);
                            len++;

                            __buffer.peek_uint32(&data);
                            int vme_type = getbits(data, 2, 15, 2);
                            //int module_id = getbits(data, 2, 1, 8); // unused in this scope

                            if (vme_type == 1) // header
                            {
                                int vme_nlw = getbits(data, 1, 1, 12);
                                __buffer.advance(4);
                                len++;

                                __buffer.peek_uint32(&data);
                                int vme_type = getbits(data, 2, 15, 2);

                                if ((vme_type == 0) && (vme_nlw > 0) && !__buffer.empty()) // data
                                {
                                    for (int i = 0; i < vme_nlw; i++)
                                    {   
                                        __buffer.peek_uint32(&data);
                                        int vme_chn = getbits(data, 2, 1, 5);
                                        int value = getbits(data, 1, 1, 12);
                                        //int overflow = getbits(data, 1, 16, 1); // unusued in this scope
                                        
                                        if (value > 0)
                                        {
                                            item.vme_tof[vme_geo][vme_chn] = value;
                                        }

                                        __buffer.advance(4);
                                        len++;
                                    }
                                }
                                else if (vme_type == 3)
                                {
                                    std::cout << "This is the end of module 0." << std::endl;
                                }
                            }
                        }
                    } // end of Mesytec MQDC-32

                    { // Mesytec MTDC-32
                        int vme_geo = 16;

                        while (len < lenMax)
                        {
                            __buffer.advance(4);
                            len++;
                            __buffer.peek_uint32(&data);
                            //int module_id = getbits(data, 2, 1, 8); // unused in this scope
                            int vme_type = getbits(data, 2, 15, 2);
                            //int hit = 0; // unused in this scope

                            if (vme_type == 1) // oh shit is this going to screw things up..
                            {
                                int vme_nlw = getbits(data, 1, 1, 12);

                                for (int ii = 0; ii < vme_nlw; ii++)
                                {
                                    __buffer.advance(4);
                                    __buffer.peek_uint32(&data);

                                    int value = getbits(data, 1, 1, 16);

                                    if (vme_type == 0)
                                    {
                                        int vme_chn = getbits(data, 2, 1, 5);
                                        //int vme_trig = getbits(data, 2, 6, 1); // entirely unused in available GO4 code.

                                        item.vme_tof[vme_geo][vme_chn] = value;
                                    }
                                    else if (getbits(data, 2, 15, 2) == 3)
                                    {
                                        std::cout << "This is end of module 0." << std::endl;
                                    }
                                    else
                                    {
                                        std::cout << "Unknown data for vme_tof" << std::endl;
                                    }
                                }
                            }
                        }

                        // check if end of this procid (with/without barrier)
                        if (len == lenMax)
                        {
                            break;
                        }
                        if (data != 0xBABABABA)
                        {
                            __buffer.advance(4);
                            len++;
                        }
                        if (len == lenMax) // this kinda seems pointless as it just breaks next anyway?
                        {
                            break;
                        }

                    } // end of Mesytec MTDC-32

                    break; // procid 35
            }
        }

    }
}

EXT_FORCE_IMPL_DATA_SRC_FCN_ARG(void, EXT_FRS::__unpack, int procid, int type, int subtype);


// ----- extra functions ---- // 
int EXT_FRS::getbits(uint32 value, int nword, int start, int length)
{   
    uint32 buf = (uint32) value;
    buf = buf >> ((nword - 1) * 16 + start - 1);
    buf = buf & ((1 << length) - 1);
    return buf;
}

int EXT_FRS::get2bits(uint32 value, int nword, int start, int length)
{   
    uint32 buf = (uint32) value;
    buf = buf >> ((nword - 1) * 32 + start - 1);
    buf = buf & ((1 << length) - 1);
    return buf;
}



// ---- required by ucesb ------ //

void EXT_FRS::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    // do something
    frs_info.dump(signal_id(id, "frs_info"), pdi);
}

void EXT_FRS::show_members(const signal_id& id, const char* unit) const
{
    frs_info.show_members(signal_id(id, "frs_info"), unit);
}

void EXT_FRS::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
   {
        const signal_id &__shadow_id = __id;
        signal_id __id(__shadow_id, "frs_info");
        {
            frs_info.enumerate_members(__id, __info, __callback, __extra);
        }
    }
}

void EXT_FRS::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
    frs_info.zero_suppress_info_ptrs(used_info);
}

void frs_item::dump(const signal_id &id, pretty_dump_info &pdi) const
{
    for (int j  = 0; j < 32; j++)
    {
        ::dump_uint32(scaler_frs[j], signal_id(id, get_name("scaler_frs_", j)), pdi);
        /*for (int i = 0; i < 21; j++)
        {   
            
            ::dump_uint32(vme_frs[i][j], signal_id(id, get_name2("vme_frs_", i, j)), pdi);
        }*/
    } 
}

void frs_item::show_members(const signal_id &id, const char* unit) const
{
    //?
}

void frs_item::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{   

    /*for (int k : scaler_frs_elements)
    {
        ::zero_suppress_info_ptrs(&scaler_frs[k], used_info);
    }*/

    for (int j = 0; j < 32; j++)
    {
        ::zero_suppress_info_ptrs(&scaler_frs[j], used_info);

        /*for (int i = 0; i < 21; i++)
        {
            ::zero_suppress_info_ptrs(&vme_frs[i][j], used_info);
            ::zero_suppress_info_ptrs(&vme_main[i][j], used_info);
        }*/
    }
}

void frs_item::enumerate_members(const signal_id &id, const enumerate_info &info, enumerate_fcn callback, void *extra) const
{   

    /*std::cout << "do we get here?" << std::endl;
    for (int k : scaler_frs_elements)
    {   

        std::cout << "hey we're getting here at least" << std::endl;
        callback(signal_id(id, get_name("scaler_frs_", k)), enumerate_info(info, &scaler_frs[k], ENUM_TYPE_UINT), extra);
    }*/

    for (int j = 0; j < 32; j++)
    {
        callback(signal_id(id, get_name("scaler_frs_", j)), enumerate_info(info, &scaler_frs[j], ENUM_TYPE_UINT), extra);
        //callback(signal_id(id, get_name("tpat_main_", j)), enumerate_info(info, &tpat_main[j], ENUM_TYPE_UINT), extra);

        /*for (int i = 0; i < 21; i++)
        {
            callback(signal_id(id, get_name2("vme_frs_", i, j)), enumerate_info(info, &vme_frs[i][j], ENUM_TYPE_UINT), extra);
            callback(signal_id(id, get_name2("vme_main_", i, j)), enumerate_info(info, &vme_main[i][j], ENUM_TYPE_UINT), extra);
        }*/
    }

}

const char* frs_item::get_name(const std::string &name, int index) const
{
    std::ostringstream oss;
    oss << name << index;
    std::string str_name = oss.str();
    const char* cstr_name = str_name.c_str();
    return cstr_name;
} 

const char* frs_item::get_name2(const std::string &name, int index, int index2) const
{
    std::ostringstream oss;
    oss << name << index << "_" << index2;
    std::string str_name = oss.str();
    const char* cstr_name = str_name.c_str();
    return cstr_name;
} 