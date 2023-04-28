// -*- C++ -*-

#include "whiterabbit.spec"

external EXT_TRACES();

DUMMY()
{
  UINT32 no NOENCODE;
}


SUBEVENT(traces_subev)
{

  if (withWR)
  {
    ts = TIMESTAMP_WHITERABBIT(id=0x400); // still true?
  }
  external data = EXT_TRACES();

}


EVENT
{
  traces = traces_subev(procid = 60); // stored as GEID somewhere

  ignore_unknown_subevent;
}


/* for makefile_additional.inc
CXXFLAGS+=-DCONTROL_INCLUDE -Wfatal-errors -std=c++11
OBJS += ext_traces.o
*/