/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_FEBEX_EVENT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_EVENT)::FCNCALL_NAME(FEBEX_EVENT)
{
  FCNCALL_INIT;
  // DATA8 board_id;
  {
  FCNCALL_SUBNAME("board_id");
  { FCNCALL_CALL_CTRL_WRAP(board_id,board_id.FCNCALL_CALL(board_id)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 event_trigger_time_hi;
  {
  FCNCALL_SUBNAME("event_trigger_time_hi");
  { FCNCALL_CALL_CTRL_WRAP(event_trigger_time_hi,event_trigger_time_hi.FCNCALL_CALL(event_trigger_time_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 event_trigger_time_lo;
  {
  FCNCALL_SUBNAME("event_trigger_time_lo");
  { FCNCALL_CALL_CTRL_WRAP(event_trigger_time_lo,event_trigger_time_lo.FCNCALL_CALL(event_trigger_time_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 hit_pattern;
  {
  FCNCALL_SUBNAME("hit_pattern");
  { FCNCALL_CALL_CTRL_WRAP(hit_pattern,hit_pattern.FCNCALL_CALL(hit_pattern)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 num_channels_fired;
  {
  FCNCALL_SUBNAME("num_channels_fired");
  { FCNCALL_CALL_CTRL_WRAP(num_channels_fired,num_channels_fired.FCNCALL_CALL(num_channels_fired)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA8,DATA8,16> channel_id;
  {
  FCNCALL_SUBNAME("channel_id");
  { FCNCALL_CALL_CTRL_WRAP(channel_id,channel_id.FCNCALL_CALL(channel_id)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,16> channel_trigger_time_hi;
  {
  FCNCALL_SUBNAME("channel_trigger_time_hi");
  { FCNCALL_CALL_CTRL_WRAP(channel_trigger_time_hi,channel_trigger_time_hi.FCNCALL_CALL(channel_trigger_time_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> channel_trigger_time_lo;
  {
  FCNCALL_SUBNAME("channel_trigger_time_lo");
  { FCNCALL_CALL_CTRL_WRAP(channel_trigger_time_lo,channel_trigger_time_lo.FCNCALL_CALL(channel_trigger_time_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array<DATA8,DATA8,16> pileup;
  {
  FCNCALL_SUBNAME("pileup");
  { FCNCALL_CALL_CTRL_WRAP(pileup,pileup.FCNCALL_CALL(pileup)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array<DATA8,DATA8,16> overflow;
  {
  FCNCALL_SUBNAME("overflow");
  { FCNCALL_CALL_CTRL_WRAP(overflow,overflow.FCNCALL_CALL(overflow)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA8,DATA8,16> channel_cfd;
  {
  FCNCALL_SUBNAME("channel_cfd");
  { FCNCALL_CALL_CTRL_WRAP(channel_cfd,channel_cfd.FCNCALL_CALL(channel_cfd)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> channel_energy;
  {
  FCNCALL_SUBNAME("channel_energy");
  { FCNCALL_CALL_CTRL_WRAP(channel_energy,channel_energy.FCNCALL_CALL(channel_energy)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_EVENT

#ifndef USER_DEF_FEBEX_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_PADDING)::FCNCALL_NAME(FEBEX_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_PADDING

#ifndef USER_DEF_TIMESTAMP_WHITERABBIT
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TIMESTAMP_WHITERABBIT)::FCNCALL_NAME(TIMESTAMP_WHITERABBIT)
{
  FCNCALL_INIT;
  // DATA12 subsystem_id;
  {
  FCNCALL_SUBNAME("subsystem_id");
  { FCNCALL_CALL_CTRL_WRAP(subsystem_id,subsystem_id.FCNCALL_CALL(subsystem_id)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t1;
  {
  FCNCALL_SUBNAME("t1");
  { FCNCALL_CALL_CTRL_WRAP(t1,t1.FCNCALL_CALL(t1)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t2;
  {
  FCNCALL_SUBNAME("t2");
  { FCNCALL_CALL_CTRL_WRAP(t2,t2.FCNCALL_CALL(t2)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t3;
  {
  FCNCALL_SUBNAME("t3");
  { FCNCALL_CALL_CTRL_WRAP(t3,t3.FCNCALL_CALL(t3)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t4;
  {
  FCNCALL_SUBNAME("t4");
  { FCNCALL_CALL_CTRL_WRAP(t4,t4.FCNCALL_CALL(t4)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TIMESTAMP_WHITERABBIT

#ifndef USER_DEF_TIMESTAMP_WHITERABBIT_EXTENDED
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(TIMESTAMP_WHITERABBIT_EXTENDED)::FCNCALL_NAME(TIMESTAMP_WHITERABBIT_EXTENDED)
{
  FCNCALL_INIT;
  // DATA16 subsystem_id;
  {
  FCNCALL_SUBNAME("subsystem_id");
  { FCNCALL_CALL_CTRL_WRAP(subsystem_id,subsystem_id.FCNCALL_CALL(subsystem_id)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t1;
  {
  FCNCALL_SUBNAME("t1");
  { FCNCALL_CALL_CTRL_WRAP(t1,t1.FCNCALL_CALL(t1)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t2;
  {
  FCNCALL_SUBNAME("t2");
  { FCNCALL_CALL_CTRL_WRAP(t2,t2.FCNCALL_CALL(t2)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t3;
  {
  FCNCALL_SUBNAME("t3");
  { FCNCALL_CALL_CTRL_WRAP(t3,t3.FCNCALL_CALL(t3)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t4;
  {
  FCNCALL_SUBNAME("t4");
  { FCNCALL_CALL_CTRL_WRAP(t4,t4.FCNCALL_CALL(t4)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_TIMESTAMP_WHITERABBIT_EXTENDED

#ifndef USER_DEF_WR_MULTI
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(WR_MULTI)::FCNCALL_NAME(WR_MULTI)
{
  FCNCALL_INIT;
  // DATA32 time_hi;
  {
  FCNCALL_SUBNAME("time_hi");
  { FCNCALL_CALL_CTRL_WRAP(time_hi,time_hi.FCNCALL_CALL(time_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 time_lo;
  {
  FCNCALL_SUBNAME("time_lo");
  { FCNCALL_CALL_CTRL_WRAP(time_lo,time_lo.FCNCALL_CALL(time_lo)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_WR_MULTI

#ifndef USER_DEF_germanium_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(germanium_subev)::FCNCALL_NAME(germanium_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // FEBEX_PADDING padding;
  {
  FCNCALL_SUBNAME("padding");
  { FCNCALL_CALL_CTRL_WRAP(padding,padding.FCNCALL_CALL(padding)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_EVENT data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  // TIMESTAMP_WHITERABBIT ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_germanium_subev

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // germanium_subev germanium;
  {
  FCNCALL_SUBNAME("germanium");
  { FCNCALL_CALL_CTRL_WRAP(germanium,germanium.FCNCALL_CALL(germanium)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_unpack_event

#ifndef USER_DEF_unpack_sticky_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_sticky_event)::FCNCALL_NAME(unpack_sticky_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_sticky_event_base,FCNCALL_CLASS_NAME(unpack_sticky_event_base)::FCNCALL_CALL_BASE());
  FCNCALL_RET;
}
#endif//USER_DEF_unpack_sticky_event

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/
