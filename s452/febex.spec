FEBEX_PADDING()
{
    UINT32 pad_data NOENCODE
    {
        0_19: rest;
        20_31: 0xADD; // use hex for "select several"
    }
}


FEBEX_NOTRACE() // (sfp_id, chan_head)
{   
    MEMBER(DATA8 board_id);
    MEMBER(DATA8 n_chans);
    MEMBER(DATA8 n_mods);
    MEMBER(DATA32 ht); // half_time
    MEMBER(DATA32 et); // event_time
    MEMBER(DATA8 pileup_flags[16]);
    MEMBER(DATA8 hit_pattern[16]);
    MEMBER(DATA8 channel_id);

    ENCODE(n_mods, (value = 2));

   //UINT8 n_mods NOENCODE;
    //n_mods = 2;// GE_FEBEX_MODULES

    UINT32 febex_header NOENCODE
    {
        0_7: three_four;
        8_11: trig_type;
        12_15: sfp_id; //= MATCH(sfp); // not sure
        16_23: chan_head; // = MATCH(card); // not sure
        24_31: ff;
        ENCODE(board_id, (value = chan_head));
    }

    if (febex_header.ff == 0xFF)
    {
        UINT32 febex_chan_size NOENCODE
        {
            0_1: ignore;
            2_31: chan_size;
            ENCODE(n_chans, (value = (chan_size / 4 - 1)));
            if (n_chans.value == 0)
            {
                ENCODE(n_mods, (value = n_mods.value - 1));
            }
        }
    
        UINT32 febex_half_time NOENCODE
        {
            0_15: ext_time;
            24_31: blank;
            ENCODE(ht, (value = ext_time));
        }

        UINT32 febex_event_time NOENCODE
        {
            0_31: event_time;
            ENCODE(et, (value = event_time));
        }

        UINT32 febex_flags NOENCODE
        {
            0_15: hit_pattern;
            16_31: pile_flags;
        }

        // stuff about pileup here..do we need? yes for num_channels_fired.

        UINT32 febex_deadbeef NOENCODE
        {
            0_31: deadbeef;
        }
    }
    else if (febex_header.ff == 0xF0)
    {   

        UINT32 placeholder NOENCODE;
        // how do we move back a word? NOT SURE...
        /*
        list (0 <= j < n_chans)
        {
            UINT32 febex_chan_header NOENCODE
            {
                0_15: ext_chan_ts;
                16_23: Ch_ID;
                24_31: oxfo;
                ENCODE(channel_id, (value = Ch_ID));
            }

            ENCODE(sum_time_lo[fired_FEBEX_amount], (value = febex_event_time.event_time));
            ENC

                
            // make pair
            std::pair idx = std::make_pair(board_id, channel_id);

            if (Germanium_map.find())
            {
                ENCODE()
            }

        }*/
    }

}