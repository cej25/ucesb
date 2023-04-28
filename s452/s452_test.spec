// -*- C++ -*-

#include "febex.spec"

DUMMY()
{
    UINT32 no NOENCODE;
}

SUBEVENT(febex_subev)
{
    ts = TIMESTAMP_WHITERABBIT(id);
    data = febex_subev_data();
}

febex_subev_data()
{
    
}