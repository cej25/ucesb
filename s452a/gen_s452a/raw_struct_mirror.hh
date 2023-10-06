/** BEGIN_MIRROR_STRUCT ************************************************
 *
 * Mirror (1 to 1) structure.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_mirror_define.hh"

#ifndef USER_DEF_raw_event_wr_subsystem
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_wr_subsystem)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(id);
  STRUCT_MIRROR_TYPE(DATA12) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(id);
  STRUCT_MIRROR_FCNS_DECL(raw_event_wr_subsystem);
};
#endif//USER_DEF_raw_event_wr_subsystem

#ifndef USER_DEF_raw_event_wr
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_wr)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(subsystem);
  STRUCT_MIRROR_TYPE(raw_event_wr_subsystem) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(subsystem);
  STRUCT_MIRROR_ITEM_CTRL(t);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(t__i0,,4);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(t[4]);
  STRUCT_MIRROR_FCNS_DECL(raw_event_wr);
};
#endif//USER_DEF_raw_event_wr

#ifndef USER_DEF_raw_event_board
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_board)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(id);
  STRUCT_MIRROR_TYPE(DATA8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(id);
  STRUCT_MIRROR_FCNS_DECL(raw_event_board);
};
#endif//USER_DEF_raw_event_board

#ifndef USER_DEF_raw_event_event_trigger_time
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_event_trigger_time)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(hi);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(hi);
  STRUCT_MIRROR_ITEM_CTRL(lo);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(lo);
  STRUCT_MIRROR_FCNS_DECL(raw_event_event_trigger_time);
};
#endif//USER_DEF_raw_event_event_trigger_time

#ifndef USER_DEF_raw_event_event_trigger
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_event_trigger)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(time);
  STRUCT_MIRROR_TYPE(raw_event_event_trigger_time) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(time);
  STRUCT_MIRROR_FCNS_DECL(raw_event_event_trigger);
};
#endif//USER_DEF_raw_event_event_trigger

#ifndef USER_DEF_raw_event_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_event)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(trigger);
  STRUCT_MIRROR_TYPE(raw_event_event_trigger) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(trigger);
  STRUCT_MIRROR_FCNS_DECL(raw_event_event);
};
#endif//USER_DEF_raw_event_event

#ifndef USER_DEF_raw_event_hit
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_hit)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(pattern);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(pattern);
  STRUCT_MIRROR_FCNS_DECL(raw_event_hit);
};
#endif//USER_DEF_raw_event_hit

#ifndef USER_DEF_raw_event_num_channels
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_num_channels)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(fired);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(fired);
  STRUCT_MIRROR_FCNS_DECL(raw_event_num_channels);
};
#endif//USER_DEF_raw_event_num_channels

#ifndef USER_DEF_raw_event_num
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_num)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(channels);
  STRUCT_MIRROR_TYPE(raw_event_num_channels) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(channels);
  STRUCT_MIRROR_FCNS_DECL(raw_event_num);
};
#endif//USER_DEF_raw_event_num

#ifndef USER_DEF_raw_event_channel_trigger_time
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_channel_trigger_time)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(hi);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(hi__i0,,16);
  STRUCT_MIRROR_TYPE(DATA16) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(hi[16]);
  STRUCT_MIRROR_ITEM_CTRL(lo);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(lo__i0,,16);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(lo[16]);
  STRUCT_MIRROR_FCNS_DECL(raw_event_channel_trigger_time);
};
#endif//USER_DEF_raw_event_channel_trigger_time

#ifndef USER_DEF_raw_event_channel_trigger
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_channel_trigger)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(time);
  STRUCT_MIRROR_TYPE(raw_event_channel_trigger_time) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(time);
  STRUCT_MIRROR_FCNS_DECL(raw_event_channel_trigger);
};
#endif//USER_DEF_raw_event_channel_trigger

#ifndef USER_DEF_raw_event_channel
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event_channel)
{
public:
  STRUCT_MIRROR_ITEM_CTRL(id);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(id__i0,,16);
  STRUCT_MIRROR_TYPE(DATA8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(id[16]);
  STRUCT_MIRROR_ITEM_CTRL(cfd);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(cfd__i0,,16);
  STRUCT_MIRROR_TYPE(DATA8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(cfd[16]);
  STRUCT_MIRROR_ITEM_CTRL(trigger);
  STRUCT_MIRROR_TYPE(raw_event_channel_trigger) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(trigger);
  STRUCT_MIRROR_ITEM_CTRL(energy);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(energy__i0,,16);
  STRUCT_MIRROR_TYPE(DATA32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(energy[16]);
  STRUCT_MIRROR_FCNS_DECL(raw_event_channel);
};
#endif//USER_DEF_raw_event_channel

#ifndef USER_DEF_raw_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event) : public STRUCT_MIRROR_BASE(raw_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(raw_event_base);
  STRUCT_MIRROR_ITEM_CTRL(wr);
  STRUCT_MIRROR_TYPE(raw_event_wr) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(wr);
  STRUCT_MIRROR_ITEM_CTRL(board);
  STRUCT_MIRROR_TYPE(raw_event_board) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(board);
  STRUCT_MIRROR_ITEM_CTRL(event);
  STRUCT_MIRROR_TYPE(raw_event_event) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(event);
  STRUCT_MIRROR_ITEM_CTRL(hit);
  STRUCT_MIRROR_TYPE(raw_event_hit) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(hit);
  STRUCT_MIRROR_ITEM_CTRL(num);
  STRUCT_MIRROR_TYPE(raw_event_num) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(num);
  STRUCT_MIRROR_ITEM_CTRL(pileup);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(pileup__i0,,16);
  STRUCT_MIRROR_TYPE(DATA8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(pileup[16]);
  STRUCT_MIRROR_ITEM_CTRL(overflow);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(overflow__i0,,16);
  STRUCT_MIRROR_TYPE(DATA8) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(overflow[16]);
  STRUCT_MIRROR_ITEM_CTRL(channel);
  STRUCT_MIRROR_TYPE(raw_event_channel) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(channel);
  STRUCT_MIRROR_FCNS_DECL(raw_event);
};
#endif//USER_DEF_raw_event

#ifndef USER_DEF_raw_sticky
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_sticky) : public STRUCT_MIRROR_BASE(raw_sticky_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(raw_sticky_base);
  STRUCT_MIRROR_FCNS_DECL(raw_sticky);
};
#endif//USER_DEF_raw_sticky

#include "gen/default_mirror_undef.hh"


/** END_MIRROR_STRUCT *************************************************/
