#include "ext_fatima_vme.hh"
#include "enumerate.hh"
#include "simple_data_ops.hh"
#include "zero_suppress.hh"
#include "zero_suppress_map.hh"
#include "error.hh"
#include "data_src.hh"
#include <algorithm>
#include <iterator>
#include <set>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>

struct used_zero_suppress_info
{
    public:
        used_zero_suppress_info(const zero_suppress_info *info)
        {
            _info = info;
            _used = false;
        }

        ~used_zero_suppress_info()
        {
            if (!_used)
                delete _info;
        }

    public:
        const zero_suppress_info *_info;
        bool                      _used;
};

template<typename Tsingle,typename T,int n>
void raw_list_ii_zero_suppress<Tsingle,T,n>::zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{
  
    for (int i = 0; i < n; ++i)
    {
        zero_suppress_info *info =
	    new zero_suppress_info(used_info._info,true);
        zzp_on_insert_index(i,*info);
        used_zero_suppress_info sub_used_info(info);

        call_zero_suppress_info_ptrs(&_items[i],sub_used_info);
    }
};

template<typename Tsingle,typename T,int n>
void raw_array_zero_suppress<Tsingle,T,n>::
zero_suppress_info_ptrs(used_zero_suppress_info &used_info)
{
  if ((used_info._info->_type & ZZP_INFO_MASK) != ZZP_INFO_NONE)
    ERROR("Two levels of zero suppression not supported!");

  for (int i = 0; i < n; ++i)
    {
      zero_suppress_info *info = new zero_suppress_info(used_info._info);
      zzp_on_insert_index(i,*info);
      used_zero_suppress_info sub_used_info(info);

      call_zero_suppress_info_ptrs(&_items[i],sub_used_info);
    }
};

template<typename T>
void show_members(const signal_id &id, const char *unit)
{
    char buf[256];
    id.format(buf, sizeof(buf));

    char buf_paw[256];
    id.format_paw(buf_paw, sizeof(buf_paw));

    printf ("%-30s %-30s %s\n",buf_paw,buf,unit ? unit : "");
}

EXT_FATIMA_VME::EXT_FATIMA_VME()
{
    __clean();
}

EXT_FATIMA_VME::~EXT_FATIMA_VME()
{
}

void EXT_FATIMA_VME::__clean()
{
    //something clean
    fatima_vme_info.__clean();
}

void EXT_FATIMA_VME::load_board_channel_file()
{
    const char* format = "%d %d %d %d %d %d";

    std::ifstream file("s452/FATIMA_VME_allocation.txt");

    if (file.fail())
    {
        std::cerr << "Could not find QDC_FATIMA Board_Channel to DetNum file!" << std::endl;
        exit(0);
    }

    std::string line;
    int detector_number, board_id, channel_num, board_id_TDC, TDC_ch, enabled;

    while (file.good())
    {
        getline(file, line, '\n');
        if (line[0] == '#') continue;
        sscanf(line.c_str(), format, &detector_number, &board_id,
        &channel_num, &board_id_TDC, &TDC_ch, &enabled);
        if (enabled == 1)
        {
            det_ID_QDC[board_id][channel_num] = detector_number;
            det_ID_TDC[board_id_TDC][TDC_ch] = detector_number;
        }
    }

}

