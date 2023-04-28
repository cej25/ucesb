class AIDA_INFO
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                      ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 module_id);
  STRUCT_FCNS_DECL(AIDA_INFO);
};
class AIDA_ADC
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                      ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 module_id);
  STRUCT_FCNS_DECL(AIDA_ADC);
};
class AIDA_MODULE
{
  SINGLE(AIDA_INFO,i);
  SINGLE(AIDA_ADC,d);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                      ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 module_id);
  STRUCT_FCNS_DECL(AIDA_MODULE);
};
class AIDA
{
  raw_list_ii_zero_suppress<DATA8,DATA8,13000> module;
  raw_list_ii_zero_suppress<DATA8,DATA8,13000> channel;
  raw_list_ii_zero_suppress<DATA8,DATA8,13000> info;
  raw_list_ii_zero_suppress<DATA16,DATA16,13000> adc;
  raw_list_ii_zero_suppress<DATA32,DATA32,13000> ts_low;
  raw_list_ii_zero_suppress<DATA32,DATA32,13000> ts_med;
  raw_list_ii_zero_suppress<DATA32,DATA32,13000> ts_high;
  SINGLE(AIDA_MODULE,mod[12]);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(AIDA);
};
class DUMMY
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(DUMMY);
};
class FATIMA_QDC
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FATIMA_QDC);
};
class FATIMA_SCALER
{
  raw_list_zero_suppress<DATA32,DATA32,16> scalers;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FATIMA_SCALER);
};
class FATIMA_TAMEX
{
  SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FATIMA_TAMEX);
};
class FATIMA_TDC
{
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FATIMA_TDC);
};
class FATIMA_VME
{
  SINGLE(FATIMA_SCALER,scaler);
  SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FATIMA_VME);
};
class FRS
{
  SINGLE(DUMMY,dummy);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FRS);
};
class FRS_FRS
{
  raw_list_zero_suppress<DATA32,DATA32,32> scalers;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FRS_FRS);
};
class FRS_MAIN
{
  raw_list_zero_suppress<DATA32,DATA32,32> scalers;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(FRS_MAIN);
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
class TRLOII_TPAT
{
  DATA32 n;
  raw_list_ii_zero_suppress<DATA32,DATA32,170> tpat;
  raw_list_ii_zero_suppress<DATA8,DATA8,170> trig;
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_lo;
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_hi;
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  STRUCT_FCNS_DECL(TRLOII_TPAT);
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
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(fatima_vme_subev);
};
class frs_frs_subev
 : public unpack_subevent_base
{
  SINGLE(FRS_FRS,subev);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_frs_subev);
};
class frs_main_subev
 : public unpack_subevent_base
{
  SINGLE(FRS_MAIN,subev);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_main_subev);
};
class frs_subev1
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(FRS,subev);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_subev1);
};
class frs_subev4
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(FRS,subev);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_subev4);
};
class frs_subev6
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(FRS,subev);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_subev6);
};
class frs_tpat_subev
 : public unpack_subevent_base
{
  SINGLE(DUMMY,dummy);
  SINGLE(TRLOII_TPAT,tpat);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(frs_tpat_subev);
};
class germanium_subev
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(EXT_GERMANIUM,data);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(germanium_subev);
};
class plastic_subev
 : public unpack_subevent_base
{
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  STRUCT_FCNS_DECL(plastic_subev);
};
class unpack_event : public unpack_event_base
{
SINGLE(germanium_subev,germanium);
SINGLE(fatima_vme_subev,fatima_vme);
SINGLE(fatima_tamex_subev,fatima_tamex);
SINGLE(aida_subev,aida);
SINGLE(frs_main_subev,frs_main);
SINGLE(frs_tpat_subev,frs_tpat);
SINGLE(frs_frs_subev,frs_frs);
  bitsone<8> __visited;
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
