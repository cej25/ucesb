/** BEGIN_MIRROR_STRUCT ************************************************
 *
 * Mirror (1 to 1) structure.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_mirror_define.hh"

#ifndef USER_DEF_FEBEX_EVENT
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(FEBEX_EVENT)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(board_id);
  STRUCT_MIRROR_TYPE(DATA8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(board_id);
  STRUCT_MIRROR_ITEM_CTRL(event_trigger_time_hi);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(event_trigger_time_hi);
  STRUCT_MIRROR_ITEM_CTRL(event_trigger_time_lo);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(event_trigger_time_lo);
  STRUCT_MIRROR_ITEM_CTRL(hit_pattern);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(hit_pattern);
  STRUCT_MIRROR_ITEM_CTRL(num_channels_fired);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(num_channels_fired);
  STRUCT_MIRROR_ITEM_CTRL(channel_id);
  STRUCT_MIRROR_TYPE(raw_array_zero_suppress) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA8),STRUCT_MIRROR_TEMPLATE_ARG(DATA8),16> STRUCT_MIRROR_NAME(channel_id);
  STRUCT_MIRROR_ITEM_CTRL(channel_trigger_time_hi);
  STRUCT_MIRROR_TYPE(raw_array_zero_suppress) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA16),STRUCT_MIRROR_TEMPLATE_ARG(DATA16),16> STRUCT_MIRROR_NAME(channel_trigger_time_hi);
  STRUCT_MIRROR_ITEM_CTRL(channel_trigger_time_lo);
  STRUCT_MIRROR_TYPE(raw_array_zero_suppress) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA32),STRUCT_MIRROR_TEMPLATE_ARG(DATA32),16> STRUCT_MIRROR_NAME(channel_trigger_time_lo);
  STRUCT_MIRROR_ITEM_CTRL(pileup);
  STRUCT_MIRROR_TYPE(raw_array) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA8),STRUCT_MIRROR_TEMPLATE_ARG(DATA8),16> STRUCT_MIRROR_NAME(pileup);
  STRUCT_MIRROR_ITEM_CTRL(overflow);
  STRUCT_MIRROR_TYPE(raw_array) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA8),STRUCT_MIRROR_TEMPLATE_ARG(DATA8),16> STRUCT_MIRROR_NAME(overflow);
  STRUCT_MIRROR_ITEM_CTRL(channel_cfd);
  STRUCT_MIRROR_TYPE(raw_array_zero_suppress) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA8),STRUCT_MIRROR_TEMPLATE_ARG(DATA8),16> STRUCT_MIRROR_NAME(channel_cfd);
  STRUCT_MIRROR_ITEM_CTRL(channel_energy);
  STRUCT_MIRROR_TYPE(raw_array_zero_suppress) < STRUCT_MIRROR_TYPE_TEMPLATE STRUCT_MIRROR_TEMPLATE_ARG(DATA32),STRUCT_MIRROR_TEMPLATE_ARG(DATA32),16> STRUCT_MIRROR_NAME(channel_energy);
  STRUCT_MIRROR_FCNS_DECL(FEBEX_EVENT);
};
#endif//USER_DEF_FEBEX_EVENT

#ifndef USER_DEF_FEBEX_PADDING
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(FEBEX_PADDING)
{
public:
  STRUCT_MIRROR_FCNS_DECL(FEBEX_PADDING);
};
#endif//USER_DEF_FEBEX_PADDING

#ifndef USER_DEF_TIMESTAMP_WHITERABBIT
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(TIMESTAMP_WHITERABBIT)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(subsystem_id);
  STRUCT_MIRROR_TYPE(DATA12) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(subsystem_id);
  STRUCT_MIRROR_ITEM_CTRL(t1);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t1);
  STRUCT_MIRROR_ITEM_CTRL(t2);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t2);
  STRUCT_MIRROR_ITEM_CTRL(t3);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t3);
  STRUCT_MIRROR_ITEM_CTRL(t4);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t4);
  STRUCT_MIRROR_FCNS_DECL(TIMESTAMP_WHITERABBIT);
};
#endif//USER_DEF_TIMESTAMP_WHITERABBIT

#ifndef USER_DEF_TIMESTAMP_WHITERABBIT_EXTENDED
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(TIMESTAMP_WHITERABBIT_EXTENDED)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(subsystem_id);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(subsystem_id);
  STRUCT_MIRROR_ITEM_CTRL(t1);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t1);
  STRUCT_MIRROR_ITEM_CTRL(t2);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t2);
  STRUCT_MIRROR_ITEM_CTRL(t3);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t3);
  STRUCT_MIRROR_ITEM_CTRL(t4);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t4);
  STRUCT_MIRROR_FCNS_DECL(TIMESTAMP_WHITERABBIT_EXTENDED);
};
#endif//USER_DEF_TIMESTAMP_WHITERABBIT_EXTENDED

#ifndef USER_DEF_WR_MULTI
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(WR_MULTI)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(time_hi);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(time_hi);
  STRUCT_MIRROR_ITEM_CTRL(time_lo);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(time_lo);
  STRUCT_MIRROR_FCNS_DECL(WR_MULTI);
};
#endif//USER_DEF_WR_MULTI

#ifndef USER_DEF_germanium_subev
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(germanium_subev) : public STRUCT_MIRROR_BASE(unpack_subevent_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(unpack_subevent_base);
  STRUCT_MIRROR_ITEM_CTRL(padding);
  STRUCT_MIRROR_TYPE(FEBEX_PADDING) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(padding);
  STRUCT_MIRROR_ITEM_CTRL(data);
  STRUCT_MIRROR_TYPE(FEBEX_EVENT) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(data);
  STRUCT_MIRROR_ITEM_CTRL(ts);
  STRUCT_MIRROR_TYPE(TIMESTAMP_WHITERABBIT) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(ts);
  STRUCT_MIRROR_FCNS_DECL(germanium_subev);
};
#endif//USER_DEF_germanium_subev

#ifndef USER_DEF_unpack_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(unpack_event) : public STRUCT_MIRROR_BASE(unpack_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(unpack_event_base);
  STRUCT_MIRROR_ITEM_CTRL(germanium);
  STRUCT_MIRROR_TYPE(germanium_subev) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(germanium);
  STRUCT_MIRROR_FCNS_DECL(unpack_event);
};
#endif//USER_DEF_unpack_event

#ifndef USER_DEF_unpack_sticky_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(unpack_sticky_event) : public STRUCT_MIRROR_BASE(unpack_sticky_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(unpack_sticky_event_base);
  STRUCT_MIRROR_FCNS_DECL(unpack_sticky_event);
};
#endif//USER_DEF_unpack_sticky_event

#include "gen/default_mirror_undef.hh"


/** END_MIRROR_STRUCT *************************************************/