EXT_DECL_DATA_SRC_FCN(void, EXT_FATIMA_VME::__unpack)
{   

    load_board_channel_file();

    while (!__buffer.empty())
    {   
        std::cout << "==========================" << std::endl;
        if (__buffer.left() > 1000000000)
        {   
            std::cout << "" << std::endl;
            std::cout << "BUFFER LEFT IS LARGE: " << __buffer.left() << std::endl;
            std::cout << "UINT64 UNDERFLOW ASSUMED" << std::endl;
        } else
        {   
            std::cout << "" << std::endl;
            std::cout << "Buffer left hopefully normal: " << __buffer.left() << std::endl;
        }
        


        auto &fat_info = fatima_vme_info.append_item();

        uint32 sc_geo = 15;
        if (SCALER_MODULE_ON == 1)
        {   
            
            if (CHECK_SCALER_DATA(__buffer, sc_geo, fat_info) < 1)
            {
                // in go4 this is this->pdata. Not required here.
            }
            else
            {
                std::cout << "CHECK_SCALER_DATA returned 1!" << std::endl;
            }
        }

        int nqdc = 0;

        for (int qdcboards = 0; qdcboards < 5; qdcboards++)
        {
            uint32 QDC_header = 0;

            // perhaps we can use peek so we don't advance buffer?
            __buffer.peek_uint32(&QDC_header);
            std::cout << "QDC_header: " << std::hex << QDC_header << std::dec << std::endl;

            if (((QDC_header >> 28) & 0xF) == 10 && (QDC_header & 0xFFFFFF) == 4)
            {   

                for (int i = 0; i < 4; ++i) // I 
                {
                    // advance data buffer
                    __buffer.advance(4);
                    
                }

                nqdc++;
            }
            else if (((QDC_header >> 28) & 0xF) == 10)
            {
                
                if (!CHECK_QDC_DATA(__buffer, fat_info))
                {   
                    std::cout << "WARNING: FATIMA QDC readout error" << std::endl;
                }

                nqdc++;

            }
            else
            {   
                std::cout << "WARNING: FATIMA QDC readout encountered unknown header" << std::endl;
                break;
            }

            // more hacky bullshit
            if (__buffer.left() == 0)
            {
                break;
            }

        }
        
        //uint32 TDC_header = 0;
        //__buffer.get_uint32(&TDC_header);
        int num_TDC_modules = 0;
        for (int i = 0; i < FAT_TDC_NUMBER; i++)
        {
            if (CHECK_TDC_DATA(__buffer, fat_info))
            {   
                num_TDC_modules++;
            }
            else
            {   
                std::cout << "WARNING: FATIMA TDC readout error" << std::endl;
            }

            // hacky?
            if (__buffer.left() == 0)
            {
                break;
            }
        }

        if (num_TDC_modules != FAT_TDC_NUMBER)
        {
            std::cout << "WARNING: FATIMA TDC readout error. Only found " << num_TDC_modules << " of " << FAT_TDC_NUMBER << " TDCs." << std::endl;
        }
        
        std::cout << "buffer left at end..: " << __buffer.left() << std::endl;
        std::cout << "==========================" << std::endl;

    } // buffer empty
}

EXT_FORCE_IMPL_DATA_SRC_FCN(void, EXT_FATIMA_VME::__unpack);

template<typename __data_src_t>
int EXT_FATIMA_VME::CHECK_SCALER_DATA(__data_src_t &__buffer, uint32 &geo, fatima_vme_item &fat_info)
{   
    int Scaler_iterator = 0;
    uint32 sc_header = 0;
    __buffer.peek_uint32(&sc_header);

    int nwords = 0;

    if (((sc_header & 0xF8000000) >> 27) == geo)
    {
        nwords = ((sc_header & 0x1F00) >> 8);

        uint32 scaler_data = 0;
        for (int i = 0; i < nwords; i++)
        {   
            
            __buffer.advance(4);
            __buffer.peek_uint32(&scaler_data);
            fat_info.Scaler_Data[Scaler_iterator] = scaler_data;
            Scaler_iterator++;
        }

        __buffer.advance(4);
        uint32 scaler_trailer = 0;
        __buffer.peek_uint32(&scaler_trailer);

        if (scaler_trailer != (uint32) (geo << 27) + 0x400000)
        {
            // std::cout << "Correct trailer word" << std::endl;
        }
        else
        {
            std::cout << "WARNING: FATIMA SCALER readout, trailer not found" << std::endl;
        }

        __buffer.advance(4);
        return 1;
    }
    else if (sc_header == 0x06000000)
    {   
        // Filler word, no scaler data
        __buffer.advance(4);
        return 1;
    }
    else
    {
        std::cout << "WARNING: FATIMA SCALER enabled but not found. " << std::endl;
        std::cout << "Readout sequence is SCALER-QDC-TDC." << std::endl;
        return 0;
    }
}


