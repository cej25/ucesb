/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_DUMMY
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(DUMMY)::FCNCALL_NAME(DUMMY)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_DUMMY

#ifndef USER_DEF_FEBEX_PADDING
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_PADDING)::FCNCALL_NAME(FEBEX_PADDING)
{
  FCNCALL_INIT;
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_PADDING

#ifndef USER_DEF_FEBEX_TRACES
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(FEBEX_TRACES)::FCNCALL_NAME(FEBEX_TRACES)
{
  FCNCALL_INIT;
  // DATA8 ftrigger;
  {
  FCNCALL_SUBNAME("ftrigger");
  { FCNCALL_CALL_CTRL_WRAP(ftrigger,ftrigger.FCNCALL_CALL(ftrigger)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA8 fboard;
  {
  FCNCALL_SUBNAME("fboard");
  { FCNCALL_CALL_CTRL_WRAP(fboard,fboard.FCNCALL_CALL(fboard)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 ftrig_time_hi;
  {
  FCNCALL_SUBNAME("ftrig_time_hi");
  { FCNCALL_CALL_CTRL_WRAP(ftrig_time_hi,ftrig_time_hi.FCNCALL_CALL(ftrig_time_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // DATA32 ftrig_time_lo;
  {
  FCNCALL_SUBNAME("ftrig_time_lo");
  { FCNCALL_CALL_CTRL_WRAP(ftrig_time_lo,ftrig_time_lo.FCNCALL_CALL(ftrig_time_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA32,DATA32,16,32> fts_hi;
  {
  FCNCALL_SUBNAME("fts_hi");
  { FCNCALL_CALL_CTRL_WRAP(fts_hi,fts_hi.FCNCALL_CALL(fts_hi)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA32,DATA32,16,32> fts_lo;
  {
  FCNCALL_SUBNAME("fts_lo");
  { FCNCALL_CALL_CTRL_WRAP(fts_lo,fts_lo.FCNCALL_CALL(fts_lo)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_multi_zero_suppress<DATA32,DATA32,16,32> fen;
  {
  FCNCALL_SUBNAME("fen");
  { FCNCALL_CALL_CTRL_WRAP(fen,fen.FCNCALL_CALL(fen)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA32,DATA32,16> flength;
  {
  FCNCALL_SUBNAME("flength");
  { FCNCALL_CALL_CTRL_WRAP(flength,flength.FCNCALL_CALL(flength)); }
  FCNCALL_SUBNAME_END;
  }
  // raw_array_zero_suppress<DATA16,DATA16,4000> ftrace[16];
  {
  FCNCALL_SUBNAME("ftrace");
  FCNCALL_FOR(__i0,16)
  {
    FCNCALL_SUBINDEX(__i0);
    { FCNCALL_CALL_CTRL_WRAP_ARRAY(ftrace__i0,,__i0,ftrace[__i0].FCNCALL_CALL(ftrace[__i0])); }
    FCNCALL_SUBINDEX_END(__i0);
  }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_FEBEX_TRACES

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

#ifndef USER_DEF_febex_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(febex_subev)::FCNCALL_NAME(febex_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT wr;
  {
  FCNCALL_SUBNAME("wr");
  { FCNCALL_CALL_CTRL_WRAP(wr,wr.FCNCALL_CALL(wr)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_PADDING padding;
  {
  FCNCALL_SUBNAME("padding");
  { FCNCALL_CALL_CTRL_WRAP(padding,padding.FCNCALL_CALL(padding)); }
  FCNCALL_SUBNAME_END;
  }
  // FEBEX_TRACES data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_febex_subev

#ifndef USER_DEF_unpack_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(unpack_event)::FCNCALL_NAME(unpack_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_event_base,FCNCALL_CLASS_NAME(unpack_event_base)::FCNCALL_CALL_BASE());
  // febex_subev trace;
  {
  FCNCALL_SUBNAME("trace");
  { FCNCALL_CALL_CTRL_WRAP(trace,trace.FCNCALL_CALL(trace)); }
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
