/** BEGIN_FUNCTION_CALL_PER_MEMBER *************************************
 *
 * Recursive function calls per member.
 *
 * Do not edit - automatically generated.
 */

#include "gen/default_fcncall_define.hh"

#ifndef USER_DEF_raw_event
FCNCALL_TEMPLATE
FCNCALL_RET_TYPE FCNCALL_CLASS_NAME(raw_event)::FCNCALL_NAME(raw_event)
{
  FCNCALL_INIT;
  FCNCALL_CALL_CTRL_WRAP(raw_event_base,FCNCALL_CLASS_NAME(raw_event_base)::FCNCALL_CALL_BASE());
  // uint32 bPlastPMTLead[4][16][100];
  {
  FCNCALL_SUBNAME("bPlastPMTLead");
  FCNCALL_FOR(__i0,4)
  {
    FCNCALL_SUBINDEX(__i0);
    FCNCALL_FOR(__i1,16)
    {
      FCNCALL_SUBINDEX(__i1);
      FCNCALL_FOR(__i2,100)
      {
        FCNCALL_SUBINDEX(__i2);
        { FCNCALL_CALL_CTRL_WRAP_ARRAY(bPlastPMTLead__i0__i1__i2,[__i0][__i1],__i2,FCNCALL_CALL_TYPE(uint32,bPlastPMTLead[__i0][__i1][__i2])); }
        FCNCALL_SUBINDEX_END(__i2);
      }
      FCNCALL_SUBINDEX_END(__i1);
    }
    FCNCALL_SUBINDEX_END(__i0);
  }
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
