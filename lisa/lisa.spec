// -*- C++ -*-

#include "config.spec"
#include "whiterabbit.spec"
#include "febex.spec"

DUMMY()
{
  UINT32 no NOENCODE;
}

SUBEVENT(febex_subev) // febex_subev_data()
{

  // white rabbit
  if (withWR)
  {
    wr = TIMESTAMP_WHITERABBIT(id=0x400);
  }
  
  // padding (select several essential)
  select several
  {
    padding = FEBEX_PADDING();
  }

  // febex data
  data = FEBEX_TRACES();

}

EVENT
{
  trace = febex_subev(procid = 60); // stored as GEID somewhere

  ignore_unknown_subevent;
}


/* for makefile_additional.inc
CXXFLAGS+=-DCONTROL_INCLUDE -Wfatal-errors -std=c++11
OBJS += ext_traces.o
*/