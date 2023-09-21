// -*- C++ -*-

#include "whiterabbit.spec"
#include "config/setup.hh"

external EXT_AIDA();
external EXT_GERMANIUM();
external EXT_FATIMA_VME();
external EXT_FATIMA_TAMEX();
external EXT_PLASTIC();
external EXT_PLASTIC_TP();
external EXT_FRS(procid, type, subtype);


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
    if (IS_PLASTIC_TWINPEAKS)
    {
        external data_tp = EXT_PLASTIC_TP();
    }
    else
    {
        external data = EXT_PLASTIC();
    }

}

SUBEVENT(frs_whiterabbit_subev)
{
    ts = TIMESTAMP_WHITERABBIT(id=0x100);
}

SUBEVENT(frs_main_crate_subev)
{
    external data = EXT_FRS(procid = 10, type = 12, subtype = 1);
}

SUBEVENT(frs_tpat_subev)
{
    external data = EXT_FRS(procid = 10, type = 36, subtype = 3600);
}

SUBEVENT(frs_crate_subev)
{
    external data = EXT_FRS(procid = 30, type = 12, subtype = 1);
}

SUBEVENT (frs_tpc_crate_subev)
{
    external data = EXT_FRS(procid = 20, type = 12, subtype = 1);
}

SUBEVENT(frs_tof_crate_subev)
{   

    external data = EXT_FRS(procid = 35, type = 12, subtype = 1);
}

EVENT
{
    //aida = aida_subev(type = 10, subtype = 1, procid = 90, control = 37, subcrate = 0);
    germanium = germanium_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);
    //fatima_vme = fatima_vme_subev(type = 10, subtype = 1, procid = 70, control = 20, subcrate = 0);
    //fatima_tamex = fatima_tamex_subev(type = 10, subtype = 1, procid = 75, control = 20, subcrate = 0);
    //plastic = plastic_subev(type = 10, subtype = 1, procid = 80, control = 20, subcrate = 0);

    // frs stuff
    frs_whiterabbit = frs_whiterabbit_subev(type = 10, subtype = 1, procid = 10, control = 20); // whiterabbit?
    frs_main_crate = frs_main_crate_subev(type = 12, subtype = 1, procid = 10, control = 20); 
    frs_tpat = frs_tpat_subev(type = 36, subtype = 3600, procid = 10, control = 20); // tpat
    frs_tof_crate = frs_tof_crate_subev(type = 12, subtype = 1, procid = 35, control = 20); // traw vftx // sci tof
    frs_tpc_crate = frs_tpc_crate_subev(type = 12, subtype = 1, procid = 20, control = 21); // frs_main_scaler // music?
    frs_crate = frs_crate_subev(type = 12, subtype = 1, procid = 30, control = 20); // sci_tx? // "frs crate"? // scaler_frs is here

    // REVISIT command will be helpful if I ever figure out how to access the procid in an external unpacker.

    // tpc crate gives beta value
    // frs crate gives de value
    // need them to work together somehow o_0

    ignore_unknown_subevent;
};

#include "mapping.hh"
