/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for AIDA_INFO.
 *
 * Do not edit - automatically generated.
 */

// AIDA_INFO(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_src_t>
bool AIDA_INFO::__match(__data_src_t &__buffer,uint32 module_id)
{
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 info_field : 20; // 0..19
      uint32 info_code : 4; // 20..23
      uint32 module_id : 6; // 24..29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 module_id : 6; // 24..29
      uint32 info_code : 4; // 20..23
      uint32 info_field : 20; // 0..19
#endif
    };
    uint32  u32;
  } wordA;
  MATCH_READ_FROM_BUFFER_FULL(54,uint32 ,wordA,wordA.u32,2);
  MATCH_BITS_RANGE(51,wordA.info_code,2,15);
  MATCH_BITS_EQUAL(52,wordA.module_id,module_id);
  MATCH_BITS_EQUAL(53,wordA.unnamed_30_31,2);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,AIDA_INFO::__match,uint32 module_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for AIDA_ADC.
 *
 * Do not edit - automatically generated.
 */

// AIDA_ADC(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_src_t>
bool AIDA_ADC::__match(__data_src_t &__buffer,uint32 module_id)
{
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
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 adc_value : 16; // 0..15
      uint32 channel_id : 6; // 16..21
      uint32 module_id : 6; // 22..27
      uint32 adc_range : 1; // 28
      uint32 unnamed_29_29 : 1; // 29
      uint32 unnamed_30_31 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_30_31 : 2; // 30..31
      uint32 unnamed_29_29 : 1; // 29
      uint32 adc_range : 1; // 28
      uint32 module_id : 6; // 22..27
      uint32 channel_id : 6; // 16..21
      uint32 adc_value : 16; // 0..15
#endif
    };
    uint32  u32;
  } wordA;
  MATCH_READ_FROM_BUFFER_FULL(106,uint32 ,wordA,wordA.u32,5);
  MATCH_BITS_RANGE_MAX(101,wordA.channel_id,63);
  MATCH_BITS_EQUAL(102,wordA.module_id,module_id);
  MATCH_BITS_EQUAL(104,wordA.unnamed_29_29,0);
  MATCH_BITS_EQUAL(105,wordA.unnamed_30_31,3);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,AIDA_ADC::__match,uint32 module_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for AIDA_MODULE.
 *
 * Do not edit - automatically generated.
 */

