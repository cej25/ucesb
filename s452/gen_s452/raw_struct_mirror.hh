/** BEGIN_MIRROR_STRUCT ************************************************
 *
 * Mirror (1 to 1) structure.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_mirror_define.hh"

#ifndef USER_DEF_raw_event
STRUCT_MIRROR_TEMPLATE
class STRUCT_MIRROR_STRUCT(raw_event) : public STRUCT_MIRROR_BASE(raw_event_base)
{
public:
  STRUCT_MIRROR_ITEM_CTRL_BASE(raw_event_base);
  STRUCT_MIRROR_ITEM_CTRL(bPlastPMTLead);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(bPlastPMTLead__i0,,4);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(bPlastPMTLead__i0__i1,[4],16);
  STRUCT_MIRROR_ITEM_CTRL_ARRAY(bPlastPMTLead__i0__i1__i2,[4][16],100);
  STRUCT_MIRROR_TYPE(uint32) STRUCT_MIRROR_TYPE_TEMPLATE_FULL STRUCT_MIRROR_NAME(bPlastPMTLead[4][16][100]);
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