template<typename __data_src_t>
int EXT_FATIMA_VME::CHECK_QDC_DATA(__data_src_t &__buffer, fatima_vme_item &fat_info)
{   

    __buffer.advance(4);
    uint32 QDC_head_2 = 0;
    __buffer.peek_uint32(&QDC_head_2);
    
    int board_ID = ((QDC_head_2 >> 27) & 0x1F); // most significant 5 bits
    int num_Channels = (QDC_head_2 & 0xFF); // least significant 8 bits
    int num_channels_fired = 0;

    if (board_ID != 13)
    {   
        // loop retrieves channels fired from integer value
        for (int j = 7; j >= 0; j--)
        {   
            if (num_Channels >= (int) pow(2, j))
            {   
                // fill Fired_Channel array with corresponding ids
                if (wired_QDC(board_ID, j, fat_info))
                {
                    fat_info.Fired_QDC_Channels[num_channels_fired][0] = board_ID;
                    fat_info.Fired_QDC_Channels[num_channels_fired][1] = j;
                    num_channels_fired++;
                }
                else
                {
                    fat_info.Fired_QDC_Channels[num_channels_fired][0] = board_ID;
                    fat_info.Fired_QDC_Channels[num_channels_fired][1] = -1;
                    num_channels_fired++;
                }
                num_Channels -= (int) pow(2, j);
            }
        }

        // move from 2nd to 4th header value
        __buffer.advance(8);

        int active_Channel = 0;
        int active_board = 0;
        int active_det = 0;
        //double fine_time = 0; // unused atm
        int fired_QDC_amount = 0;

        for (int i = (num_channels_fired - 1); i >= 0; --i)
        {
            __buffer.advance(4);
            uint32 QDC_format_size = 0;
            __buffer.peek_uint32(&QDC_format_size);

            if (fat_info.Fired_QDC_Channels[i][1] == -1)
            {
                std::cout << "WARNING: FATIMA channel ID = -1!" << std::endl;
                return 0;
            }
            else
            {
                active_board = fat_info.Fired_QDC_Channels[i][0];
                active_Channel = fat_info.Fired_QDC_Channels[i][0];
                active_det = det_ID_QDC[active_board][active_Channel];
                fat_info.det_ids_QDC[fired_QDC_amount] = active_det;

                // advance 3 words
                __buffer.advance(12);

                uint32 QDC_time = 0;
                __buffer.peek_uint32(&QDC_time);
                fat_info.QDC_Time_Coarse[fired_QDC_amount] = QDC_time; // all 32 bits
                // No need for Time_Coarse_lo and Time_Coarse_hi in this instance then.

                __buffer.advance(4);
                uint32 QDC_extras = 0;
                __buffer.peek_uint32(&QDC_extras);

                // must be careful to take care of time stuff in analyis.
                // Here is unpacked as UINT32 only. There are doubles and 64bit ints required...

                fat_info.QDC_Time_Ext[fired_QDC_amount] = ((QDC_extras >> 16) & 0xFFFF);
                fat_info.QDC_Time_Fine[fired_QDC_amount] = (QDC_extras & 0x3FF); // least significant 10

                __buffer.advance(4);
                uint32 QDC_data = 0;
                __buffer.peek_uint32(&QDC_data);

                fat_info.QLong_Raw[fired_QDC_amount] = ((QDC_data >> 16) & 0xFFFF); 
                fat_info.QShort_Raw[fired_QDC_amount] = (QDC_data & 0x7FFF); // least significant 15

                // calibrate here??
                Calibrate_QDC(fired_QDC_amount);
                
                fired_QDC_amount++;

            }

            std::cout << "buffer during loop in QDC: " << __buffer.left() << std::endl;

        }

        __buffer.advance(4);

        // advance buffer? unclear
        std::cout << "buffer left at end of CHECK_QDC: " << __buffer.left() << std::endl;

        return 1;
    }

    else 
    {
        std::cout << "WARNING: FATIMA QDC readout, unknown ID 13." << std::endl;
        // advance buffer?
        __buffer.advance(4);
        return 0;
    }
}

