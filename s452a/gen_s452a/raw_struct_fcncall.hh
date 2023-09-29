/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_raw_event_wr_subsystem
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_wr_subsystem)::FCNCALL_NAME(raw_event_wr_subsystem)
{
  FCNCALL_INIT;
  // DATA12 id;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(id,id.FCNCALL_CALL(id)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_wr_subsystem

#ifndef USER_DEF_raw_event_wr
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_wr)::FCNCALL_NAME(raw_event_wr)
{
  FCNCALL_INIT;
  // raw_event_wr_subsystem subsystem;
  {
  FCNCALL_SUBNAME("subsystem");
  { FCNCALL_CALL_CTRL_WRAP(subsystem,subsystem.FCNCALL_CALL(subsystem)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA16 t[4];
  {
  FCNCALL_SUBNAME("t");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(t__i0,,__i0,t[__i0].FCNCALL_CALL(t[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_wr

#ifndef USER_DEF_raw_event_board
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_board)::FCNCALL_NAME(raw_event_board)
{
  FCNCALL_INIT;
  // DATA8 id;
  {
  FCNCALL_SUBNAME("id");
  { FCNCALL_CALL_CTRL_WRAP(id,id.FCNCALL_CALL(id)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_board

#ifndef USER_DEF_raw_event_event_trigger_time
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_event_trigger_time)::FCNCALL_NAME(raw_event_event_trigger_time)
{
  FCNCALL_INIT;
  // DATA32 hi;
  {
  FCNCALL_SUBNAME("hi");
  { FCNCALL_CALL_CTRL_WRAP(hi,hi.FCNCALL_CALL(hi)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 lo;
  {
  FCNCALL_SUBNAME("lo");
  { FCNCALL_CALL_CTRL_WRAP(lo,lo.FCNCALL_CALL(lo)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_event_trigger_time

#ifndef USER_DEF_raw_event_event_trigger
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_event_trigger)::FCNCALL_NAME(raw_event_event_trigger)
{
  FCNCALL_INIT;
  // raw_event_event_trigger_time time;
  {
  FCNCALL_SUBNAME("time");
  { FCNCALL_CALL_CTRL_WRAP(time,time.FCNCALL_CALL(time)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_event_trigger

#ifndef USER_DEF_raw_event_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_event)::FCNCALL_NAME(raw_event_event)
{
  FCNCALL_INIT;
  // raw_event_event_trigger trigger;
  {
  FCNCALL_SUBNAME("trigger");
  { FCNCALL_CALL_CTRL_WRAP(trigger,trigger.FCNCALL_CALL(trigger)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_event

#ifndef USER_DEF_raw_event_hit
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_hit)::FCNCALL_NAME(raw_event_hit)
{
  FCNCALL_INIT;
  // DATA16 pattern;
  {
  FCNCALL_SUBNAME("pattern");
  { FCNCALL_CALL_CTRL_WRAP(pattern,pattern.FCNCALL_CALL(pattern)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_hit

#ifndef USER_DEF_raw_event_num_channels
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_num_channels)::FCNCALL_NAME(raw_event_num_channels)
{
  FCNCALL_INIT;
  // DATA32 fired;
  {
  FCNCALL_SUBNAME("fired");
  { FCNCALL_CALL_CTRL_WRAP(fired,fired.FCNCALL_CALL(fired)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_num_channels

#ifndef USER_DEF_raw_event_num
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_num)::FCNCALL_NAME(raw_event_num)
{
  FCNCALL_INIT;
  // raw_event_num_channels channels;
  {
  FCNCALL_SUBNAME("channels");
  { FCNCALL_CALL_CTRL_WRAP(channels,channels.FCNCALL_CALL(channels)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_num

#ifndef USER_DEF_raw_event_channel_trigger_time
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_channel_trigger_time)::FCNCALL_NAME(raw_event_channel_trigger_time)
{
  FCNCALL_INIT;
  // DATA16 hi[16];
  {
  FCNCALL_SUBNAME("hi");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(hi__i0,,__i0,hi[__i0].FCNCALL_CALL(hi[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 lo[16];
  {
  FCNCALL_SUBNAME("lo");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(lo__i0,,__i0,lo[__i0].FCNCALL_CALL(lo[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_channel_trigger_time

#ifndef USER_DEF_raw_event_channel_trigger
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_channel_trigger)::FCNCALL_NAME(raw_event_channel_trigger)
{
  FCNCALL_INIT;
  // raw_event_channel_trigger_time time;
  {
  FCNCALL_SUBNAME("time");
  { FCNCALL_CALL_CTRL_WRAP(time,time.FCNCALL_CALL(time)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_channel_trigger

#ifndef USER_DEF_raw_event_channel
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event_channel)::FCNCALL_NAME(raw_event_channel)
{
  FCNCALL_INIT;
  // DATA8 id[16];
  {
  FCNCALL_SUBNAME("id");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(id__i0,,__i0,id[__i0].FCNCALL_CALL(id[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_channel_trigger trigger;
  {
  FCNCALL_SUBNAME("trigger");
  { FCNCALL_CALL_CTRL_WRAP(trigger,trigger.FCNCALL_CALL(trigger)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 energy[16];
  {
  FCNCALL_SUBNAME("energy");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(energy__i0,,__i0,energy[__i0].FCNCALL_CALL(energy[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event_channel

#ifndef USER_DEF_raw_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event)::FCNCALL_NAME(raw_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_event_base,FCNCALL_CLASS_NAME(raw_event_base)::FCNCALL_CALL_BASE());
  // raw_event_wr wr;
  {
  FCNCALL_SUBNAME("wr");
  { FCNCALL_CALL_CTRL_WRAP(wr,wr.FCNCALL_CALL(wr)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_board board;
  {
  FCNCALL_SUBNAME("board");
  { FCNCALL_CALL_CTRL_WRAP(board,board.FCNCALL_CALL(board)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_event event;
  {
  FCNCALL_SUBNAME("event");
  { FCNCALL_CALL_CTRL_WRAP(event,event.FCNCALL_CALL(event)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_hit hit;
  {
  FCNCALL_SUBNAME("hit");
  { FCNCALL_CALL_CTRL_WRAP(hit,hit.FCNCALL_CALL(hit)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_num num;
  {
  FCNCALL_SUBNAME("num");
  { FCNCALL_CALL_CTRL_WRAP(num,num.FCNCALL_CALL(num)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA8 pileup[16];
  {
  FCNCALL_SUBNAME("pileup");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(pileup__i0,,__i0,pileup[__i0].FCNCALL_CALL(pileup[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // DATA8 overflow[16];
  {
  FCNCALL_SUBNAME("overflow");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(overflow__i0,,__i0,overflow[__i0].FCNCALL_CALL(overflow[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  // raw_event_channel channel;
  {
  FCNCALL_SUBNAME("channel");
  { FCNCALL_CALL_CTRL_WRAP(channel,channel.FCNCALL_CALL(channel)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_raw_event

#ifndef USER_DEF_raw_sticky
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_sticky)::FCNCALL_NAME(raw_sticky)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_sticky_base,FCNCALL_CLASS_NAME(raw_sticky_base)::FCNCALL_CALL_BASE());
  FCNCALL_RET;
}
#endif//USER_DEF_raw_sticky

#include "gen/default_fcncall_undef.hh"


/** END_FUNCTION_CALL_PER_MEMBER **************************************/
