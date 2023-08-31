// -*- C++ -*-

#include "config.spec"
#include "whiterabbit.spec"
#include "febex.spec"
#include "traces.spec" // febex_traces.spec

external EXT_LISA(); 

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
  external data = EXT_LISA();
  trace = FEBEX_TRACES();

}

EVENT
{
  // is trigger really a thing here..trig3 events are coming through. 
  trace = febex_subev(procid = 60, trigger = 1); // stored as GEID somewhere

  ignore_unknown_subevent;
}


/* for makefile_additional.inc
CXXFLAGS+=-DCONTROL_INCLUDE -Wfatal-errors -std=c++11
OBJS += ext_traces.o
*/

#include "mapping.hh"