template<typename __data_src_t>
int EXT_FATIMA_VME::CHECK_TDC_DATA(__data_src_t &__buffer, fatima_vme_item &fat_info)
{   
    bool trail = false;

    int check = 0;
    int tdc_board_ID = 0;
    int TDC_channel = 0;
    int active_det = 0;
    //bool no_data = true;

    int loop_counter = 0;
    int fired_TDC_amount = 0;

    while (!trail)
    {
        loop_counter++;
        std::cout << "buffer left in TDC loop: " << __buffer.left() << std::endl;

        uint32 TDC_check = 0;
        __buffer.peek_uint32(&TDC_check);

        std::cout << "TDC_check: " << std::hex << TDC_check << std::dec << std::endl;

        check = ((TDC_check >> 27) & 0x1F); // most significant 5 bits

        if (TDC_check == 0x06000000)
        {   
            // empty TDC
            // advance data?
            std::cout << "EMPTY TDC" << std::endl;
            __buffer.advance(4);
            return 1;
        }
        else if (check == 8)
        {
            // don't get this bit, "global header" is same as "check"?
            tdc_board_ID = (TDC_check & 0x1F);
            std::cout << "TDC HEADER FOUND" << std::endl;
            __buffer.advance(4);
        }
        else if (check == 1) // TDC header condition
        {
            // advance data, not needed here.
            std::cout << "check == 1, no idea what it means though" << std::endl;
            __buffer.advance(4);
        }
        else if (check == 0)
        {   
            TDC_channel = ((TDC_check >> 21) & 0x1F);
            if (!wired_TDC(tdc_board_ID, TDC_channel, fat_info))
            {
                //no_data = true;
            }
            else
            {   
                active_det = det_ID_TDC[tdc_board_ID][TDC_channel];
                fat_info.det_ids_TDC[fired_TDC_amount] = active_det;
                fat_info.TDC_Time_Raw[fired_TDC_amount] = (TDC_check & 0x1FFFF); // least significant 21 bits
                Calibrate_TDC(fired_TDC_amount);
                Calibrate_TDC(fired_TDC_amount); // wtf? why twice?
                fired_TDC_amount++;
                //no_data = false;
            }
            // advance data? not needed i think
            __buffer.advance(4);
        }
        else if (check == 16)
        {
            // advance data? not needed i think
            std::cout << "TDC TRAILER FOUND!!" << std::endl;
            __buffer.advance(4);
            return 1;
        }
        else 
        {   
            // fix this somehow
            std::cout << "WARNING: FATIMA TDC wrong - header is " << std::hex << TDC_check << std::dec << std::endl;
            __buffer.advance(4);
        }

        if (loop_counter > 100)
        {
            std::cerr << "WARNING: FATIMA TDC loop not reaching trailer! data iteration problem possible." << std::endl;
            __buffer.advance(4);
            // advance data?
            return 0;
        }
    }
    std::cout << "ERROR: FATIMA should never get here!" << std::endl;
    return 0;
    
}

bool EXT_FATIMA_VME::wired_QDC(int board_id, int ch_num, fatima_vme_item &fat_info)
{   
    // alternatively just store ints?
    return det_ID_QDC[board_id][ch_num] != -1;
}

bool EXT_FATIMA_VME::wired_TDC(int board_id, int ch_num, fatima_vme_item &fat_info)
{   
    return det_ID_TDC[board_id][ch_num] != -1;
}

void EXT_FATIMA_VME::Calibrate_QDC(int id)
{   

    // not sure if this can be done tbh...maybe in analysis? times are not correct

    /*Q_Long[id] = FATIMA_E_CALIB->Calibrate(QLong_Raw[id], det_ids_QDC[id]);
    QDC_Time_Coarse[id] = FATIMA_T_CALIB->Calibrate_QDC(QDC_Time_Coarse[id], det_ids_TDC[id]);
    QDC_Time_Fine[id] = FATIMA_T_CALIB->Calibrate_QDC(QDC_Time_Fine[id], det_ids_TDC[id]);*/
}

