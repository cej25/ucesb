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

#ifndef USER_DEF_aida_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(aida_subev)::FCNCALL_NAME(aida_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // EXT_AIDA data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_aida_subev

#ifndef USER_DEF_fatima_tamex_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(fatima_tamex_subev)::FCNCALL_NAME(fatima_tamex_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT_EXTENDED ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // EXT_FATIMA_TAMEX data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_fatima_tamex_subev

#ifndef USER_DEF_fatima_vme_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(fatima_vme_subev)::FCNCALL_NAME(fatima_vme_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT_EXTENDED ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // EXT_FATIMA_VME data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_fatima_vme_subev

#ifndef USER_DEF_frs_crate_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(frs_crate_subev)::FCNCALL_NAME(frs_crate_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_FRS data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_frs_crate_subev

#ifndef USER_DEF_frs_main_crate_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(frs_main_crate_subev)::FCNCALL_NAME(frs_main_crate_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_FRS data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_frs_main_crate_subev

#ifndef USER_DEF_frs_tof_crate_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(frs_tof_crate_subev)::FCNCALL_NAME(frs_tof_crate_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_FRS data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_frs_tof_crate_subev

#ifndef USER_DEF_frs_tpat_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(frs_tpat_subev)::FCNCALL_NAME(frs_tpat_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_FRS data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_frs_tpat_subev

#ifndef USER_DEF_frs_tpc_crate_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(frs_tpc_crate_subev)::FCNCALL_NAME(frs_tpc_crate_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_FRS data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_frs_tpc_crate_subev

#ifndef USER_DEF_frs_whiterabbit_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(frs_whiterabbit_subev)::FCNCALL_NAME(frs_whiterabbit_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_frs_whiterabbit_subev

#ifndef USER_DEF_germanium_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(germanium_subev)::FCNCALL_NAME(germanium_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // TIMESTAMP_WHITERABBIT ts;
  {
  FCNCALL_SUBNAME("ts");
  { FCNCALL_CALL_CTRL_WRAP(ts,ts.FCNCALL_CALL(ts)); }
  FCNCALL_SUBNAME_END;
  }
  // EXT_GERMANIUM data;
  {
  FCNCALL_SUBNAME("data");
  { FCNCALL_CALL_CTRL_WRAP(data,data.FCNCALL_CALL(data)); }
  FCNCALL_SUBNAME_END;
  }
  FCNCALL_RET;
}
#endif//USER_DEF_germanium_subev

#ifndef USER_DEF_plastic_subev
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(plastic_subev)::FCNCALL_NAME(plastic_subev)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(unpack_subevent_base,FCNCALL_CLASS_NAME(unpack_subevent_base)::FCNCALL_CALL_BASE());
  // EXT_PLASTIC_TP data_tp;
  {
  FCNCALL_SUBNAME("data_tp");
  { FCNCALL_CALL_CTRL_WRAP(data_tp,data_tp.FCNCALL_CALL(data_tp)); }
  FCNCALL_SUBNAME_END;
  }
  // EXT_PLASTIC data;
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
#endif//USER_DEF_plastic_subev

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