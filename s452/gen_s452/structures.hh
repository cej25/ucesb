/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for AIDA_INFO.
 *
 * Do not edit - automatically generated.
 */

// AIDA_INFO(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
#if !PACKER_CODE
# define DECLARED_UNPACK_AIDA_INFO
class AIDA_INFO
#else//PACKER_CODE
# define DECLARED_PACKER_AIDA_INFO
class PACKER_AIDA_INFO
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 module[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 channel[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 info[13000] NO_INDEX_LIST);
  // MEMBER(DATA16 adc[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_low[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_med[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_high[13000] NO_INDEX_LIST);
  // UINT32 wordA NOENCODE
  // {
    //  0_19: info_field;
    // 20_23: info_code = RANGE(2,15);
    // 24_29: module_id = MATCH(module_id);
    // 30_31: 2;
  // }
  // UINT32 wordB NOENCODE
  // {
    //  0_27: info_time;
    // 28_31: 0;
  // }
  // ENCODE(module APPEND_LIST,(value=static_cast<uint8_t>(module_id)));

  // ENCODE(info APPEND_LIST,(value=wordA.info_code));

  // ENCODE(ts_low APPEND_LIST,(value=wordB.info_time));

  // ENCODE(channel APPEND_LIST,(value=255));

  // if((((wordA.info_code == 2) || (wordA.info_code == 4)) || (wordA.info_code == 7)))

    // ENCODE(ts_med APPEND_LIST,(value=wordA.info_field));

    // ENCODE(ts_high APPEND_LIST,(value=0));

    // ENCODE(adc APPEND_LIST,(value=0));

  // if(((wordA.info_code == 5) || (wordA.info_code == 8)))

    // ENCODE(ts_high APPEND_LIST,(value=wordA.info_field));

    // ENCODE(ts_med APPEND_LIST,(value=0));

    // ENCODE(adc APPEND_LIST,(value=0));

  // if((wordA.info_code == 6))

    // ENCODE(adc APPEND_LIST,(value=0));

    // ENCODE(ts_med APPEND_LIST,(value=wordA.info_field));

    // ENCODE(ts_high APPEND_LIST,(value=0));


public:
#ifndef __PSDC__
# if !PACKER_CODE
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
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                       ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(AIDA_INFO);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for AIDA_ADC.
 *
 * Do not edit - automatically generated.
 */

// AIDA_ADC(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
#if !PACKER_CODE
# define DECLARED_UNPACK_AIDA_ADC
class AIDA_ADC
#else//PACKER_CODE
# define DECLARED_PACKER_AIDA_ADC
class PACKER_AIDA_ADC
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 module[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 channel[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 info[13000] NO_INDEX_LIST);
  // MEMBER(DATA16 adc[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_low[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_med[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_high[13000] NO_INDEX_LIST);
  // UINT32 wordA NOENCODE
  // {
    //  0_15: adc_value;
    // 16_21: channel_id = RANGE(0,63);
    // 22_27: module_id = MATCH(module_id);
    //    28: adc_range;
    //    29: 0;
    // 30_31: 3;
  // }
  // UINT32 wordB NOENCODE
  // {
    //  0_27: ts;
    // 28_31: 0;
  // }
  // ENCODE(module APPEND_LIST,(value=static_cast<uint8_t>(module_id)));

  // ENCODE(adc APPEND_LIST,(value=wordA.adc_value));

  // ENCODE(channel APPEND_LIST,(value=wordA.channel_id));

  // ENCODE(ts_low APPEND_LIST,(value=wordB.ts));

  // ENCODE(ts_med APPEND_LIST,(value=0));

  // ENCODE(ts_high APPEND_LIST,(value=0));

  // ENCODE(info APPEND_LIST,(value=255));


public:
#ifndef __PSDC__
# if !PACKER_CODE
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
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                       ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(AIDA_ADC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for AIDA_MODULE.
 *
 * Do not edit - automatically generated.
 */

// AIDA_MODULE(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
#if !PACKER_CODE
# define DECLARED_UNPACK_AIDA_MODULE
class AIDA_MODULE
#else//PACKER_CODE
# define DECLARED_PACKER_AIDA_MODULE
class PACKER_AIDA_MODULE
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 module[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 channel[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 info[13000] NO_INDEX_LIST);
  // MEMBER(DATA16 adc[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_low[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_med[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_high[13000] NO_INDEX_LIST);
  // select several

    // i = AIDA_INFO(module_id=module_id,module=module,channel=channel,info=info,
                  // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // d = AIDA_ADC(module_id=module_id,module=module,channel=channel,info=info,
                 // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
  SINGLE(AIDA_INFO,i);
  SINGLE(AIDA_ADC,d);

public:
#ifndef __PSDC__
# if !PACKER_CODE
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
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                       ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(AIDA_MODULE);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for AIDA.
 *
 * Do not edit - automatically generated.
 */

// AIDA()
#if !PACKER_CODE
# define DECLARED_UNPACK_AIDA
class AIDA
#else//PACKER_CODE
# define DECLARED_PACKER_AIDA
class PACKER_AIDA
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA8 module[13000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,13000> module;
  // MEMBER(DATA8 channel[13000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,13000> channel;
  // MEMBER(DATA8 info[13000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,13000> info;
  // MEMBER(DATA16 adc[13000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,13000> adc;
  // MEMBER(DATA32 ts_low[13000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,13000> ts_low;
  // MEMBER(DATA32 ts_med[13000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,13000> ts_med;
  // MEMBER(DATA32 ts_high[13000] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,13000> ts_high;
  // select several

    // mod[0] = AIDA_MODULE(module_id=0,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[1] = AIDA_MODULE(module_id=1,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[2] = AIDA_MODULE(module_id=2,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[3] = AIDA_MODULE(module_id=3,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[4] = AIDA_MODULE(module_id=4,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[5] = AIDA_MODULE(module_id=5,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[6] = AIDA_MODULE(module_id=6,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[7] = AIDA_MODULE(module_id=7,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[8] = AIDA_MODULE(module_id=8,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[9] = AIDA_MODULE(module_id=9,module=module,channel=channel,info=info,
                         // adc=adc,ts_low=ts_low,ts_med=ts_med,ts_high=ts_high);
    // mod[10] = AIDA_MODULE(module_id=10,module=module,channel=channel,
                          // info=info,adc=adc,ts_low=ts_low,ts_med=ts_med,
                          // ts_high=ts_high);
    // mod[11] = AIDA_MODULE(module_id=11,module=module,channel=channel,
                          // info=info,adc=adc,ts_low=ts_low,ts_med=ts_med,
                          // ts_high=ts_high);
  SINGLE(AIDA_MODULE,mod[12]);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(AIDA);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// DUMMY()
#if !PACKER_CODE
# define DECLARED_UNPACK_DUMMY
class DUMMY
#else//PACKER_CODE
# define DECLARED_PACKER_DUMMY
class PACKER_DUMMY
#endif//PACKER_CODE

{
public:
  // UINT32 no NOENCODE;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(DUMMY);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EXT_AIDA.
 *
 * Do not edit - automatically generated.
 */


/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EXT_FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */


/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EXT_FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */


/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EXT_GERMANIUM.
 *
 * Do not edit - automatically generated.
 */


/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FATIMA_QDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_QDC()
#if !PACKER_CODE
# define DECLARED_UNPACK_FATIMA_QDC
class FATIMA_QDC
#else//PACKER_CODE
# define DECLARED_PACKER_FATIMA_QDC
class PACKER_FATIMA_QDC
#endif//PACKER_CODE

{
public:

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FATIMA_QDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FATIMA_SCALER.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_SCALER()
#if !PACKER_CODE
# define DECLARED_UNPACK_FATIMA_SCALER
class FATIMA_SCALER
#else//PACKER_CODE
# define DECLARED_PACKER_FATIMA_SCALER
class PACKER_FATIMA_SCALER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 scalers[16] ZERO_SUPPRESS_LIST);
  raw_list_zero_suppress<DATA32,DATA32,16> scalers;
  // UINT32 header NOENCODE
  // {
    //  0_31: h = CHECK(0x7a001000);
  // }
  // list(0<=index<16)

    // UINT32 ch_data NOENCODE;
    // ENCODE(scalers[index],(value=ch_data));

  // UINT32 trailer NOENCODE
  // {
    //  0_31: t = CHECK(0x7c000000);
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FATIMA_SCALER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TAMEX()
#if !PACKER_CODE
# define DECLARED_UNPACK_FATIMA_TAMEX
class FATIMA_TAMEX
#else//PACKER_CODE
# define DECLARED_PACKER_FATIMA_TAMEX
class PACKER_FATIMA_TAMEX
#endif//PACKER_CODE

{
public:
  // select several

    // dummy = DUMMY();
  SINGLE(DUMMY,dummy);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FATIMA_TAMEX);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FATIMA_TDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TDC()
#if !PACKER_CODE
# define DECLARED_UNPACK_FATIMA_TDC
class FATIMA_TDC
#else//PACKER_CODE
# define DECLARED_PACKER_FATIMA_TDC
class PACKER_FATIMA_TDC
#endif//PACKER_CODE

{
public:

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FATIMA_TDC);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_VME()
#if !PACKER_CODE
# define DECLARED_UNPACK_FATIMA_VME
class FATIMA_VME
#else//PACKER_CODE
# define DECLARED_PACKER_FATIMA_VME
class PACKER_FATIMA_VME
#endif//PACKER_CODE

{
public:
  // select optional

    // scaler = FATIMA_SCALER();
  SINGLE(FATIMA_SCALER,scaler);
  // select several

    // dummy = DUMMY();
  SINGLE(DUMMY,dummy);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FATIMA_VME);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS()
#if !PACKER_CODE
# define DECLARED_UNPACK_FRS
class FRS
#else//PACKER_CODE
# define DECLARED_PACKER_FRS
class PACKER_FRS
#endif//PACKER_CODE

{
public:
  // select several

    // dummy = DUMMY();
  SINGLE(DUMMY,dummy);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FRS_FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS_FRS()
#if !PACKER_CODE
# define DECLARED_UNPACK_FRS_FRS
class FRS_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_FRS_FRS
class PACKER_FRS_FRS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  raw_list_zero_suppress<DATA32,DATA32,32> scalers;
  // UINT32 no NOENCODE;
  // if(((no & 0xffff0000) == 0x04400000))

    // list(0<=index<32)

      // UINT32 ch_data NOENCODE;
      // ENCODE(scalers[index],(value=ch_data));


public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FRS_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for FRS_MAIN.
 *
 * Do not edit - automatically generated.
 */

// FRS_MAIN()
#if !PACKER_CODE
# define DECLARED_UNPACK_FRS_MAIN
class FRS_MAIN
#else//PACKER_CODE
# define DECLARED_PACKER_FRS_MAIN
class PACKER_FRS_MAIN
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  raw_list_zero_suppress<DATA32,DATA32,32> scalers;
  // UINT32 no NOENCODE;
  // if((no == 0xbabababa))

    // UINT32 sc NOENCODE;
    // if(((sc & 0xffff0000) == 0x0c800000))

      // list(0<=index<32)

        // UINT32 ch_data NOENCODE;
        // ENCODE(scalers[index],(value=ch_data));


public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(FRS_MAIN);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TIMESTAMP_WHITERABBIT
class TIMESTAMP_WHITERABBIT
#else//PACKER_CODE
# define DECLARED_PACKER_TIMESTAMP_WHITERABBIT
class PACKER_TIMESTAMP_WHITERABBIT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 subsystem_id);
  DATA12 subsystem_id;
  // MEMBER(DATA16 t1);
  DATA16 t1;
  // MEMBER(DATA16 t2);
  DATA16 t2;
  // MEMBER(DATA16 t3);
  DATA16 t3;
  // MEMBER(DATA16 t4);
  DATA16 t4;
  // UINT32 header NOENCODE
  // {
    //  0_11: id = MATCH(id);
    // 12_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TIMESTAMP_WHITERABBIT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TIMESTAMP_WHITERABBIT_EXTENDED.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT_EXTENDED(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TIMESTAMP_WHITERABBIT_EXTENDED
class TIMESTAMP_WHITERABBIT_EXTENDED
#else//PACKER_CODE
# define DECLARED_PACKER_TIMESTAMP_WHITERABBIT_EXTENDED
class PACKER_TIMESTAMP_WHITERABBIT_EXTENDED
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA16 subsystem_id);
  DATA16 subsystem_id;
  // MEMBER(DATA16 t1);
  DATA16 t1;
  // MEMBER(DATA16 t2);
  DATA16 t2;
  // MEMBER(DATA16 t3);
  DATA16 t3;
  // MEMBER(DATA16 t4);
  DATA16 t4;
  // UINT32 header NOENCODE
  // {
    //  0_12: id = MATCH(id);
    // 13_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TIMESTAMP_WHITERABBIT_EXTENDED);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
#if !PACKER_CODE
# define DECLARED_UNPACK_TRLOII_TPAT
class TRLOII_TPAT
#else//PACKER_CODE
# define DECLARED_PACKER_TRLOII_TPAT
class PACKER_TRLOII_TPAT
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 n);
  DATA32 n;
  // MEMBER(DATA32 tpat[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,170> tpat;
  // MEMBER(DATA8 trig[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,170> trig;
  // MEMBER(DATA32 ts_lo[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_lo;
  // MEMBER(DATA32 ts_hi[170] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,170> ts_hi;
  // UINT32 header NOENCODE
  // {
    //  0_11: uint32_num;
    // 12_23: event_num;
    // 24_31: id = MATCH(id);
    // ENCODE(n,(value=(uint32_num / 3)));
  // }
  // list(0<=index<(header.uint32_num / 3))

    // UINT32 time_lo NOENCODE
    // {
      //  0_31: t;
      // ENCODE(ts_lo APPEND_LIST,(value=t));
    // }
    // UINT32 time_hi NOENCODE
    // {
      //  0_30: t;
      //    31: overflow;
      // ENCODE(ts_hi APPEND_LIST,(value=t));
    // }
    // UINT32 trigger NOENCODE
    // {
      //  0_23: tpat;
      // 24_27: encoded;
      // 28_31: lec;
      // ENCODE(tpat APPEND_LIST,(value=tpat));
      // ENCODE(trig APPEND_LIST,(value=encoded));
    // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 id);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 id);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 id);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TRLOII_TPAT);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
#if !PACKER_CODE
# define DECLARED_UNPACK_WR_MULTI
class WR_MULTI
#else//PACKER_CODE
# define DECLARED_PACKER_WR_MULTI
class PACKER_WR_MULTI
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA32 time_hi);
  DATA32 time_hi;
  // MEMBER(DATA32 time_lo);
  DATA32 time_lo;
  // UINT32 hi NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_hi,(value=time));
  // }
  // UINT32 lo NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_lo,(value=time));
  // }

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(WR_MULTI);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for aida_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(aida_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_aida_subev
class aida_subev
#else//PACKER_CODE
# define DECLARED_PACKER_aida_subev
class PACKER_aida_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x700);
  // external data = EXT_AIDA();
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(EXT_AIDA,data);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(aida_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for fatima_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_tamex_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_fatima_tamex_subev
class fatima_tamex_subev
#else//PACKER_CODE
# define DECLARED_PACKER_fatima_tamex_subev
class PACKER_fatima_tamex_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
  // external data = EXT_FATIMA_TAMEX();
  SINGLE(TIMESTAMP_WHITERABBIT_EXTENDED,ts);
  SINGLE(EXT_FATIMA_TAMEX,data);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(fatima_tamex_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for fatima_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_vme_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_fatima_vme_subev
class fatima_vme_subev
#else//PACKER_CODE
# define DECLARED_PACKER_fatima_vme_subev
class PACKER_fatima_vme_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
  // external data = EXT_FATIMA_VME();
  SINGLE(TIMESTAMP_WHITERABBIT_EXTENDED,ts);
  SINGLE(EXT_FATIMA_VME,data);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(fatima_vme_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_frs_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_frs_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_frs_subev
class frs_frs_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_frs_subev
class PACKER_frs_frs_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // subev = FRS_FRS();
  SINGLE(FRS_FRS,subev);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_frs_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_main_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_main_subev
class frs_main_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_main_subev
class PACKER_frs_main_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // select several

    // subev = FRS_MAIN();
  SINGLE(FRS_MAIN,subev);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_main_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_subev1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev1)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_subev1
class frs_subev1
#else//PACKER_CODE
# define DECLARED_PACKER_frs_subev1
class PACKER_frs_subev1
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  // subev = FRS();
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(FRS,subev);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_subev1);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_subev4.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev4)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_subev4
class frs_subev4
#else//PACKER_CODE
# define DECLARED_PACKER_frs_subev4
class PACKER_frs_subev4
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  // subev = FRS();
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(FRS,subev);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_subev4);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_subev6.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev6)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_subev6
class frs_subev6
#else//PACKER_CODE
# define DECLARED_PACKER_frs_subev6
class PACKER_frs_subev6
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  // subev = FRS();
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(FRS,subev);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_subev6);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpat_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_tpat_subev
class frs_tpat_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_tpat_subev
class PACKER_frs_tpat_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // dummy = DUMMY();
  // tpat = TRLOII_TPAT(id=207);
  SINGLE(DUMMY,dummy);
  SINGLE(TRLOII_TPAT,tpat);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(frs_tpat_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for germanium_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(germanium_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_germanium_subev
class germanium_subev
#else//PACKER_CODE
# define DECLARED_PACKER_germanium_subev
class PACKER_germanium_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x400);
  // external data = EXT_GERMANIUM();
  SINGLE(TIMESTAMP_WHITERABBIT,ts);
  SINGLE(EXT_GERMANIUM,data);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(germanium_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for plastic_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(plastic_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_plastic_subev
class plastic_subev
#else//PACKER_CODE
# define DECLARED_PACKER_plastic_subev
class PACKER_plastic_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // ts = TIMESTAMP_WHITERABBIT(id=0x500);
  SINGLE(TIMESTAMP_WHITERABBIT,ts);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(plastic_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
class unpack_event : public unpack_event_base
{
public:
  // germanium = germanium_subev(type=10,subtype=1,procid=60,control=20,
                              // subcrate=0);
  // fatima_vme = fatima_vme_subev(type=10,subtype=1,procid=70,control=20,
                                // subcrate=0);
  // fatima_tamex = fatima_tamex_subev(type=10,subtype=1,procid=75,control=20,
                                    // subcrate=0);
  // aida = aida_subev(type=10,subtype=1,procid=90,control=37,subcrate=0);
  // frs_main = frs_main_subev(type=12,subtype=1,procid=10,control=20,
                            // subcrate=0);
  // frs_tpat = frs_tpat_subev(type=36,subtype=0xe10,procid=10,control=20,
                            // subcrate=0);
  // frs_frs = frs_frs_subev(type=12,subtype=1,procid=30,control=20,
                          // subcrate=0);
  // ignore_unknown_subevent;
SINGLE(germanium_subev,germanium);
SINGLE(fatima_vme_subev,fatima_vme);
SINGLE(fatima_tamex_subev,fatima_tamex);
SINGLE(aida_subev,aida);
SINGLE(frs_main_subev,frs_main);
SINGLE(frs_tpat_subev,frs_tpat);
SINGLE(frs_frs_subev,frs_frs);
public:
#ifndef __PSDC__
  bitsone<8> __visited;
  void __clear_visited() { __visited.clear(); }
  bool ignore_unknown_subevent() { return true; }
#endif//!__PSDC__

public:
#ifndef __PSDC__
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  // void __clean_event();

  STRUCT_FCNS_DECL(unpack_event);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
class unpack_sticky_event : public unpack_sticky_event_base
{
public:
public:
#ifndef __PSDC__
  void __clear_visited() { }
  bool ignore_unknown_subevent() { return false; }
#endif//!__PSDC__

public:
#ifndef __PSDC__
template<typename __data_src_t>
  int __unpack_subevent(subevent_header *__header,__data_src_t &__buffer);
  int __revoke_subevent(subevent_header *__header);
  // void __clean_event();

  STRUCT_FCNS_DECL(unpack_sticky_event);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
