// -*- C++ -*-

#include "whiterabbit.spec"

external EXT_AIDA();
external EXT_GERMANIUM();
external EXT_FATIMA_VME();
external EXT_FATIMA_TAMEX();
// external EXT_PLASTIC_TAMEX();

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
    // external data = EXT_PLASTIC_TAMEX();
}

EVENT
{
    aida = aida_subev(type = 10, subtype = 1, procid = 90, control = 37, subcrate = 0);
    germanium = germanium_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);
    fatima_vme = fatima_vme_subev(type = 10, subtype = 1, procid = 70, control = 20, subcrate = 0);
    fatima_tamex = fatima_tamex_subev(type = 10, subtype = 1, procid = 75, control = 20, subcrate = 0);
    //plastic = plastic_subev(type = 10, subtype = 1, procid = 80, control = 20, subcrate = 0);

    // frs stuff

    ignore_unknown_subevent;
};