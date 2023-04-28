// -*- C++ -*-

#include "aida_data.spec"
#include "whiterabbit.spec"

SUBEVENT(aida_subev)
{
    ts = TIMESTAMP_WHITERABBIT(id=0x700);
    subev = AIDA();
}

EVENT
{
    aida = aida_subev(type = 10, subtype = 1, procid = 90, control = 20, subcrate = 0);
    ignore_unknown_subevent;
}

#include "mapping_aida.hh"