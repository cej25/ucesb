// -*- C++ -*-

#include "whiterabbit.spec"

external EXT_AIDA();
external EXT_GERMANIUM();
external EXT_FATIMA_VME();
external EXT_FATIMA_TAMEX();
external EXT_PLASTIC();

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
    ////////////////////ts = TIMESTAMP_WHITERABBIT(id=0x100);
}

EVENT
{
    aida = aida_subev(type = 10, subtype = 1, procid = 90, control = 37, subcrate = 0);
    germanium = germanium_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);
    fatima_vme = fatima_vme_subev(type = 10, subtype = 1, procid = 70, control = 20, subcrate = 0);
    fatima_tamex = fatima_tamex_subev(type = 10, subtype = 1, procid = 75, control = 20, subcrate = 0);
    plastic = plastic_subev(type = 10, subtype = 1, procid = 80, control = 20, subcrate = 0);

    // frs stuff
    frs_one = frs_subev_one(type = 10, subtype = 1, procid = 10, control = 20);
    //frs_two = frs_subev_two(type = 12, subtype = 1, procid = 10, control = 20);
    //frs_three = frs_subev_three(type = 36, subtype = 3600, procid = 10, control = 20); // tpat
    //frs_four = frs_subev_four(type = 12, subtype = 1, procid = 35, control = 20);
    //frs_five = frs_subev_five(type = 12, subtype = 1, procid = 30, control = 20);
    //frs_six = frs_subev_six(type = 12, subtype = 1, procid = 20, control = 21); // frs_main_scaler

    ignore_unknown_subevent;
};