// AIDA_MODULE(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_src_t>
bool AIDA_MODULE::__match(__data_src_t &__buffer,uint32 module_id)
{
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
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    MATCH_DECL(39,__match_no,1,AIDA_INFO,i,/*module_id*/module_id/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(40,__match_no,2,AIDA_ADC,d,/*module_id*/module_id/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    if (!__match_no) break;
    return true;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,AIDA_MODULE::__match,uint32 module_id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for AIDA.
 *
 * Do not edit - automatically generated.
 */

// AIDA()
template<typename __data_src_t>
bool AIDA::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA8 module[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 channel[13000] NO_INDEX_LIST);
  // MEMBER(DATA8 info[13000] NO_INDEX_LIST);
  // MEMBER(DATA16 adc[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_low[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_med[13000] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_high[13000] NO_INDEX_LIST);
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
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    MATCH_DECL(17,__match_no,1,AIDA_MODULE,mod[0],/*module_id*/0/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(18,__match_no,2,AIDA_MODULE,mod[1],/*module_id*/1/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(19,__match_no,3,AIDA_MODULE,mod[2],/*module_id*/2/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(20,__match_no,4,AIDA_MODULE,mod[3],/*module_id*/3/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(21,__match_no,5,AIDA_MODULE,mod[4],/*module_id*/4/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(22,__match_no,6,AIDA_MODULE,mod[5],/*module_id*/5/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(23,__match_no,7,AIDA_MODULE,mod[6],/*module_id*/6/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(24,__match_no,8,AIDA_MODULE,mod[7],/*module_id*/7/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(25,__match_no,9,AIDA_MODULE,mod[8],/*module_id*/8/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(26,__match_no,10,AIDA_MODULE,mod[9],/*module_id*/9/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(27,__match_no,11,AIDA_MODULE,mod[10],/*module_id*/10/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    MATCH_DECL(28,__match_no,12,AIDA_MODULE,mod[11],/*module_id*/11/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
    if (!__match_no) break;
    return true;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,AIDA::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// DUMMY()
template<typename __data_src_t>
bool DUMMY::__match(__data_src_t &__buffer)
{
  // UINT32 no NOENCODE;
  uint32  no;
  MATCH_READ_FROM_BUFFER(360,uint32 ,no,7);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,DUMMY::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for EXT_AIDA.
 *
 * Do not edit - automatically generated.
 */


/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for EXT_FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */


/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for EXT_FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */


/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for EXT_GERMANIUM.
 *
 * Do not edit - automatically generated.
 */


/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FATIMA_QDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_QDC()
template<typename __data_src_t>
bool FATIMA_QDC::__match(__data_src_t &__buffer)
{
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FATIMA_QDC::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FATIMA_SCALER.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_SCALER()
template<typename __data_src_t>
bool FATIMA_SCALER::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[16] ZERO_SUPPRESS_LIST);
  // UINT32 header NOENCODE
  // {
    //  0_31: h = CHECK(0x7a001000);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 h : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 h : 32; // 0..31
#endif
    };
    uint32  u32;
  } header;
  MATCH_READ_FROM_BUFFER_FULL(159,uint32 ,header,header.u32,11);
  MATCH_BITS_EQUAL(157,header.h,0x7a001000);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FATIMA_SCALER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TAMEX()
template<typename __data_src_t>
bool FATIMA_TAMEX::__match(__data_src_t &__buffer)
{
  // select several

    // dummy = DUMMY();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    MATCH_DECL(144,__match_no,1,DUMMY,dummy);
    if (!__match_no) break;
    return true;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FATIMA_TAMEX::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FATIMA_TDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TDC()
template<typename __data_src_t>
bool FATIMA_TDC::__match(__data_src_t &__buffer)
{
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FATIMA_TDC::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_VME()
template<typename __data_src_t>
bool FATIMA_VME::__match(__data_src_t &__buffer)
{
  // select optional

    // scaler = FATIMA_SCALER();
  do
  {
    if (__buffer.empty()) goto no_match_2;
    int __match_no = 0;
    MATCH_DECL(131,__match_no,1,FATIMA_SCALER,scaler);
    if (!__match_no) goto no_match_2;
    return true;
  }
  while (0);
    no_match_2:;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FATIMA_VME::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS()
template<typename __data_src_t>
bool FRS::__match(__data_src_t &__buffer)
{
  // select several

    // dummy = DUMMY();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    MATCH_DECL(189,__match_no,1,DUMMY,dummy);
    if (!__match_no) break;
    return true;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FRS::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FRS_FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS_FRS()
template<typename __data_src_t>
bool FRS_FRS::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  // UINT32 no NOENCODE;
  uint32  no;
  MATCH_READ_FROM_BUFFER(215,uint32 ,no,14);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FRS_FRS::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for FRS_MAIN.
 *
 * Do not edit - automatically generated.
 */

// FRS_MAIN()
template<typename __data_src_t>
bool FRS_MAIN::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  // UINT32 no NOENCODE;
  uint32  no;
  MATCH_READ_FROM_BUFFER(196,uint32 ,no,18);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,FRS_MAIN::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
template<typename __data_src_t>
bool TIMESTAMP_WHITERABBIT::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA12 subsystem_id);
  // MEMBER(DATA16 t1);
  // MEMBER(DATA16 t2);
  // MEMBER(DATA16 t3);
  // MEMBER(DATA16 t4);
  // UINT32 header NOENCODE
  // {
    //  0_11: id = MATCH(id);
    // 12_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 12; // 0..11
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 error_bit : 1; // 16
      uint32 unnamed_17_31 : 15; // 17..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_17_31 : 15; // 17..31
      uint32 error_bit : 1; // 16
      uint32 unnamed_12_15 : 4; // 12..15
      uint32 id : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  MATCH_READ_FROM_BUFFER_FULL(277,uint32 ,header,header.u32,24);
  MATCH_BITS_EQUAL(272,header.id,id);
  MATCH_BITS_EQUAL(273,header.unnamed_12_15,0);
  MATCH_BITS_EQUAL(275,header.unnamed_17_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TIMESTAMP_WHITERABBIT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TIMESTAMP_WHITERABBIT_EXTENDED.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT_EXTENDED(id)
template<typename __data_src_t>
bool TIMESTAMP_WHITERABBIT_EXTENDED::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA16 subsystem_id);
  // MEMBER(DATA16 t1);
  // MEMBER(DATA16 t2);
  // MEMBER(DATA16 t3);
  // MEMBER(DATA16 t4);
  // UINT32 header NOENCODE
  // {
    //  0_12: id = MATCH(id);
    // 13_15: 0;
    //    16: error_bit;
    // 17_31: 0;
    // ENCODE(subsystem_id,(value=id));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 id : 13; // 0..12
      uint32 unnamed_13_15 : 3; // 13..15
      uint32 error_bit : 1; // 16
      uint32 unnamed_17_31 : 15; // 17..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_17_31 : 15; // 17..31
      uint32 error_bit : 1; // 16
      uint32 unnamed_13_15 : 3; // 13..15
      uint32 id : 13; // 0..12
#endif
    };
    uint32  u32;
  } header;
  MATCH_READ_FROM_BUFFER_FULL(314,uint32 ,header,header.u32,30);
  MATCH_BITS_EQUAL(309,header.id,id);
  MATCH_BITS_EQUAL(310,header.unnamed_13_15,0);
  MATCH_BITS_EQUAL(312,header.unnamed_17_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TIMESTAMP_WHITERABBIT_EXTENDED::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_src_t>
bool TRLOII_TPAT::__match(__data_src_t &__buffer,uint32 id)
{
  // MEMBER(DATA32 n);
  // MEMBER(DATA32 tpat[170] NO_INDEX_LIST);
  // MEMBER(DATA8 trig[170] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_lo[170] NO_INDEX_LIST);
  // MEMBER(DATA32 ts_hi[170] NO_INDEX_LIST);
  // UINT32 header NOENCODE
  // {
    //  0_11: uint32_num;
    // 12_23: event_num;
    // 24_31: id = MATCH(id);
    // ENCODE(n,(value=(uint32_num / 3)));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 uint32_num : 12; // 0..11
      uint32 event_num : 12; // 12..23
      uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 id : 8; // 24..31
      uint32 event_num : 12; // 12..23
      uint32 uint32_num : 12; // 0..11
#endif
    };
    uint32  u32;
  } header;
  MATCH_READ_FROM_BUFFER_FULL(240,uint32 ,header,header.u32,35);
  MATCH_BITS_EQUAL(238,header.id,id);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TRLOII_TPAT::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
template<typename __data_src_t>
bool WR_MULTI::__match(__data_src_t &__buffer)
{
  // MEMBER(DATA32 time_hi);
  // MEMBER(DATA32 time_lo);
  // UINT32 hi NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_hi,(value=time));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 time : 32; // 0..31
#endif
    };
    uint32  u32;
  } hi;
  MATCH_READ_FROM_BUFFER_FULL(345,uint32 ,hi,hi.u32,38);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,WR_MULTI::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for aida_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(aida_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for fatima_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_tamex_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for fatima_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_vme_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_frs_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_frs_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_main_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_subev1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev1)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_subev4.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev4)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_subev6.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev6)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpat_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for germanium_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(germanium_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for plastic_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(plastic_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