void EXT_FATIMA_VME::Calibrate_TDC(int id)
{   

    // again probably can't be done here thanks for uint32 limitation

    /*TDC_Time_ns[id] = FATIMA_T_CALIB->Calibrate_TDC(TDC_Time_Raw[id], det_ids_TDC[id]);
    */
}

void EXT_FATIMA_VME::dump(const signal_id &id, pretty_dump_info &pdi) const
{
}

void EXT_FATIMA_VME::show_members(const signal_id& id, const char* unit) const
{
}

void EXT_FATIMA_VME::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
}

void EXT_FATIMA_VME::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
}


EXT_FATIMA_TAMEX::EXT_FATIMA_TAMEX()
{
    __clean();
}

EXT_FATIMA_TAMEX::~EXT_FATIMA_TAMEX()
{
}

void EXT_FATIMA_TAMEX::__clean()
{
    //something clean
    fat_tamex_info.__clean();
}

EXT_DECL_DATA_SRC_FCN(void, EXT_FATIMA_TAMEX::__unpack)
{   

    while (!__buffer.empty())
    {   
        auto & item = fat_tamex_info.append_item();

        std::cout << "new item!" << std::endl;

        // reset stuff - can be done with clean?
        reset_edges(item); //

        item.tamex_end = false;
        item.tamex_iter = 0;

        while (!item.tamex_end)
        {   

            std::cout << "buffer in tamex_end loop: " << __buffer.left() << std::endl;

            Process_TAMEX(__buffer, item);
            /*if (!item.tamex_end) item.tamex_iter++;

            // i think this is causing uint64 wraparound issue
            // even tho we've ended, we've advanced the buffer, so now a new item
            __buffer.advance(4);*/

            //////// TEST ////////
            if (!item.tamex_end)
            {
                item.tamex_iter++;
                __buffer.advance(4);
            }

        }


        // CALIBRATION ??
        /*
        if (item.CALIBRATE) calibrate_ONLINE();
        else calibrate_OFFLINE();
        */

    }
}

EXT_FORCE_IMPL_DATA_SRC_FCN(void, EXT_FATIMA_TAMEX::__unpack);


void EXT_FATIMA_TAMEX::reset_edges(fatima_tamex_item &item)
{   

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 200; j++)
        {
            item.leading_hits[i][j] = 0;
            item.trailing_hits[i][j] = 0;
            item.edge_coarse[i][j] = (double) 131313;
            item.edge_fine[i][j] = (double) 131313;
            item.ch_ID_edge[i][j] = (double) 131313;
        }
    }
}

