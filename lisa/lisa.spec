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

  // check trigger first?

  UINT32 FF_header NOENCODE // "sum channel header"
	{
		0_7:   three_four;
		8_11:  trigger_type;
		12_15: sfp;
		16_23: board_id;
		24_31: 0xFF;

	}

  if (FF_header.trigger_type == 1)
  {
    external data = EXT_LISA();
    trace = FEBEX_TRACES();
  }
  else if (FF_header.trigger_type == 3)
  {
    select several
    {
      dummy = DUMMY();
    }
  }
  // febex data
  //external data = EXT_LISA();
  //trace = FEBEX_TRACES();

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