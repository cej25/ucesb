#define GE_MAX_DETS 4
#define GE_MAX_CRYSTALS 7
#define GE_MAX_HITS (GE_MAX_DETS * GE_MAX_CRYSTALS)
#define GE_FEBEX_MODULES 2
#define GE_MAX_CHANNELS 49
/* something about scintillators */

/*
#define GAL_MEMBERS \
    MEMBER(DATA32 sum_time[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA32 hit_pattern[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA8 det_ids[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA8 crys_ids[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA16 chan_time[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA32 chan_energy[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA32 chan_cf[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA8 pileup[GE_MAX_HITS] NO_INDEX LIST); \
    MEMBER(DATA8 overflow[GE_MAX_HITS] NO_INDEX_LIST);
*/

#define GE_MEMBERS \
    MEMBER(DATA32 sum_time[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA32 hit_pattern[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA8 det_ids[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA8 crys_ids[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA16 chan_time[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA32 chan_energy[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA32 chan_cf[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA8 pileup[GE_MAX_HITS] NO_INDEX_LIST); \
    MEMBER(DATA8 overflow[GE_MAX_HITS] NO_INDEX_LIST);


#define GE_PARAMS_DEF \
    sum_time, \
    hit_pattern, \
    det_ids, \
    crys_ids, \
    chan_energy, \
    chan_time, \
    chan_cf, \
    pileup, \
    overflow

#define GE_PARAMS \
    sum_time = sum_time, \
    hit_pattern = hit_pattern, \
    det_ids = det_ids, \
    crys_ids = crys_ids, \
    chan_energy = chan_energy, \
    chan_time = chan_time, \
    chan_cf = chan_cf, \
    pileup = pileup, \
    overflow = overflow

/*

Order of pdata:
- WR stuff, skipped already hopefully?
- Febex_Add (no idea)
- Febex data loop
    - if Febex_HEAD = something
        - board_id (Febex_head->chan_head)
        - num_channels = (fbx_size->chan_size)/4 - 1
        - tmp_sum_time = (fbx_time->evt_time) + (fbx_ht->ext_time<<32)
        - tmp_pileup = fbx_flag->pileup_flags
        - tmp_hit_pattern = fbx_flag->hit_pattern
        - check some stuff for pileup and hit pattern
            - hit pattern sets Ge_channels fired
        - DEADBEEF?????
    - if febex_HEAD = something else
        - move pdata back to DEADBEEF?????
        - loop through num_channels to advance through pdata again
            - chan_head
            - idx, make pair with board id and channel id (some mapping thing)
            - if statement to check ge_map(idx) is not the end of the map
                - Sum_Time[fired_febex_amount] = tmp_Sum_Time
                - iterate pdata (moves to REMAINDER of timestamp) ??
                - chan_time[fired_febex_amount] = (fbx_ch_ts->chan_ts) + (tmp_ext_chan_ts<<32)*10 // in NS
                - iterate pdata (moves to CHAN ENERGY HOORAH)
                - chan_energy[fired_febex_amount] = fbx_ch_en->chan_en
                - chan_cf[fired_febex_amount] = 10.0*(fbx_ch_ts->chan_ts)+fbx_chan_en->cf)/64.0
                - if (chan_en & 0x00800000) (bitwise match)
                    int energy = 0xFF000000 | fbx_ch_en->chan_en
                    chan_energy[fired_febex_amount] = energy;
                - pileup[fired_febex_amount] = fbx_ch_en->pileup != 0
                - overflow[fired_febex_amount] = fbx_ch_en->overflow != 0
                - det_ids[fired_febex_amount] = germanium_map[idx].first
                - crystal_ids[fired_febex_amount] = germanium_map[idx].second
                - iterate pdata (future use??)
                - iterate fired_febex_amount
            - ELSE
                - iterate pdata by 3 (future use?)
    
    - ELSE
        - exit febex_data_loop

*/

FEBEX_ADD(id)
{   
    MEMBER(DATA32 fa);

    UINT32 febex_add NOENCODE
    {
        0_19: rest;
        20_31: add = MATCH(id);
    }
    
    ENCODE(fa, (value = febex_add.add));
}


GERMANIUM()
{
    MEMBER(DATA32 feb_add);
    MEMBER(DATA32 feb_head);
    MEMBER(DATA32 nChannels);
    MEMBER(DATA32 tmp_sum_time);
    MEMBER(DATA32 tmp_pileup);
    MEMBER(DATA32 tmp_hit_pattern);
    MEMBER(DATA32 pileup_flags[16]);
    MEMBER(DATA32 ge_channels[16]);
    MEMBER(DATA32 tmp_ch_ID);
    //GE_MEMBERS// error here
    /*
    MEMBER(DATA32 sum_time[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA32 hit_pattern[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA8 det_ids[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA8 crys_ids[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA16 chan_time[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA32 chan_energy[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA32 chan_cf[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA8 pileup[GE_MAX_HITS] NO_INDEX_LIST);
    MEMBER(DATA8 overflow[GE_MAX_HITS] NO_INDEX_LIST);
    */

    select several 
    {
        febex_add = FEBEX_ADD(id=0xadd);
    }

    ENCODE(feb_add, (value = febex_add.fa));

    UINT32 febex_header NOENCODE
    {
        0_7: three_four; 
        8_11: trig_type;
        12_15: sfp_id;
        16_23: chan_head;
        24_31: ff;
    }

    if (febex_header.ff == 0xFF)
    {   

        //board_id = febex_header.chan_head;

        UINT32 febex_size NOENCODE
        {
            0_1: ignore;
            2_31: chan_size;
        }
        
        //nChannels = ((febex_size.chan_size) / 4) - 1;
        ENCODE(nChannels, (value = ((febex_size.chan_size) / 4) - 1));

        UINT32 febex_half_time NOENCODE
        {
            0_15: ext_time;
            16_31: blank;
        }

        UINT32 febex_event_time NOENCODE
        {
            0_31: evt_time;
        }

        // somehow ULong64_t's need to be implemented..but times are being unpacked at least...
        ENCODE(tmp_sum_time, (value = (febex_half_time.ext_time<<32) + febex_event_time.evt_time));

        UINT32 flag_hits NOENCODE
        {
            0_15: hit_pattern;
            16_31: pile_flags;
        }
        
        ENCODE(tmp_pileup, (value = flag_hits.pile_flags));

        //list(min <= index < max) { ... }
        list(1 <= j < 17)
        {
            if (tmp_pileup & (1 << (16 - j)))
            {
                ENCODE(pileup_flags[j], (value = 1));
            }
            if (tmp_hit_pattern & (1 << (16 - j)))
            {
                ENCODE(ge_channels[j], (value = j));
                // num_channels_fired++;
            }
        }


        /*
        select optional
        {
            stuff_two = DUMMY();
        }
        */
    }
    
    if (febex_header.ff == 0xF0)
    {   

        list(0 <= i < nChannels)
        {
            UINT32 channel_header NOENCODE
            {
                0_15: ext_chan_ts;
                16_23: Ch_ID;
                24_31: oxfo;
            }

            ENCODE(tmp_ch_ID, (value = channel_header.Ch_ID));

            /*
            // if some germanium map condition
            //{
                Sum_Time[fired_FEBEX_amount] = tmp_sum_time;

                UINT32 febex_ts NOENCODE
                {
                    0_31: chan_ts;
                }

                tmp_ext_chan_ts = channel_header.ext_chan_ts
                Chan_Time[fired_FEBEX_amount] = ((febex_ts.chan_ts) + (tmp_ext_chan_ts << 32)) * 10; // in nanoseconds
                
                UINT32 febex_energy NOENCODE
                {
                    0_23: chan_en;
                    24_29: cf;
                    30: pileup;
                    31: overflow;
                }

                Chan_Energy[fired_FEBEX_amount] = febex_energy.chan_en;


            //}
            */
        }



        select optional
        {
            stuff_three = DUMMY();
        }
    }


    ENCODE(feb_head, (value = febex_header.ff));

    select several
    {
        stuff_four = DUMMY();
    }

}

/*
GE_DETECTOR(det_id, GE_PARAMS_DEF)
{
    GE_MEMBERS

    select several
    {   
        //dummy = DUMMY();
        i = GE_INFO(det_id = det_id, GE_PARAMS);
        //d = GALILEO_ADC(det_id = det_id, GAL_PARAMS);
    }

}

GE_INFO(det_id, GE_PARAMS_DEF)
{
    GE_MEMBERS

    UINT32 febex_header NOENCODE
    {
        0_7: three_four; 
        8_11: trig_type;
        12_15: sfp_id;
        16_23: chan_head;
        24_31: ff;
    }

    UINT32 chan_size NOENCODE
    {
        0_1: ignore;
        2_31: chan_size;
    }

    UINT32 half_time NOENCODE
    {
        0_15: ext_time;
        16_31: blank;
    }

    UINT32 event_time NOENCODE
    {
        0_31: evt_time;
    }

    UINT32 flag_hits NOENCODE
    {
        0_15: hit_pattern;
        16_31: pile_flags;
    }

    UINT32 deadbeef NOENCODE
    {
        0_31: deadbeef;
    }

    UINT32 channel_header NOENCODE
    {
        0_15: ext_chan_ts;
        16_23: Ch_ID;
        24_31: oxfo;
    }

    UINT32 febex_ts NOENCODE
    {
        0_31: chan_ts;
    }

    UINT32 febex_energy NOENCODE
    {
        0_23: chan_en;
        24_29: cf;
        30: pileup;
        31: overflow;
    }

    UINT32 febex_future NOENCODE
    {
        0_31: future;
    }

    // not sure if needs encoding
    //ENCODE(board_id APPEND_LIST, (value = febexHeader.chan_head));
    //ENCODE(num_channels APPEND_LIST, (value = chanSize.chan_size / 4 - 1));
    ENCODE(sum_time APPEND_LIST, (value = (halfTime.ext_time<<32) + evtTime.evt_time));

}

*/



/*
GALILEO_ADC(det_id, GAL_PARAMS_DEF)
{
    GAL_MEMBERS

    UINT32 wordA NOENCODE
    {
        0_15: adc_value;
        16_21: channel_id;
        22_27: det_id = MATCH(det_id);
        28: adc_range;
        29: 0;
        30_31: 0x3;
    }

    UINT32 wordB NOENCODE
    {
        0_27: ts;
        28_31: 0;
    }

    UINT32 wordC NOENCODE
    {
        0_27: stuffc;
        28_31: 0;
    }

    UINT32 wordD NOENCODE
    {
        0_27: stuffd;
        28_31: 0;
    }

    UINT32 wordE NOENCODE
    {
        0_27: stuffe;
        28_31: 0;
    }

    UINT32 wordF NOENCODE
    {
        0_27: stufff;
        28_31: 0;
    }

}

*/