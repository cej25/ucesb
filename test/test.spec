// -*- C++ -*-

external EXT_CRATE_TEST(procid, type, subtype);
external EXT_TPC_TEST(procid, type, subtype);

DUMMY()
{
    UINT32 no NOENCODE;
}

SUBEVENT(frs_crate_subev)
{
    external data = EXT_CRATE_TEST(procid = 30, type = 12, subtype = 1);
}


SUBEVENT (frs_tpc_crate_subev)
{
    external data = EXT_TPC_TEST(procid = 20, type = 12, subtype = 1);
}

EVENT
{
    frs_crate = frs_crate_subev(type = 12, subtype = 1, procid = 30, control = 20); // 
    frs_tpc_crate = frs_tpc_crate_subev(type = 12, subtype = 1, procid = 20, control = 21); // frs_main_scaler // music?

    ignore_unknown_subevent;
};

