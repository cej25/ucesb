// -*- C++ -*-

#include "whiterabbit.spec"
//#include "febex.spec"
//#include "gsi_febex_v2.spec" // for test building only

external EXT_AIDA();
external EXT_GERMANIUM();
external EXT_FATIMA_VME();
external EXT_FATIMA_TAMEX();
external EXT_PLASTIC();
external EXT_TPAT();

DUMMY()
{
    UINT32 no NOENCODE;
}

SUBEVENT(aida_subev)
{
    ts = TIMESTAMP_WHITERABBIT(id=0x700);
    external data = EXT_AIDA();
}

SUBEVENT(germanium_subev)
{
    ts = TIMESTAMP_WHITERABBIT(id=0x400);
    external data = EXT_GERMANIUM();
}

SUBEVENT(fatima_vme_subev)
{
    ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
    external data = EXT_FATIMA_VME();
}

SUBEVENT(fatima_tamex_subev)
{
    ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
    external data = EXT_FATIMA_TAMEX();
}

SUBEVENT(plastic_subev)
{   
    ts = TIMESTAMP_WHITERABBIT(id=0x500);
    external data = EXT_PLASTIC();
   
}

SUBEVENT(frs_subev_one)
{
    ts = TIMESTAMP_WHITERABBIT(id=0x100);
}


SUBEVENT(frs_subev_three)
{
    //ts = TIMESTAMP_WHITERABBIT(id=0x100);
    external data = EXT_TPAT();
}

/*
febex_subev_data()
{
    // stuff
    select several
    {
        padding = FEBEX_PADDING();
    }

    select several
    {
        febex0 = FEBEX_NOTRACE();
    }
}*/

/*test()
{   
    MEMBER(DATA8 board_id);
    MEMBER(DATA8 n_chans);
    MEMBER(DATA8 n_mods);
    MEMBER(DATA32 ht); // half_time/extra_time
    MEMBER(DATA32 et); // event_time
    MEMBER(DATA8 chan_id);

    ENCODE(n_mods, (value = 2)); // GE_FEBEX_MODULES

    UINT32 febex_header NOENCODE
    {
        0_7: three_four;
        8_11: trig_type;
        12_15: sfp_id; //= MATCH(sfp); // not sure
        16_23: chan_head; // = MATCH(card); // not sure
        24_31: ff;
    }
        
    if (febex_header.ff == 0xFF)
    {   
        ENCODE(board_id, (value = febex_header.chan_head));

        UINT32 febex_chan_size NOENCODE
        {
            0_1: ignore;
            2_31: chan_size;
            ENCODE(n_chans, (value = (chan_size / 4) - 1));
        }

        if (n_chans.value == 0)
        {
            ENCODE(n_mods, (value = n_mods.value - 1));
        }

        UINT32 febex_half_time NOENCODE
        {
            0_15: ext_time;
            16_31: blank;
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

        // do stuff with flags

        UINT32 febex_deadbeef NOENCODE
        {
            0_31: deadbeef;
        }


        external data = EXT_REVERSE_BUFFER();
    
    }
    
    else if (febex_header.ff == 0xF0)
    {
        // find some way to reverse ?? 
        external rb = EXT_REVERSE_BUFFER();

        list (0 <= j < n_chans.value)
        {
            // do stuff
            UINT32 febex_chan_header NOENCODE
            {
                0_15: ext_chan_ts;
                16_23: Ch_ID;
                24_31: oxfo;
                ENCODE(chan_id, (value = Ch_ID));
            }





        }

    }
}


SUBEVENT(febex_subev)
{   
    ts = TIMESTAMP_WHITERABBIT(id=0x400);
   
    select several
    {
        padding = FEBEX_PADDING();
    };

    select several
    {
        stuff = test();
    }
    
}*/

EVENT
{
    aida = aida_subev(type = 10, subtype = 1, procid = 90, control = 37, subcrate = 0);
    germanium = germanium_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);
    //germanium = febex_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);
    fatima_vme = fatima_vme_subev(type = 10, subtype = 1, procid = 70, control = 20, subcrate = 0);
    fatima_tamex = fatima_tamex_subev(type = 10, subtype = 1, procid = 75, control = 20, subcrate = 0);
    //plastic = plastic_subev(type = 10, subtype = 1, procid = 80, control = 20, subcrate = 0);

    // frs stuff
    //frs_one = frs_subev_one(type = 10, subtype = 1, procid = 10, control = 20);
    //frs_two = frs_subev_two(type = 12, subtype = 1, procid = 10, control = 20);
    frs_three = frs_subev_three(type = 36, subtype = 3600, procid = 10, control = 20); // tpat
    //frs_four = frs_subev_four(type = 12, subtype = 1, procid = 35, control = 20); // traw vftx // sci tof
    //frs_five = frs_subev_five(type = 12, subtype = 1, procid = 30, control = 20); // sci_tx?
    //frs_six = frs_subev_six(type = 12, subtype = 1, procid = 20, control = 21); // frs_main_scaler // music?

    // SPEC FILE TEST
    //germanium = febex_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);

    ignore_unknown_subevent;
};