/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for AIDA_INFO.
 *
 * Do not edit - automatically generated.
 */

// AIDA_INFO(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_src_t>
void AIDA_INFO::__unpack(__data_src_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                               ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                               ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                               ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                               ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                               ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                               ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high)
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
  READ_FROM_BUFFER_FULL(54,uint32 ,wordA,wordA.u32,0);
  CHECK_BITS_RANGE(51,wordA.info_code,2,15);
  CHECK_BITS_EQUAL(52,wordA.module_id,module_id);
  CHECK_BITS_EQUAL(53,wordA.unnamed_30_31,2);
  // UINT32 wordB NOENCODE
  // {
    //  0_27: info_time;
    // 28_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 info_time : 28; // 0..27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 info_time : 28; // 0..27
#endif
    };
    uint32  u32;
  } wordB;
  READ_FROM_BUFFER_FULL(60,uint32 ,wordB,wordB.u32,1);
  CHECK_BITS_EQUAL(59,wordB.unnamed_28_31,0);
  // ENCODE(module APPEND_LIST,(value=static_cast<uint8_t>(module_id)));

  {
    typedef __typeof__(*(&(module))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = module.append_item(62);
    __item.value = static_cast<uint8_t>(module_id);
  }
  // ENCODE(info APPEND_LIST,(value=wordA.info_code));

  {
    typedef __typeof__(*(&(info))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = info.append_item(63);
    __item.value = wordA.info_code;
  }
  // ENCODE(ts_low APPEND_LIST,(value=wordB.info_time));

  {
    typedef __typeof__(*(&(ts_low))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts_low.append_item(64);
    __item.value = wordB.info_time;
  }
  // ENCODE(channel APPEND_LIST,(value=255));

  {
    typedef __typeof__(*(&(channel))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = channel.append_item(66);
    __item.value = 255;
  }
  // if((((wordA.info_code == 2) || (wordA.info_code == 4)) || (wordA.info_code == 7)))

  if ((((wordA.info_code == 2) || (wordA.info_code == 4)) || (wordA.info_code == 7)))
  {
    // ENCODE(ts_med APPEND_LIST,(value=wordA.info_field));

    {
      typedef __typeof__(*(&(ts_med))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_med.append_item(71);
      __item.value = wordA.info_field;
    }
    // ENCODE(ts_high APPEND_LIST,(value=0));

    {
      typedef __typeof__(*(&(ts_high))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_high.append_item(72);
      __item.value = 0;
    }
    // ENCODE(adc APPEND_LIST,(value=0));

    {
      typedef __typeof__(*(&(adc))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = adc.append_item(73);
      __item.value = 0;
    }
  }
  // if(((wordA.info_code == 5) || (wordA.info_code == 8)))

  if (((wordA.info_code == 5) || (wordA.info_code == 8)))
  {
    // ENCODE(ts_high APPEND_LIST,(value=wordA.info_field));

    {
      typedef __typeof__(*(&(ts_high))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_high.append_item(79);
      __item.value = wordA.info_field;
    }
    // ENCODE(ts_med APPEND_LIST,(value=0));

    {
      typedef __typeof__(*(&(ts_med))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_med.append_item(80);
      __item.value = 0;
    }
    // ENCODE(adc APPEND_LIST,(value=0));

    {
      typedef __typeof__(*(&(adc))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = adc.append_item(81);
      __item.value = 0;
    }
  }
  // if((wordA.info_code == 6))

  if ((wordA.info_code == 6))
  {
    // ENCODE(adc APPEND_LIST,(value=0));

    {
      typedef __typeof__(*(&(adc))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = adc.append_item(87);
      __item.value = 0;
    }
    // ENCODE(ts_med APPEND_LIST,(value=wordA.info_field));

    {
      typedef __typeof__(*(&(ts_med))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_med.append_item(88);
      __item.value = wordA.info_field;
    }
    // ENCODE(ts_high APPEND_LIST,(value=0));

    {
      typedef __typeof__(*(&(ts_high))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_high.append_item(89);
      __item.value = 0;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,AIDA_INFO::__unpack,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                                    ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                                    ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                                    ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                                    ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                                    ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                                    ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for AIDA_ADC.
 *
 * Do not edit - automatically generated.
 */

// AIDA_ADC(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_src_t>
void AIDA_ADC::__unpack(__data_src_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                              ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                              ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                              ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                              ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                              ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                              ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high)
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
  READ_FROM_BUFFER_FULL(106,uint32 ,wordA,wordA.u32,3);
  CHECK_BITS_RANGE_MAX(101,wordA.channel_id,63);
  CHECK_BITS_EQUAL(102,wordA.module_id,module_id);
  CHECK_BITS_EQUAL(104,wordA.unnamed_29_29,0);
  CHECK_BITS_EQUAL(105,wordA.unnamed_30_31,3);
  // UINT32 wordB NOENCODE
  // {
    //  0_27: ts;
    // 28_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ts : 28; // 0..27
      uint32 unnamed_28_31 : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_28_31 : 4; // 28..31
      uint32 ts : 28; // 0..27
#endif
    };
    uint32  u32;
  } wordB;
  READ_FROM_BUFFER_FULL(112,uint32 ,wordB,wordB.u32,4);
  CHECK_BITS_EQUAL(111,wordB.unnamed_28_31,0);
  // ENCODE(module APPEND_LIST,(value=static_cast<uint8_t>(module_id)));

  {
    typedef __typeof__(*(&(module))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = module.append_item(114);
    __item.value = static_cast<uint8_t>(module_id);
  }
  // ENCODE(adc APPEND_LIST,(value=wordA.adc_value));

  {
    typedef __typeof__(*(&(adc))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = adc.append_item(115);
    __item.value = wordA.adc_value;
  }
  // ENCODE(channel APPEND_LIST,(value=wordA.channel_id));

  {
    typedef __typeof__(*(&(channel))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = channel.append_item(116);
    __item.value = wordA.channel_id;
  }
  // ENCODE(ts_low APPEND_LIST,(value=wordB.ts));

  {
    typedef __typeof__(*(&(ts_low))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts_low.append_item(117);
    __item.value = wordB.ts;
  }
  // ENCODE(ts_med APPEND_LIST,(value=0));

  {
    typedef __typeof__(*(&(ts_med))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts_med.append_item(118);
    __item.value = 0;
  }
  // ENCODE(ts_high APPEND_LIST,(value=0));

  {
    typedef __typeof__(*(&(ts_high))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = ts_high.append_item(119);
    __item.value = 0;
  }
  // ENCODE(info APPEND_LIST,(value=255));

  {
    typedef __typeof__(*(&(info))) __array_t;
    typedef typename __array_t::item_t __item_t;
    __item_t &__item = info.append_item(121);
    __item.value = 255;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,AIDA_ADC::__unpack,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                                   ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                                   ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                                   ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                                   ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                                   ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                                   ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for AIDA_MODULE.
 *
 * Do not edit - automatically generated.
 */

// AIDA_MODULE(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_src_t>
void AIDA_MODULE::__unpack(__data_src_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                                 ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                                 ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                                 ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                                 ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                                 ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                                 ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high)
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
    // optimized match 1: AIDA_INFO i: (s32) => (0xc0000000,0x80000000)
    // optimized match 2: AIDA_ADC d: (s32) => (0xe0000000,0xc0000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(41,uint32,__match_peek);
    // differ = 40000000 : 30
    uint32 __match_index = 0 | /* 30,30 */ ((__match_peek >> 30) & 0x00000001);
    static const sint8 __match_index_array[2] = { 1, 2, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(39,spurious_match_abort_loop_0,AIDA_INFO,/*module_id*/module_id/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
        UNPACK_DECL(39,AIDA_INFO,i,/*module_id*/module_id,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(40,spurious_match_abort_loop_0,AIDA_ADC,/*module_id*/module_id/*,module:member*//*,channel:member*//*,info:member*//*,adc:member*//*,ts_low:member*//*,ts_med:member*//*,ts_high:member*/);
        UNPACK_DECL(40,AIDA_ADC,d,/*module_id*/module_id,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
    }
  }
  spurious_match_abort_loop_0:;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,AIDA_MODULE::__unpack,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
                                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &channel
                                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &info
                                                      ,raw_list_ii_zero_suppress<DATA16,DATA16,13000> &adc
                                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_low
                                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_med
                                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,13000> &ts_high);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for AIDA.
 *
 * Do not edit - automatically generated.
 */

// AIDA()
template<typename __data_src_t>
void AIDA::__unpack(__data_src_t &__buffer)
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
    // optimized match 1: AIDA_MODULE mod[0]: could not get bits
    __buffer.peeking();
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
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(17,AIDA_MODULE,mod[0],/*module_id*/0,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 2:
        UNPACK_DECL(18,AIDA_MODULE,mod[1],/*module_id*/1,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 3:
        UNPACK_DECL(19,AIDA_MODULE,mod[2],/*module_id*/2,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 4:
        UNPACK_DECL(20,AIDA_MODULE,mod[3],/*module_id*/3,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 5:
        UNPACK_DECL(21,AIDA_MODULE,mod[4],/*module_id*/4,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 6:
        UNPACK_DECL(22,AIDA_MODULE,mod[5],/*module_id*/5,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 7:
        UNPACK_DECL(23,AIDA_MODULE,mod[6],/*module_id*/6,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 8:
        UNPACK_DECL(24,AIDA_MODULE,mod[7],/*module_id*/7,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 9:
        UNPACK_DECL(25,AIDA_MODULE,mod[8],/*module_id*/8,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 10:
        UNPACK_DECL(26,AIDA_MODULE,mod[9],/*module_id*/9,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 11:
        UNPACK_DECL(27,AIDA_MODULE,mod[10],/*module_id*/10,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
      case 12:
        UNPACK_DECL(28,AIDA_MODULE,mod[11],/*module_id*/11,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,AIDA::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// DUMMY()
template<typename __data_src_t>
void DUMMY::__unpack(__data_src_t &__buffer)
{
  // UINT32 no NOENCODE;
  uint32  no;READ_FROM_BUFFER(360,uint32 ,no,6);
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EXT_AIDA.
 *
 * Do not edit - automatically generated.
 */


/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EXT_FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */


/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EXT_FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */


/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EXT_GERMANIUM.
 *
 * Do not edit - automatically generated.
 */


/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FATIMA_QDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_QDC()
template<typename __data_src_t>
void FATIMA_QDC::__unpack(__data_src_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_QDC::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FATIMA_SCALER.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_SCALER()
template<typename __data_src_t>
void FATIMA_SCALER::__unpack(__data_src_t &__buffer)
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
  READ_FROM_BUFFER_FULL(159,uint32 ,header,header.u32,8);
  CHECK_BITS_EQUAL(157,header.h,0x7a001000);
  // list(0<=index<16)

  for (uint32 index = 0; index < (uint32) (16); ++index)
  {
    // UINT32 ch_data NOENCODE;
    uint32  ch_data;READ_FROM_BUFFER(163,uint32 ,ch_data,9);
    // ENCODE(scalers[index],(value=ch_data));

    {
      typedef __typeof__(*(&(scalers))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = scalers.insert_index(164,index);
      __item.value = ch_data;
    }
  }
  // UINT32 trailer NOENCODE
  // {
    //  0_31: t = CHECK(0x7c000000);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 t : 32; // 0..31
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(170,uint32 ,trailer,trailer.u32,10);
  CHECK_BITS_EQUAL(169,trailer.t,0x7c000000);
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_SCALER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TAMEX()
template<typename __data_src_t>
void FATIMA_TAMEX::__unpack(__data_src_t &__buffer)
{
  // select several

    // dummy = DUMMY();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: DUMMY dummy: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(145,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(144,spurious_match_abort_loop_2,DUMMY);
        UNPACK_DECL(144,DUMMY,dummy);
        break;
    }
  }
  spurious_match_abort_loop_2:;
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_TAMEX::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FATIMA_TDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TDC()
template<typename __data_src_t>
void FATIMA_TDC::__unpack(__data_src_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_TDC::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_VME()
template<typename __data_src_t>
void FATIMA_VME::__unpack(__data_src_t &__buffer)
{
  // select optional

    // scaler = FATIMA_SCALER();
  do
  {
    if (__buffer.empty()) goto no_match_1;
    int __match_no = 0;
    // optimized match 1: FATIMA_SCALER scaler: (s32) => (0xffffffff,0x7a001000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(132,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) goto no_match_1;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(131,spurious_match_abort_loop_3,FATIMA_SCALER);
        UNPACK_DECL(131,FATIMA_SCALER,scaler);
        break;
    }
  }
  while (0);
  spurious_match_abort_loop_3:;
    no_match_1:;
  // select several

    // dummy = DUMMY();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: DUMMY dummy: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(136,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(135,spurious_match_abort_loop_4,DUMMY);
        UNPACK_DECL(135,DUMMY,dummy);
        break;
    }
  }
  spurious_match_abort_loop_4:;
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_VME::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS()
template<typename __data_src_t>
void FRS::__unpack(__data_src_t &__buffer)
{
  // select several

    // dummy = DUMMY();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: DUMMY dummy: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(190,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(189,spurious_match_abort_loop_5,DUMMY);
        UNPACK_DECL(189,DUMMY,dummy);
        break;
    }
  }
  spurious_match_abort_loop_5:;
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FRS_FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS_FRS()
template<typename __data_src_t>
void FRS_FRS::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  // UINT32 no NOENCODE;
  uint32  no;READ_FROM_BUFFER(215,uint32 ,no,12);
  // if(((no & 0xffff0000) == 0x04400000))

  if (((no & 0xffff0000) == 0x04400000))
  {
    // list(0<=index<32)

    for (uint32 index = 0; index < (uint32) (32); ++index)
    {
      // UINT32 ch_data NOENCODE;
      uint32  ch_data;READ_FROM_BUFFER(221,uint32 ,ch_data,13);
      // ENCODE(scalers[index],(value=ch_data));

      {
        typedef __typeof__(*(&(scalers))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = scalers.insert_index(222,index);
        __item.value = ch_data;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS_FRS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FRS_MAIN.
 *
 * Do not edit - automatically generated.
 */

// FRS_MAIN()
template<typename __data_src_t>
void FRS_MAIN::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  // UINT32 no NOENCODE;
  uint32  no;READ_FROM_BUFFER(196,uint32 ,no,15);
  // if((no == 0xbabababa))

  if ((no == 0xbabababa))
  {
    // UINT32 sc NOENCODE;
    uint32  sc;READ_FROM_BUFFER(200,uint32 ,sc,16);
    // if(((sc & 0xffff0000) == 0x0c800000))

    if (((sc & 0xffff0000) == 0x0c800000))
    {
      // list(0<=index<32)

      for (uint32 index = 0; index < (uint32) (32); ++index)
      {
        // UINT32 ch_data NOENCODE;
        uint32  ch_data;READ_FROM_BUFFER(205,uint32 ,ch_data,17);
        // ENCODE(scalers[index],(value=ch_data));

        {
          typedef __typeof__(*(&(scalers))) __array_t;
          typedef typename __array_t::item_t __item_t;
          __item_t &__item = scalers.insert_index(206,index);
          __item.value = ch_data;
        }
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS_MAIN::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
template<typename __data_src_t>
void TIMESTAMP_WHITERABBIT::__unpack(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(277,uint32 ,header,header.u32,19);
  CHECK_BITS_EQUAL(272,header.id,id);
  CHECK_BITS_EQUAL(273,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(275,header.unnamed_17_31,0);
  {
    subsystem_id.value = header.id;
  }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t1 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t1 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d1;
  READ_FROM_BUFFER_FULL(282,uint32 ,d1,d1.u32,20);
  CHECK_BITS_EQUAL(280,d1.unnamed_16_31,0x3e1);
  {
    t1.value = d1.t1;
  }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t2 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t2 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d2;
  READ_FROM_BUFFER_FULL(287,uint32 ,d2,d2.u32,21);
  CHECK_BITS_EQUAL(285,d2.unnamed_16_31,0x4e1);
  {
    t2.value = d2.t2;
  }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t3 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t3 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d3;
  READ_FROM_BUFFER_FULL(292,uint32 ,d3,d3.u32,22);
  CHECK_BITS_EQUAL(290,d3.unnamed_16_31,0x5e1);
  {
    t3.value = d3.t3;
  }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t4 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t4 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d4;
  READ_FROM_BUFFER_FULL(297,uint32 ,d4,d4.u32,23);
  CHECK_BITS_EQUAL(295,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TIMESTAMP_WHITERABBIT_EXTENDED.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT_EXTENDED(id)
template<typename __data_src_t>
void TIMESTAMP_WHITERABBIT_EXTENDED::__unpack(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(314,uint32 ,header,header.u32,25);
  CHECK_BITS_EQUAL(309,header.id,id);
  CHECK_BITS_EQUAL(310,header.unnamed_13_15,0);
  CHECK_BITS_EQUAL(312,header.unnamed_17_31,0);
  {
    subsystem_id.value = header.id;
  }
  // UINT32 d1 NOENCODE
  // {
    //  0_15: t1;
    // 16_31: 0x3e1;
    // ENCODE(t1,(value=t1));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t1 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t1 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d1;
  READ_FROM_BUFFER_FULL(319,uint32 ,d1,d1.u32,26);
  CHECK_BITS_EQUAL(317,d1.unnamed_16_31,0x3e1);
  {
    t1.value = d1.t1;
  }
  // UINT32 d2 NOENCODE
  // {
    //  0_15: t2;
    // 16_31: 0x4e1;
    // ENCODE(t2,(value=t2));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t2 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t2 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d2;
  READ_FROM_BUFFER_FULL(324,uint32 ,d2,d2.u32,27);
  CHECK_BITS_EQUAL(322,d2.unnamed_16_31,0x4e1);
  {
    t2.value = d2.t2;
  }
  // UINT32 d3 NOENCODE
  // {
    //  0_15: t3;
    // 16_31: 0x5e1;
    // ENCODE(t3,(value=t3));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t3 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t3 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d3;
  READ_FROM_BUFFER_FULL(329,uint32 ,d3,d3.u32,28);
  CHECK_BITS_EQUAL(327,d3.unnamed_16_31,0x5e1);
  {
    t3.value = d3.t3;
  }
  // UINT32 d4 NOENCODE
  // {
    //  0_15: t4;
    // 16_31: 0x6e1;
    // ENCODE(t4,(value=t4));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 t4 : 16; // 0..15
      uint32 unnamed_16_31 : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_16_31 : 16; // 16..31
      uint32 t4 : 16; // 0..15
#endif
    };
    uint32  u32;
  } d4;
  READ_FROM_BUFFER_FULL(334,uint32 ,d4,d4.u32,29);
  CHECK_BITS_EQUAL(332,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT_EXTENDED::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_src_t>
void TRLOII_TPAT::__unpack(__data_src_t &__buffer,uint32 id)
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
  READ_FROM_BUFFER_FULL(240,uint32 ,header,header.u32,31);
  CHECK_BITS_EQUAL(238,header.id,id);
  {
    n.value = (header.uint32_num / 3);
  }
  // list(0<=index<(header.uint32_num / 3))

  for (uint32 index = 0; index < (uint32) ((header.uint32_num / 3)); ++index)
  {
    // UINT32 time_lo NOENCODE
    // {
      //  0_31: t;
      // ENCODE(ts_lo APPEND_LIST,(value=t));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 t : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 t : 32; // 0..31
#endif
      };
      uint32  u32;
    } time_lo;
    READ_FROM_BUFFER_FULL(246,uint32 ,time_lo,time_lo.u32,32);
    {
      typedef __typeof__(*(&(ts_lo))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_lo.append_item(245);
      __item.value = time_lo.t;
    }
    // UINT32 time_hi NOENCODE
    // {
      //  0_30: t;
      //    31: overflow;
      // ENCODE(ts_hi APPEND_LIST,(value=t));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 t : 31; // 0..30
        uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 overflow : 1; // 31
        uint32 t : 31; // 0..30
#endif
      };
      uint32  u32;
    } time_hi;
    READ_FROM_BUFFER_FULL(251,uint32 ,time_hi,time_hi.u32,33);
    {
      typedef __typeof__(*(&(ts_hi))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = ts_hi.append_item(250);
      __item.value = time_hi.t;
    }
    // UINT32 trigger NOENCODE
    // {
      //  0_23: tpat;
      // 24_27: encoded;
      // 28_31: lec;
      // ENCODE(tpat APPEND_LIST,(value=tpat));
      // ENCODE(trig APPEND_LIST,(value=encoded));
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 tpat : 24; // 0..23
        uint32 encoded : 4; // 24..27
        uint32 lec : 4; // 28..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 lec : 4; // 28..31
        uint32 encoded : 4; // 24..27
        uint32 tpat : 24; // 0..23
#endif
      };
      uint32  u32;
    } trigger;
    READ_FROM_BUFFER_FULL(258,uint32 ,trigger,trigger.u32,34);
    {
      {
        typedef __typeof__(*(&(tpat))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = tpat.append_item(256);
        __item.value = trigger.tpat;
      }
      {
        typedef __typeof__(*(&(trig))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = trig.append_item(257);
        __item.value = trigger.encoded;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_TPAT::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
template<typename __data_src_t>
void WR_MULTI::__unpack(__data_src_t &__buffer)
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
  READ_FROM_BUFFER_FULL(345,uint32 ,hi,hi.u32,36);
  {
    time_hi.value = hi.time;
  }
  // UINT32 lo NOENCODE
  // {
    //  0_31: time;
    // ENCODE(time_lo,(value=time));
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
  } lo;
  READ_FROM_BUFFER_FULL(349,uint32 ,lo,lo.u32,37);
  {
    time_lo.value = lo.time;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for aida_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(aida_subev)
template<typename __data_src_t>
void aida_subev::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x700);
  UNPACK_DECL(365,TIMESTAMP_WHITERABBIT,ts,/*id*/0x700);
  // external data = EXT_AIDA();
  UNPACK_DECL(366,EXT_AIDA,data);
}
FORCE_IMPL_DATA_SRC_FCN(void,aida_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for fatima_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_tamex_subev)
template<typename __data_src_t>
void fatima_tamex_subev::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
  UNPACK_DECL(395,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1600);
  // external data = EXT_FATIMA_TAMEX();
  UNPACK_DECL(396,EXT_FATIMA_TAMEX,data);
}
FORCE_IMPL_DATA_SRC_FCN(void,fatima_tamex_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for fatima_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_vme_subev)
template<typename __data_src_t>
void fatima_vme_subev::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
  UNPACK_DECL(388,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1500);
  // external data = EXT_FATIMA_VME();
  UNPACK_DECL(390,EXT_FATIMA_VME,data);
}
FORCE_IMPL_DATA_SRC_FCN(void,fatima_vme_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_frs_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_frs_subev)
template<typename __data_src_t>
void frs_frs_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // subev = FRS_FRS();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FRS_FRS subev: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(435,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(434,FRS_FRS,subev);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_frs_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_main_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_subev)
template<typename __data_src_t>
void frs_main_subev::__unpack(__data_src_t &__buffer)
{
  // select several

    // subev = FRS_MAIN();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FRS_MAIN subev: (s32)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(411,uint32,__match_peek);
    // differ = 00000000 :
    uint32 __match_index = 0;
    static const sint8 __match_index_array[1] = { 1, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 1
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        UNPACK_DECL(410,FRS_MAIN,subev);
        break;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_main_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_subev1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev1)
template<typename __data_src_t>
void frs_subev1::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  UNPACK_DECL(401,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  // subev = FRS();
  UNPACK_DECL(402,FRS,subev);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_subev1::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_subev4.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev4)
template<typename __data_src_t>
void frs_subev4::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  UNPACK_DECL(425,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  // subev = FRS();
  UNPACK_DECL(426,FRS,subev);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_subev4::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_subev6.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev6)
template<typename __data_src_t>
void frs_subev6::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  UNPACK_DECL(440,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  // subev = FRS();
  UNPACK_DECL(441,FRS,subev);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_subev6::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpat_subev)
template<typename __data_src_t>
void frs_tpat_subev::__unpack(__data_src_t &__buffer)
{
  // dummy = DUMMY();
  UNPACK_DECL(419,DUMMY,dummy);
  // tpat = TRLOII_TPAT(id=207);
  UNPACK_DECL(420,TRLOII_TPAT,tpat,/*id*/207);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tpat_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for germanium_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(germanium_subev)
template<typename __data_src_t>
void germanium_subev::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x400);
  UNPACK_DECL(372,TIMESTAMP_WHITERABBIT,ts,/*id*/0x400);
  // external data = EXT_GERMANIUM();
  UNPACK_DECL(374,EXT_GERMANIUM,data);
}
FORCE_IMPL_DATA_SRC_FCN(void,germanium_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for plastic_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(plastic_subev)
template<typename __data_src_t>
void plastic_subev::__unpack(__data_src_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x500);
  UNPACK_DECL(381,TIMESTAMP_WHITERABBIT,ts,/*id*/0x500);
}
FORCE_IMPL_DATA_SRC_FCN(void,plastic_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
template<typename __data_src_t>
int unpack_event::__unpack_subevent(subevent_header *__header,__data_src_t &__buffer)
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
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(451,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_subcrate==0)&&(VES10_1_procid==60)),germanium);
  MATCH_SUBEVENT_DECL(453,__match_no,2,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_subcrate==0)&&(VES10_1_procid==70)),fatima_vme);
  MATCH_SUBEVENT_DECL(454,__match_no,3,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_subcrate==0)&&(VES10_1_procid==75)),fatima_tamex);
  MATCH_SUBEVENT_DECL(455,__match_no,4,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==37)&&(VES10_1_subcrate==0)&&(VES10_1_procid==90)),aida);
  MATCH_SUBEVENT_DECL(459,__match_no,5,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_subcrate==0)&&(VES10_1_procid==10)),frs_main);
  MATCH_SUBEVENT_DECL(460,__match_no,6,((VES10_1_type==36)&&(VES10_1_subtype==0xe10)&&(VES10_1_control==20)&&(VES10_1_subcrate==0)&&(VES10_1_procid==10)),frs_tpat);
  MATCH_SUBEVENT_DECL(462,__match_no,7,((VES10_1_type==12)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_subcrate==0)&&(VES10_1_procid==30)),frs_frs);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(451,germanium_subev,germanium,0);
      UNPACK_SUBEVENT_DECL(451,0,germanium_subev,germanium);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(453,fatima_vme_subev,fatima_vme,1);
      UNPACK_SUBEVENT_DECL(453,0,fatima_vme_subev,fatima_vme);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(454,fatima_tamex_subev,fatima_tamex,2);
      UNPACK_SUBEVENT_DECL(454,0,fatima_tamex_subev,fatima_tamex);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(455,aida_subev,aida,3);
      UNPACK_SUBEVENT_DECL(455,0,aida_subev,aida);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(459,frs_main_subev,frs_main,4);
      UNPACK_SUBEVENT_DECL(459,0,frs_main_subev,frs_main);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(460,frs_tpat_subev,frs_tpat,5);
      UNPACK_SUBEVENT_DECL(460,0,frs_tpat_subev,frs_tpat);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(462,frs_frs_subev,frs_frs,6);
      UNPACK_SUBEVENT_DECL(462,0,frs_frs_subev,frs_frs);
      break;
  }
  return 0;
}
FORCE_IMPL_DATA_SRC_FCN_HDR(int,unpack_event::__unpack_subevent);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
template<typename __data_src_t>
int unpack_sticky_event::__unpack_subevent(subevent_header *__header,__data_src_t &__buffer)
{
  int __match_no = 0;
  if (!__match_no) return 0;
  switch (__match_no)
  {
  }
  return 0;
}
FORCE_IMPL_DATA_SRC_FCN_HDR(int,unpack_sticky_event::__unpack_subevent);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER_DEFINES *********************************************
 *
 * Control
 *
 * Do not edit - automatically generated.
 */

#define STICKY_EVENT_IS_NONTRIVIAL  0


/** END_UNPACKER_DEFINES **********************************************/
