// -*- C++ -*-

#include "whiterabbit.spec"
#include "frs.spec"
#include "config/setup.hh"

external EXT_FRS(procid, type, subtype);
external EXT_GERMANIUM();
external EXT_FATIMA_VME();
external EXT_FATIMA_TAMEX(); // twinpeaks?
external EXT_PLASTIC_TP();
external EXT_PLASTIC();
external EXT_AIDA();

DUMMY()
{
    UINT32 no NOENCODE;
}

SKIP(n)
{
    list (0 <= i < n)
    {
        UINT32 skip NOENCODE;
    }
}

SUBEVENT(aida_subev)
{   

    if (AIDA_USED)
    {
        ts = TIMESTAMP_WHITERABBIT(id=0x700);
        external data = EXT_AIDA();
    }
    else
    {   
        //EXTERNAL_DATA_SKIP; // external function 
        select several
        {
            dummy = DUMMY();
        }
        
    }
}

SUBEVENT(germanium_subev)
{

    if (GERMANIUM_USED)
    {
        ts = TIMESTAMP_WHITERABBIT(id=0x400);
        external data = EXT_GERMANIUM();
    }
    else
    {
        select several
        {
            dummy = DUMMY();
        }
    }

}

SUBEVENT(fatima_vme_subev)
{
    if (FATIMA_USED)
    {
        ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
        external data = EXT_FATIMA_VME();
    }
    else
    {
        select several
        {
            dummy = DUMMY();
        }
    }
}

SUBEVENT(fatima_tamex_subev)
{
    if (FATIMA_USED)
    {
        ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
        external data = EXT_FATIMA_TAMEX();
    }
    else
    {
        select several
        {
            dummy = DUMMY();
        }
    }
}

SUBEVENT(plastic_subev)
{   

    if (BPLAST_USED)
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
    else
    {
        select several
        {
            dummy = DUMMY();
        }
    }

}

SUBEVENT(frs_whiterabbit_subev)
{
    if (FRS_USED)
    {   
        ts = TIMESTAMP_WHITERABBIT(id=0x100);
    }
    else
    {
        select several
        {
            dummy = DUMMY();
        }
    }
}

SUBEVENT(frs_main_crate_subev)
{
    if (FRS_USED)
    {   

        /*skip = SKIP(n=2);
        b1 = BARRIER();
        select optional
        {   
            v1290 = VME_CAEN_V1290_FRS();
        }
        b2 = BARRIER();
        select optional
        {
            v830 = VME_CAEN_V830_FRS();
        }
        select optional
        {
            v792 = VME_CAEN_V792_FRS();
        }
        b3 = BARRIER();
        list (0 <= i < 4)
        {
            optional UINT32 eoe NOENCODE;
        }*/
        external data = EXT_FRS(procid = 10, type = 12, subtype = 1);
    }
    else
    {
        select several
        {
            dummy = DUMMY();
        }
    }
}

SUBEVENT(frs_tpat_subev)
{
    if (FRS_USED)
    {
        external data = EXT_FRS(procid = 10, type = 36, subtype = 3600);
    }
    else
    {
        select several
        {
            dummy = DUMMY();
        }
    }
}

SUBEVENT(frs_crate_subev)
{
    if (FRS_USED)
    {
        external data = EXT_FRS(procid = 30, type = 12, subtype = 1);
    }
    else
    {
        dummy = DUMMY();
    }
}


SUBEVENT (frs_tpc_crate_subev)
{
    if (FRS_USED)
    {
        external data = EXT_FRS(procid = 20, type = 12, subtype = 1);
    }
    else
    {
        dummy = DUMMY();
    }
}

SUBEVENT(frs_tof_crate_subev)
{   
    if (FRS_USED)
    {
        external data = EXT_FRS(procid = 35, type = 12, subtype = 1);
    }
    else
    {
        dummy = DUMMY();
    }
}

EVENT
{
    revisit aida = aida_subev(type = 10, subtype = 1, procid = 90, control = 37, subcrate = 0);
    //germanium = germanium_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);
    //fatima_vme = fatima_vme_subev(type = 10, subtype = 1, procid = 70, control = 20, subcrate = 0);
    //fatima_tamex = fatima_tamex_subev(type = 10, subtype = 1, procid = 75, control = 20, subcrate = 0);
    plastic = plastic_subev(type = 10, subtype = 1, procid = 80, control = 20, subcrate = 0);

    // frs stuff
    //frs_whiterabbit = frs_whiterabbit_subev(type = 10, subtype = 1, procid = 10, control = 20);
    //frs_main_crate = frs_main_crate_subev(type = 12, subtype = 1, procid = 10, control = 20); 
    //frs_tpat = frs_tpat_subev(type = 36, subtype = 3600, procid = 10, control = 20); // tpat
    //frs_tof_crate = frs_tof_crate_subev(type = 12, subtype = 1, procid = 35, control = 20); // traw vftx // sci tof
    //frs_tpc_crate = frs_tpc_crate_subev(type = 12, subtype = 1, procid = 20, control = 21); // frs_main_scaler // music?
    //frs_crate = frs_crate_subev(type = 12, subtype = 1, procid = 30, control = 20); // sci_tx? // "frs crate"? // scaler_frs is here

    ignore_unknown_subevent;
};

#include "mapping.hh"