template<typename __data_src_t>
void EXT_FATIMA_TAMEX::Process_TAMEX(__data_src_t &__buffer, fatima_tamex_item &item)
{   
    std::cout << "tamex_iter: " << item.tamex_iter << std::endl;

    item.iterator[item.tamex_iter] = 0;
    item.no_edges[item.tamex_iter] = false;

    item.written = false;

    // check for trigger window (beginning of TAMEX MBS
    std::cout << "tamex_iter: " << item.tamex_iter << std::endl;
    if (item.tamex_iter == 0)
    {
        uint32 window = 0;
        __buffer.peek_uint32(&window);

        std::cout << "window: " << std::hex << window << std::dec << std::endl;

        item.Pre_Trigger_Window = (window & 0xFFFF); // least significant 16 bits
        item.Post_Trigger_Window = ((window >> 16) & 0xFFFF); // most significant 16 bits

        __buffer.advance(4);

        skip_padding(__buffer);

    }

    uint32 tamex_header = 0;
    __buffer.peek_uint32(&tamex_header);

    std::cout << "tamex_header: " << std::hex << tamex_header << std::dec << std::endl;

    bool ongoing = ((tamex_header & 0xFF) == item.tamex_identifier) && (((tamex_header >> 24) & 0xFF) == 0) && ((((tamex_header >> 12) & 0xF) == 1) || (((tamex_header >> 12) & 0xF) == 0));

    if (!ongoing)
    {
        std::cout << "tamex_end = true" << std::endl;
        item.tamex_end = true;
        return;
    }

    if (item.tamex_iter > 0)
    {
        if (((tamex_header >> 16) & 0xFF) <= item.tamex_id[item.tamex_iter - 1])
        {   
            std::cout << "tamex_end also true here.." << std::endl;
            item.tamex_end = true;
            return;
        }
    }

    item.sfp_id[item.tamex_iter] = ((tamex_header >> 12) & 0xF);
    item.trigger_type[item.tamex_iter] = ((tamex_header >> 8) & 0xF);
    item.tamex_id[item.tamex_iter] = ((tamex_header >> 16) & 0xFF);

    __buffer.advance(4);

    uint32 tamex_fire = 0;
    __buffer.peek_uint32(&tamex_fire);

    std::cout << "tamex_fire: " << std::hex << tamex_fire << std::dec << std::endl;

    item.am_fired[item.tamex_iter] = (tamex_fire & 0xFFF) / 4 - 2;
    if (item.am_fired[item.tamex_iter] < 0)
    {
        std::cerr << "NEGATIVE TAMEX FIRED AMOUNT ENCOUNTERED IN FATIMA" << std::endl;
        //exit(0);
    }

    __buffer.advance(4);

    uint32 tamex_begin = 0;
    __buffer.peek_uint32(&tamex_begin);

    std::cout << "tamex_begin: " << std::hex << tamex_begin << std::dec << std::endl;

    if (((tamex_begin >> 24) & 0xFF) != 0xAA)
    {
        std::cerr << "error in TAMEX format! 0xAA...word not found after fired amount!" << std::endl;
        std::cerr << "TAMEX WORD: " << std::hex << tamex_begin << std::endl;
    }

    __buffer.advance(4);

    get_trigger(__buffer, item);

    if (item.am_fired[item.tamex_iter] > 3) 
    {   
        std::cout << "am_fired = " << item.am_fired[item.tamex_iter] << std::endl;
        get_edges(__buffer, item);
    }
    else
    {   
        std::cout << "no edges, am_fired = " << item.am_fired[item.tamex_iter] << std::endl;
        item.no_edges[item.tamex_iter] = true;
    }

    check_trailer(__buffer);

    std::cout << "buffer after check trailer: " << __buffer.left() << std::endl;

}

template<typename __data_src_t>
void EXT_FATIMA_TAMEX::skip_padding(__data_src_t &__buffer)
{
    bool still_padding = true;
    while (still_padding)
    {
        uint32 padding = 0;
        __buffer.peek_uint32(&padding);
        if (((padding >> 20) & 0xFFF) == 0xADD)
        {
            __buffer.advance(4);
            std::cout << "padding: " << std::hex << padding << std::dec << std::endl;
        } 
        else 
        {
            still_padding = false;
        }
    }
}

template<typename __data_src_t>
void EXT_FATIMA_TAMEX::get_trigger(__data_src_t &__buffer, fatima_tamex_item &item)
{
    uint32 place_holder = 0;
    __buffer.peek_uint32(&place_holder);

    std::cout << "place_holder (get_trigger): " << std::hex << place_holder << std::dec << std::endl;

    // unused things with placeholder

    __buffer.advance(4);

    uint32 tamex_data = 0;
    __buffer.peek_uint32(&tamex_data);

    std::cout << "tamex_data (get_trigger): " << std::hex << tamex_data << std::dec << std::endl;

    item.coarse_T[item.tamex_iter] = (double) (tamex_data & 0x7FF);
    item.fine_T[item.tamex_iter] = (double) ((tamex_data >> 12) & 0x3FF);
    item.ch_ID[item.tamex_iter] = ((tamex_data >> 22) & 0x7F);

    __buffer.advance(4);
}

