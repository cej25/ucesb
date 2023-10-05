class raw_event : public raw_event_base
{
  uint32 bPlastPMTLead[4][16][100];
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
