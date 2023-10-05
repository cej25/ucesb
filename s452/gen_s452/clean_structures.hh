class ADC_DATA
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(ADC_DATA);
};
class BARRIER
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(BARRIER);
};
class DUMMY
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(DUMMY);
};
class SKIP
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 n);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 n);
  STRUCT_FCNS_DECL(SKIP);
};
class TAMEX4_EPOCH_DATA
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(TAMEX4_EPOCH_DATA);
};
class TAMEX4_HEADER
{
  raw_list_ii_zero_suppress<DATA16,DATA16,64> post_trig_ns;
  raw_list_ii_zero_suppress<DATA16,DATA16,64> pre_trig_ns;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TAMEX4_HEADER);
};
class TAMEX4_PADDING
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TAMEX4_PADDING);
};
class TAMEX4_TIME_DATA
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(TAMEX4_TIME_DATA);
};
class TAMEX4_SFP
{
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_coarse;
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_fine;
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_edge;
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_channel;
  raw_list_ii_zero_suppress<DATA32,DATA32,512> time_epoch;
    SINGLE(TAMEX4_TIME_DATA,time);
    SINGLE(TAMEX4_EPOCH_DATA,epoch);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  STRUCT_FCNS_DECL(TAMEX4_SFP);
};
class TAMEX_SFP
{
  SINGLE(TAMEX4_SFP,card[5]);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp);
  STRUCT_FCNS_DECL(TAMEX_SFP);
};
class TDC_DATA
{
  DATA8 multihit;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,raw_array_multi_zero_suppress<DATA24,DATA24,32,32> &data
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &channel
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &leadOrTrail);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TDC_DATA);
};
class TDC_ERROR
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TDC_ERROR);
};
class TDC_HEADER
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TDC_HEADER);
};
class TDC_TRAILER
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(TDC_TRAILER);
};
class TIMESTAMP_WHITERABBIT
{
  DATA12 subsystem_id;
  DATA16 t1;
  DATA16 t2;
  DATA16 t3;
  DATA16 t4;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(TIMESTAMP_WHITERABBIT);
};
class TIMESTAMP_WHITERABBIT_EXTENDED
{
  DATA16 subsystem_id;
  DATA16 t1;
  DATA16 t2;
  DATA16 t3;
  DATA16 t4;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(TIMESTAMP_WHITERABBIT_EXTENDED);
};
class VME_CAEN_V1290_FRS
{
  raw_array_multi_zero_suppress<DATA24,DATA24,32,32> data;
  raw_list_ii_zero_suppress<DATA8,DATA8,32> channel;
  raw_list_ii_zero_suppress<DATA8,DATA8,32> leadOrTrail;
  SINGLE(TDC_HEADER,tdc_header);
  SINGLE(TDC_DATA,measurement);
  SINGLE(TDC_ERROR,tdc_error);
  SINGLE(TDC_TRAILER,tdc_trailer);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(VME_CAEN_V1290_FRS);
};
class VME_CAEN_V792_FRS
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(VME_CAEN_V792_FRS);
};
class VME_CAEN_V830_FRS
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(VME_CAEN_V830_FRS);
};
class WR_MULTI
{
  DATA32 time_hi;
  DATA32 time_lo;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(WR_MULTI);
};
class aida_subev
 : public unpack_subevent_base
{
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
    SINGLE(EXT_AIDA,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(aida_subev);
};
class fatima_tamex_subev
 : public unpack_subevent_base
{
    SINGLE(TIMESTAMP_WHITERABBIT_EXTENDED,ts);
    SINGLE(EXT_FATIMA_TAMEX,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(fatima_tamex_subev);
};
class fatima_vme_subev
 : public unpack_subevent_base
{
    SINGLE(TIMESTAMP_WHITERABBIT_EXTENDED,ts);
    SINGLE(EXT_FATIMA_VME,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(fatima_vme_subev);
};
class frs_crate_subev
 : public unpack_subevent_base
{
    SINGLE(EXT_FRS,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_crate_subev);
};
class frs_main_crate_subev
 : public unpack_subevent_base
{
    SINGLE(EXT_FRS,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_main_crate_subev);
};
class frs_tof_crate_subev
 : public unpack_subevent_base
{
    SINGLE(EXT_FRS,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_tof_crate_subev);
};
class frs_tpat_subev
 : public unpack_subevent_base
{
    SINGLE(EXT_FRS,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_tpat_subev);
};
class frs_tpc_crate_subev
 : public unpack_subevent_base
{
    SINGLE(EXT_FRS,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_tpc_crate_subev);
};
class frs_whiterabbit_subev
 : public unpack_subevent_base
{
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_whiterabbit_subev);
};
class germanium_subev
 : public unpack_subevent_base
{
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
    SINGLE(EXT_GERMANIUM,data);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(germanium_subev);
};
class plastic_subev
 : public unpack_subevent_base
{
      SINGLE(EXT_PLASTIC_TP,data_tp);
      SINGLE(TAMEX4_PADDING,padding);
      SINGLE(TAMEX_SFP,crate[1]);
      SINGLE(TAMEX4_HEADER,header);
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
    SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(plastic_subev);
};
class unpack_event : public unpack_event_base
{
SINGLE(plastic_subev,plastic);
  bitsone<2> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return true; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_event);
};
class unpack_sticky_event : public unpack_sticky_event_base
{
  void __clear_visited() { }
  bool ignore_unknown_subevent() { return false; }
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  STRUCT_FCNS_DECL(unpack_sticky_event);
};