template<typename __data_src_t>
void EXT_FATIMA_TAMEX::get_edges(__data_src_t &__buffer, fatima_tamex_item &item)
{   
    // set iterator[tamex_iter] of edges to 0
    item.iterator[item.tamex_iter] = 0;

    // loop over remaining words (getting leading and trailing edge data)
    item.written = false;

    while (no_error_reached(__buffer))
    {
        uint32 place_holder = 0;
        __buffer.peek_uint32(&place_holder);

        std::cout << "place_holder (get edges): " << std::hex << place_holder << std::dec << std::endl;

        // == six_f instead of == 6? even though six_f = 6? check Go4
        if (((place_holder >> 28) & 0xF) == 6)
        {
            __buffer.advance(4);
            continue;
        }

        if (((place_holder >> 28) & 0xF) != 6)
        {
            item.written = false;
        }

        uint32 tamex_data = 0;
        __buffer.peek_uint32(&tamex_data);

        std::cout << "tamex_data (get edges): " << std::hex << tamex_data << std::dec << std::endl;

        if (((tamex_data >> 11) & 0x1) == 1)
        {
            item.leading_hit = ((tamex_data >> 11) & 0x1);
            item.edge_coarse[item.tamex_iter][item.iterator[item.tamex_iter]] = (double) (tamex_data & 0x7FF);
            item.edge_fine[item.tamex_iter][item.iterator[item.tamex_iter]] = (double) ((tamex_data >> 12) & 0x3FF);
            item.ch_ID_edge[item.tamex_iter][item.iterator[item.tamex_iter]] = ((tamex_data >> 22) & 0x7F);
            item.lead_arr[item.tamex_iter][item.iterator[item.tamex_iter]] =  (((tamex_data >> 22) & 0x7F) % 2);
        }

        if (((tamex_data >> 11) & 0x1) == 0)
        {
            item.leading_hit = ((tamex_data >> 11) & 0x1);
            item.edge_coarse[item.tamex_iter][item.iterator[item.tamex_iter]] = (double) (tamex_data & 0x7FF);
            item.edge_fine[item.tamex_iter][item.iterator[item.tamex_iter]] = (double) ((tamex_data >> 12) & 0x3FF);
            item.ch_ID_edge[item.tamex_iter][item.iterator[item.tamex_iter]] = ((tamex_data >> 22) & 0x7F) + MAX_CHA_INPUT;
        }

        item.iterator[item.tamex_iter]++;
        item.written = true;

        __buffer.advance(4);
    }
}

template<typename __data_src_t>
bool EXT_FATIMA_TAMEX::no_error_reached(__data_src_t &__buffer)
{
    uint32 tamex_error = 0;
    __buffer.peek_uint32(&tamex_error);

    std::cout << "tamex_error: " << std::hex << tamex_error << std::dec << std::endl;

    std::cout << "tamex_error->error: " << std::hex << ((tamex_error >> 24) & 0xFF) << std::endl;

    // "error code" vs 238? check go4
    return ((tamex_error >> 24) & 0xFF) != 238; 

}


template<typename __data_src_t>
void EXT_FATIMA_TAMEX::check_trailer(__data_src_t &__buffer)
{
    __buffer.advance(4);

    uint32 tamex_trailer = 0;
    __buffer.peek_uint32(&tamex_trailer);

    std::cout << "tamex_trailer: " << std::hex << tamex_trailer << std::dec << std::endl;

    // trailer_code instead of 187? check Go4
    if (((tamex_trailer >> 24) & 0xFF) != 187)
    {
        // std::cerr << "Unknown TAMEX trailer format!" << std::endl;
        // exit(0);
        std::cout << "unknown tamex trailer format" << std::endl;
    }
}

void EXT_FATIMA_TAMEX::calibrate_ONLINE()
{

}

void EXT_FATIMA_TAMEX::dump(const signal_id &id, pretty_dump_info &pdi) const
{
}

void EXT_FATIMA_TAMEX::show_members(const signal_id& id, const char* unit) const
{
}

void EXT_FATIMA_TAMEX::enumerate_members(const signal_id &__id, const enumerate_info &__info, enumerate_fcn __callback, void *__extra) const
{
}

void EXT_FATIMA_TAMEX::zero_suppress_info_ptrs(used_zero_suppress_info& used_info)
{
}