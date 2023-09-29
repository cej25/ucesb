// -*- C++ -*-

#include "whiterabbit.spec"
#include "config/setup.hh"

#include "febex.spec"



SUBEVENT(germanium_subev)
{
    ts = TIMESTAMP_WHITERABBIT(id=0x400);

    select several{
    padding = FEBEX_PADDING();
    }
    select several{  // do once per card
    data = FEBEX_EVENT();
    }
}

EVENT
{

    germanium = germanium_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);


    ignore_unknown_subevent;
};

#include "mapping.hh"
