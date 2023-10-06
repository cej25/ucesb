/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for ADC_DATA.
 *
 * Do not edit - automatically generated.
 */

// ADC_DATA()
template<typename __data_src_t>
void ADC_DATA::__unpack(__data_src_t &__buffer)
{
  // UINT32 adc_data NOENCODE
  // {
    //  0_11: adc;
    //    12: overflow;
    //    13: underthreshold;
    // 14_15: unused;
    // 16_20: channel;
    // 21_23: unused2;
    // 24_26: 0;
    // 27_31: geo;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 adc : 12; // 0..11
      uint32 overflow : 1; // 12
      uint32 underthreshold : 1; // 13
      uint32 unused : 2; // 14..15
      uint32 channel : 5; // 16..20
      uint32 unused2 : 3; // 21..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geo : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geo : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 unused2 : 3; // 21..23
      uint32 channel : 5; // 16..20
      uint32 unused : 2; // 14..15
      uint32 underthreshold : 1; // 13
      uint32 overflow : 1; // 12
      uint32 adc : 12; // 0..11
#endif
    };
    uint32  u32;
  } adc_data;
  READ_FROM_BUFFER_FULL(176,uint32 ,adc_data,adc_data.u32,0);
  CHECK_BITS_EQUAL(174,adc_data.unnamed_24_26,0);
}
FORCE_IMPL_DATA_SRC_FCN(void,ADC_DATA::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_src_t>
void BARRIER::__unpack(__data_src_t &__buffer)
{
  // UINT32 barrier NOENCODE
  // {
    //  0_31: ba = MATCH(0xbabababa);
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ba : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 ba : 32; // 0..31
#endif
    };
    uint32  u32;
  } barrier;
  READ_FROM_BUFFER_FULL(106,uint32 ,barrier,barrier.u32,2);
  CHECK_BITS_EQUAL(105,barrier.ba,0xbabababa);
}
FORCE_IMPL_DATA_SRC_FCN(void,BARRIER::__unpack);

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
  uint32  no;READ_FROM_BUFFER(435,uint32 ,no,4);
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
 * Event unpacker for EXT_FRS.
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
 * Event unpacker for EXT_PLASTIC.
 *
 * Do not edit - automatically generated.
 */


/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for EXT_PLASTIC_TP.
 *
 * Do not edit - automatically generated.
 */


/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for SKIP.
 *
 * Do not edit - automatically generated.
 */

// SKIP(n)
template<typename __data_src_t>
void SKIP::__unpack(__data_src_t &__buffer,uint32 n)
{
  // list(0<=i<n)

  for (uint32 i = 0; i < (uint32) (n); ++i)
  {
    // UINT32 skip NOENCODE;
    uint32  skip;READ_FROM_BUFFER(442,uint32 ,skip,6);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SKIP::__unpack,uint32 n);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX4_EPOCH_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_EPOCH_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                  // time_epoch)
template<typename __data_src_t>
void TAMEX4_EPOCH_DATA::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card
                                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch)
{
  // MEMBER(DATA12 time_coarse[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_fine[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_edge[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_channel[512] NO_INDEX_LIST);
  // MEMBER(DATA32 time_epoch[512] NO_INDEX_LIST);
  // UINT32 data NOENCODE
  // {
    //  0_27: epoch;
    //    28: reserved;
    // 29_31: 3;
    // ENCODE(time_coarse APPEND_LIST,(value=0));
    // ENCODE(time_fine APPEND_LIST,(value=0));
    // ENCODE(time_edge APPEND_LIST,(value=0));
    // ENCODE(time_channel APPEND_LIST,(value=0));
    // ENCODE(time_epoch APPEND_LIST,(value=epoch));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 epoch : 28; // 0..27
      uint32 reserved : 1; // 28
      uint32 unnamed_29_31 : 3; // 29..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_29_31 : 3; // 29..31
      uint32 reserved : 1; // 28
      uint32 epoch : 28; // 0..27
#endif
    };
    uint32  u32;
  } data;
  READ_FROM_BUFFER_FULL(353,uint32 ,data,data.u32,8);
  CHECK_BITS_EQUAL(346,data.unnamed_29_31,3);
  {
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.append_item(348);
      __item.value = 0;
    }
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.append_item(349);
      __item.value = 0;
    }
    {
      typedef __typeof__(*(&(time_edge))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_edge.append_item(350);
      __item.value = 0;
    }
    {
      typedef __typeof__(*(&(time_channel))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_channel.append_item(351);
      __item.value = 0;
    }
    {
      typedef __typeof__(*(&(time_epoch))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_epoch.append_item(352);
      __item.value = data.epoch;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX4_EPOCH_DATA::__unpack,uint32 sfp,uint32 card
                                                            ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                                            ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                                            ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                                            ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                                            ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX4_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_HEADER()
template<typename __data_src_t>
void TAMEX4_HEADER::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA16 post_trig_ns[64] NO_INDEX_LIST);
  // MEMBER(DATA16 pre_trig_ns[64] NO_INDEX_LIST);
  // UINT32 trigger_window NOENCODE
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
    // ENCODE(post_trig_ns APPEND_LIST,(value=post_trig_ns));
    // ENCODE(pre_trig_ns APPEND_LIST,(value=pre_trig_ns));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 post_trig_ns : 16; // 0..15
      uint32 pre_trig_ns : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pre_trig_ns : 16; // 16..31
      uint32 post_trig_ns : 16; // 0..15
#endif
    };
    uint32  u32;
  } trigger_window;
  READ_FROM_BUFFER_FULL(297,uint32 ,trigger_window,trigger_window.u32,10);
  {
    {
      typedef __typeof__(*(&(post_trig_ns))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = post_trig_ns.append_item(295);
      __item.value = trigger_window.post_trig_ns;
    }
    {
      typedef __typeof__(*(&(pre_trig_ns))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = pre_trig_ns.append_item(296);
      __item.value = trigger_window.pre_trig_ns;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX4_HEADER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX4_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_PADDING()
template<typename __data_src_t>
void TAMEX4_PADDING::__unpack(__data_src_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 counter : 12; // 0..11
      uint32 index : 8; // 12..19
      uint32 unnamed_20_31 : 12; // 20..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_20_31 : 12; // 20..31
      uint32 index : 8; // 12..19
      uint32 counter : 12; // 0..11
#endif
    };
    uint32  u32;
  } padding;
  READ_FROM_BUFFER_FULL(307,uint32 ,padding,padding.u32,12);
  CHECK_BITS_EQUAL(306,padding.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX4_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX4_TIME_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_TIME_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                 // time_epoch)
template<typename __data_src_t>
void TAMEX4_TIME_DATA::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card
                                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch)
{
  // MEMBER(DATA12 time_coarse[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_fine[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_edge[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_channel[512] NO_INDEX_LIST);
  // MEMBER(DATA32 time_epoch[512] NO_INDEX_LIST);
  // UINT32 data NOENCODE
  // {
    //  0_10: coarse;
    //    11: is_leading;
    // 12_21: fine;
    // 22_28: channel;
    // 29_31: type = CHECK(4);
    // ENCODE(time_coarse APPEND_LIST,(value=coarse));
    // ENCODE(time_fine APPEND_LIST,(value=fine));
    // ENCODE(time_edge APPEND_LIST,(value=is_leading));
    // ENCODE(time_channel APPEND_LIST,(value=channel));
    // ENCODE(time_epoch APPEND_LIST,(value=0));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 coarse : 11; // 0..10
      uint32 is_leading : 1; // 11
      uint32 fine : 10; // 12..21
      uint32 channel : 7; // 22..28
      uint32 type : 3; // 29..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 type : 3; // 29..31
      uint32 channel : 7; // 22..28
      uint32 fine : 10; // 12..21
      uint32 is_leading : 1; // 11
      uint32 coarse : 11; // 0..10
#endif
    };
    uint32  u32;
  } data;
  READ_FROM_BUFFER_FULL(331,uint32 ,data,data.u32,14);
  CHECK_BITS_EQUAL(324,data.type,4);
  {
    {
      typedef __typeof__(*(&(time_coarse))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_coarse.append_item(326);
      __item.value = data.coarse;
    }
    {
      typedef __typeof__(*(&(time_fine))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_fine.append_item(327);
      __item.value = data.fine;
    }
    {
      typedef __typeof__(*(&(time_edge))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_edge.append_item(328);
      __item.value = data.is_leading;
    }
    {
      typedef __typeof__(*(&(time_channel))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_channel.append_item(329);
      __item.value = data.channel;
    }
    {
      typedef __typeof__(*(&(time_epoch))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = time_epoch.append_item(330);
      __item.value = 0;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX4_TIME_DATA::__unpack,uint32 sfp,uint32 card
                                                           ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                                           ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                                           ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                                           ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                                           ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX4_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_SFP(sfp,card)
template<typename __data_src_t>
void TAMEX4_SFP::__unpack(__data_src_t &__buffer,uint32 sfp,uint32 card)
{
  // MEMBER(DATA12 time_coarse[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_fine[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_edge[512] NO_INDEX_LIST);
  // MEMBER(DATA12 time_channel[512] NO_INDEX_LIST);
  // MEMBER(DATA32 time_epoch[512] NO_INDEX_LIST);
  // UINT32 indicator NOENCODE
  // {
    //  0_07: 52;
    //  8_11: trigger_type;
    // 12_15: sfp = MATCH(sfp);
    // 16_23: card = MATCH(card);
    // 24_31: 0;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_7 : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 card : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 card : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 unnamed_0_7 : 8; // 0..7
#endif
    };
    uint32  u32;
  } indicator;
  READ_FROM_BUFFER_FULL(372,uint32 ,indicator,indicator.u32,16);
  CHECK_BITS_EQUAL(367,indicator.unnamed_0_7,52);
  CHECK_BITS_EQUAL(369,indicator.sfp,sfp);
  CHECK_BITS_EQUAL(370,indicator.card,card);
  CHECK_BITS_EQUAL(371,indicator.unnamed_24_31,0);
  // MATCH_END;
  // UINT32 data_size NOENCODE
  // {
    //  0_31: bytes;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bytes : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 bytes : 32; // 0..31
#endif
    };
    uint32  u32;
  } data_size;
  READ_FROM_BUFFER_FULL(379,uint32 ,data_size,data_size.u32,17);
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 lec : 16; // 0..15
      uint32 buf_no : 1; // 16
      uint32 reserved : 3; // 17..19
      uint32 trigger_type : 4; // 20..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 trigger_type : 4; // 20..23
      uint32 reserved : 3; // 17..19
      uint32 buf_no : 1; // 16
      uint32 lec : 16; // 0..15
#endif
    };
    uint32  u32;
  } tdc_header;
  READ_FROM_BUFFER_FULL(387,uint32 ,tdc_header,tdc_header.u32,18);
  CHECK_BITS_EQUAL(386,tdc_header.unnamed_24_31,170);
  // list(0<=i<((data_size.bytes / 4) - 3))

  for (uint32 i = 0; i < (uint32) (((data_size.bytes / 4) - 3)); ++i)
  {
    // select several

      // time = TAMEX4_TIME_DATA(sfp=sfp,card=card,time_coarse=time_coarse,
                              // time_fine=time_fine,time_edge=time_edge,
                              // time_channel=time_channel,time_epoch=time_epoch);
      // epoch = TAMEX4_EPOCH_DATA(sfp=sfp,card=card,time_coarse=time_coarse,
                                // time_fine=time_fine,time_edge=time_edge,
                                // time_channel=time_channel,time_epoch=time_epoch);
    for ( ; ; )
    {
      if (__buffer.empty()) break;
      int __match_no = 0;
      // optimized match 1: TAMEX4_TIME_DATA time: (s32) => (0xe0000000,0x80000000)
      // optimized match 2: TAMEX4_EPOCH_DATA epoch: (s32) => (0xe0000000,0x60000000)
      {
      uint32 __match_peek;
      PEEK_FROM_BUFFER(393,uint32,__match_peek);
      // differ = e0000000 : 29 30 31
      uint32 __match_index = 0 | /* 29,31 */ ((__match_peek >> 29) & 0x00000007);
      static const sint8 __match_index_array[8] = { 0, 0, 0, 2, 1, 0, 0, 0, };
      __match_no = __match_index_array[__match_index];
      // last_subevent_item = 0
      }
      if (!__match_no) break;
      switch (__match_no)
      {
        case 1:
          CHECK_SPURIOUS_MATCH_DECL(391,spurious_match_abort_loop_0,TAMEX4_TIME_DATA,/*sfp*/sfp,/*card*/card/*,time_coarse:member*//*,time_fine:member*//*,time_edge:member*//*,time_channel:member*//*,time_epoch:member*/);
          UNPACK_DECL(391,TAMEX4_TIME_DATA,time,/*sfp*/sfp,/*card*/card,/*time_coarse*/time_coarse,/*time_fine*/time_fine,/*time_edge*/time_edge,/*time_channel*/time_channel,/*time_epoch*/time_epoch);
          break;
        case 2:
          CHECK_SPURIOUS_MATCH_DECL(392,spurious_match_abort_loop_0,TAMEX4_EPOCH_DATA,/*sfp*/sfp,/*card*/card/*,time_coarse:member*//*,time_fine:member*//*,time_edge:member*//*,time_channel:member*//*,time_epoch:member*/);
          UNPACK_DECL(392,TAMEX4_EPOCH_DATA,epoch,/*sfp*/sfp,/*card*/card,/*time_coarse*/time_coarse,/*time_fine*/time_fine,/*time_edge*/time_edge,/*time_channel*/time_channel,/*time_epoch*/time_epoch);
          break;
      }
    }
    spurious_match_abort_loop_0:;
  }
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bits : 24; // 0..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 bits : 24; // 0..23
#endif
    };
    uint32  u32;
  } error_bits;
  READ_FROM_BUFFER_FULL(399,uint32 ,error_bits,error_bits.u32,19);
  CHECK_BITS_EQUAL(398,error_bits.unnamed_24_31,238);
  // UINT32 trailer NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 187;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 lec : 16; // 0..15
      uint32 buf_no : 1; // 16
      uint32 reserved : 3; // 17..19
      uint32 trigger_type : 4; // 20..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 trigger_type : 4; // 20..23
      uint32 reserved : 3; // 17..19
      uint32 buf_no : 1; // 16
      uint32 lec : 16; // 0..15
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(407,uint32 ,trailer,trailer.u32,20);
  CHECK_BITS_EQUAL(406,trailer.unnamed_24_31,187);
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX4_SFP::__unpack,uint32 sfp,uint32 card);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TAMEX_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_SFP(sfp)
template<typename __data_src_t>
void TAMEX_SFP::__unpack(__data_src_t &__buffer,uint32 sfp)
{
  // select several

    // card[0] = TAMEX4_SFP(sfp=sfp,card=0);
    // card[1] = TAMEX4_SFP(sfp=sfp,card=1);
    // card[2] = TAMEX4_SFP(sfp=sfp,card=2);
    // card[3] = TAMEX4_SFP(sfp=sfp,card=3);
    // card[4] = TAMEX4_SFP(sfp=sfp,card=4);
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TAMEX4_SFP card[0]: (s32) => (0xffff00ff,0x00000034)
    // optimized match 2: TAMEX4_SFP card[1]: (s32) => (0xffff00ff,0x00010034)
    // optimized match 3: TAMEX4_SFP card[2]: (s32) => (0xffff00ff,0x00020034)
    // optimized match 4: TAMEX4_SFP card[3]: (s32) => (0xffff00ff,0x00030034)
    // optimized match 5: TAMEX4_SFP card[4]: (s32) => (0xffff00ff,0x00040034)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(431,uint32,__match_peek);
    // differ = 00070000 : 16 17 18
    uint32 __match_index = 0 | /* 16,18 */ ((__match_peek >> 16) & 0x00000007);
    static const sint8 __match_index_array[8] = { 1, 2, 3, 4, 5, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(426,spurious_match_abort_loop_1,TAMEX4_SFP,/*sfp*/sfp,/*card*/0);
        UNPACK_DECL(426,TAMEX4_SFP,card[0],/*sfp*/sfp,/*card*/0);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(427,spurious_match_abort_loop_1,TAMEX4_SFP,/*sfp*/sfp,/*card*/1);
        UNPACK_DECL(427,TAMEX4_SFP,card[1],/*sfp*/sfp,/*card*/1);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(428,spurious_match_abort_loop_1,TAMEX4_SFP,/*sfp*/sfp,/*card*/2);
        UNPACK_DECL(428,TAMEX4_SFP,card[2],/*sfp*/sfp,/*card*/2);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(429,spurious_match_abort_loop_1,TAMEX4_SFP,/*sfp*/sfp,/*card*/3);
        UNPACK_DECL(429,TAMEX4_SFP,card[3],/*sfp*/sfp,/*card*/3);
        break;
      case 5:
        CHECK_SPURIOUS_MATCH_DECL(430,spurious_match_abort_loop_1,TAMEX4_SFP,/*sfp*/sfp,/*card*/4);
        UNPACK_DECL(430,TAMEX4_SFP,card[4],/*sfp*/sfp,/*card*/4);
        break;
    }
  }
  spurious_match_abort_loop_1:;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX_SFP::__unpack,uint32 sfp);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TDC_DATA.
 *
 * Do not edit - automatically generated.
 */

// TDC_DATA(data,channel,leadOrTrail)
template<typename __data_src_t>
void TDC_DATA::__unpack(__data_src_t &__buffer,raw_array_multi_zero_suppress<DATA24,DATA24,32,32> &data
                                              ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &channel
                                              ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &leadOrTrail)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA8 channel[32] NO_INDEX_LIST);
  // MEMBER(DATA8 leadOrTrail[32] NO_INDEX_LIST);
  // MEMBER(DATA8 multihit);
  // UINT32 tdc_data NOENCODE
  // {
    //  0_20: value;
    // 21_25: chn;
    //    26: lot;
    // 27_31: 0;
    // ENCODE(data[chn],(value=value));
    // ENCODE(channel APPEND_LIST,(value=chn));
    // ENCODE(leadOrTrail APPEND_LIST,(value=lot));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 value : 21; // 0..20
      uint32 chn : 5; // 21..25
      uint32 lot : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 lot : 1; // 26
      uint32 chn : 5; // 21..25
      uint32 value : 21; // 0..20
#endif
    };
    uint32  u32;
  } tdc_data;
  READ_FROM_BUFFER_FULL(125,uint32 ,tdc_data,tdc_data.u32,22);
  CHECK_BITS_EQUAL(120,tdc_data.unnamed_27_31,0);
  {
    {
      typedef __typeof__(*(&(data))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = data.insert_index(122,tdc_data.chn);
      __item.value = tdc_data.value;
    }
    {
      typedef __typeof__(*(&(channel))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = channel.append_item(123);
      __item.value = tdc_data.chn;
    }
    {
      typedef __typeof__(*(&(leadOrTrail))) __array_t;
      typedef typename __array_t::item_t __item_t;
      __item_t &__item = leadOrTrail.append_item(124);
      __item.value = tdc_data.lot;
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TDC_DATA::__unpack,raw_array_multi_zero_suppress<DATA24,DATA24,32,32> &data
                                                   ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &channel
                                                   ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &leadOrTrail);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// TDC_ERROR()
template<typename __data_src_t>
void TDC_ERROR::__unpack(__data_src_t &__buffer)
{
  // UINT32 tdc_err NOENCODE
  // {
    //  0_14: error_flags;
    // 15_23: unused1;
    // 24_25: tdc;
    //    26: unused2;
    // 27_31: 4;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 error_flags : 15; // 0..14
      uint32 unused1 : 9; // 15..23
      uint32 tdc : 2; // 24..25
      uint32 unused2 : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 unused2 : 1; // 26
      uint32 tdc : 2; // 24..25
      uint32 unused1 : 9; // 15..23
      uint32 error_flags : 15; // 0..14
#endif
    };
    uint32  u32;
  } tdc_err;
  READ_FROM_BUFFER_FULL(149,uint32 ,tdc_err,tdc_err.u32,24);
  CHECK_BITS_EQUAL(148,tdc_err.unnamed_27_31,4);
}
FORCE_IMPL_DATA_SRC_FCN(void,TDC_ERROR::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TDC_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TDC_HEADER()
template<typename __data_src_t>
void TDC_HEADER::__unpack(__data_src_t &__buffer)
{
  // UINT32 tdc_header NOENCODE
  // {
    //  0_11: bunch_id;
    // 12_23: event_id;
    // 24_25: tdc;
    //    26: unused;
    // 27_31: 1;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 bunch_id : 12; // 0..11
      uint32 event_id : 12; // 12..23
      uint32 tdc : 2; // 24..25
      uint32 unused : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 unused : 1; // 26
      uint32 tdc : 2; // 24..25
      uint32 event_id : 12; // 12..23
      uint32 bunch_id : 12; // 0..11
#endif
    };
    uint32  u32;
  } tdc_header;
  READ_FROM_BUFFER_FULL(137,uint32 ,tdc_header,tdc_header.u32,26);
  CHECK_BITS_EQUAL(136,tdc_header.unnamed_27_31,1);
}
FORCE_IMPL_DATA_SRC_FCN(void,TDC_HEADER::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for TDC_TRAILER.
 *
 * Do not edit - automatically generated.
 */

// TDC_TRAILER()
template<typename __data_src_t>
void TDC_TRAILER::__unpack(__data_src_t &__buffer)
{
  // UINT32 tdc_trailer NOENCODE
  // {
    //  0_11: word_count;
    // 12_23: event_id;
    // 24_25: tdc;
    //    26: unused;
    // 27_31: 3;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 word_count : 12; // 0..11
      uint32 event_id : 12; // 12..23
      uint32 tdc : 2; // 24..25
      uint32 unused : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 unused : 1; // 26
      uint32 tdc : 2; // 24..25
      uint32 event_id : 12; // 12..23
      uint32 word_count : 12; // 0..11
#endif
    };
    uint32  u32;
  } tdc_trailer;
  READ_FROM_BUFFER_FULL(161,uint32 ,tdc_trailer,tdc_trailer.u32,28);
  CHECK_BITS_EQUAL(160,tdc_trailer.unnamed_27_31,3);
}
FORCE_IMPL_DATA_SRC_FCN(void,TDC_TRAILER::__unpack);

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
  READ_FROM_BUFFER_FULL(24,uint32 ,header,header.u32,30);
  CHECK_BITS_EQUAL(19,header.id,id);
  CHECK_BITS_EQUAL(20,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(22,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(29,uint32 ,d1,d1.u32,31);
  CHECK_BITS_EQUAL(27,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(34,uint32 ,d2,d2.u32,32);
  CHECK_BITS_EQUAL(32,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(39,uint32 ,d3,d3.u32,33);
  CHECK_BITS_EQUAL(37,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(44,uint32 ,d4,d4.u32,34);
  CHECK_BITS_EQUAL(42,d4.unnamed_16_31,0x6e1);
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
  READ_FROM_BUFFER_FULL(61,uint32 ,header,header.u32,36);
  CHECK_BITS_EQUAL(56,header.id,id);
  CHECK_BITS_EQUAL(57,header.unnamed_13_15,0);
  CHECK_BITS_EQUAL(59,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(66,uint32 ,d1,d1.u32,37);
  CHECK_BITS_EQUAL(64,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(71,uint32 ,d2,d2.u32,38);
  CHECK_BITS_EQUAL(69,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(76,uint32 ,d3,d3.u32,39);
  CHECK_BITS_EQUAL(74,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(81,uint32 ,d4,d4.u32,40);
  CHECK_BITS_EQUAL(79,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT_EXTENDED::__unpack,uint32 id);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V1290_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_FRS()
template<typename __data_src_t>
void VME_CAEN_V1290_FRS::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA8 channel[32] NO_INDEX_LIST);
  // MEMBER(DATA8 leadOrTrail[32] NO_INDEX_LIST);
  // UINT32 header NOENCODE
  // {
    //  0_04: geo;
    //  5_26: event_count;
    // 27_31: 8;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geo : 5; // 0..4
      uint32 event_count : 22; // 5..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 event_count : 22; // 5..26
      uint32 geo : 5; // 0..4
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(190,uint32 ,header,header.u32,42);
  CHECK_BITS_EQUAL(189,header.unnamed_27_31,8);
  // select several

    // tdc_header = TDC_HEADER();
    // measurement = TDC_DATA(data=data,channel=channel,leadOrTrail=leadOrTrail);
    // tdc_error = TDC_ERROR();
    // tdc_trailer = TDC_TRAILER();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: TDC_HEADER tdc_header: (s32) => (0xf8000000,0x08000000)
    // optimized match 2: TDC_DATA measurement: (s32) => (0xf8000000,0x00000000)
    // optimized match 3: TDC_ERROR tdc_error: (s32) => (0xf8000000,0x20000000)
    // optimized match 4: TDC_TRAILER tdc_trailer: (s32) => (0xf8000000,0x18000000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(200,uint32,__match_peek);
    // differ = 38000000 : 27 28 29
    uint32 __match_index = 0 | /* 27,29 */ ((__match_peek >> 27) & 0x00000007);
    static const sint8 __match_index_array[8] = { 2, 1, 0, 4, 3, 0, 0, 0, };
    __match_no = __match_index_array[__match_index];
    // last_subevent_item = 0
    }
    if (!__match_no) break;
    switch (__match_no)
    {
      case 1:
        CHECK_SPURIOUS_MATCH_DECL(196,spurious_match_abort_loop_2,TDC_HEADER);
        UNPACK_DECL(196,TDC_HEADER,tdc_header);
        break;
      case 2:
        CHECK_SPURIOUS_MATCH_DECL(197,spurious_match_abort_loop_2,TDC_DATA/*,data:member*//*,channel:member*//*,leadOrTrail:member*/);
        UNPACK_DECL(197,TDC_DATA,measurement,/*data*/data,/*channel*/channel,/*leadOrTrail*/leadOrTrail);
        break;
      case 3:
        CHECK_SPURIOUS_MATCH_DECL(198,spurious_match_abort_loop_2,TDC_ERROR);
        UNPACK_DECL(198,TDC_ERROR,tdc_error);
        break;
      case 4:
        CHECK_SPURIOUS_MATCH_DECL(199,spurious_match_abort_loop_2,TDC_TRAILER);
        UNPACK_DECL(199,TDC_TRAILER,tdc_trailer);
        break;
    }
  }
  spurious_match_abort_loop_2:;
  // optional UINT32 ext_time_tag NOENCODE
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 time_tag : 27; // 0..26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 time_tag : 27; // 0..26
#endif
    };
    uint32  u32;
  } ext_time_tag;
  if (__buffer.empty()) goto data_done_0;
  PEEK_FROM_BUFFER_FULL(207,uint32 ,ext_time_tag,ext_time_tag.u32,43);
  CHECK_JUMP_BITS_EQUAL(206,ext_time_tag.unnamed_27_31,17,data_done_0);
  __buffer.advance(sizeof(ext_time_tag.u32));
  data_done_0:;
  // UINT32 trailer NOENCODE
  // {
    //  0_04: geo;
    //  5_20: word_count;
    // 21_23: unused;
    //    24: tdc_error;
    //    25: overflow;
    //    26: trigger_lost;
    // 27_31: 16;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 geo : 5; // 0..4
      uint32 word_count : 16; // 5..20
      uint32 unused : 3; // 21..23
      uint32 tdc_error : 1; // 24
      uint32 overflow : 1; // 25
      uint32 trigger_lost : 1; // 26
      uint32 unnamed_27_31 : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_27_31 : 5; // 27..31
      uint32 trigger_lost : 1; // 26
      uint32 overflow : 1; // 25
      uint32 tdc_error : 1; // 24
      uint32 unused : 3; // 21..23
      uint32 word_count : 16; // 5..20
      uint32 geo : 5; // 0..4
#endif
    };
    uint32  u32;
  } trailer;
  READ_FROM_BUFFER_FULL(218,uint32 ,trailer,trailer.u32,44);
  CHECK_BITS_EQUAL(217,trailer.unnamed_27_31,16);
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CAEN_V1290_FRS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V792_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V792_FRS()
template<typename __data_src_t>
void VME_CAEN_V792_FRS::__unpack(__data_src_t &__buffer)
{
  // UINT32 header NOENCODE
  // {
    //  0_07: unused;
    //  8_13: cnt;
    // 14_15: 0;
    // 16_23: crate;
    // 24_26: 2;
    // 27_31: geo;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unused : 8; // 0..7
      uint32 cnt : 6; // 8..13
      uint32 unnamed_14_15 : 2; // 14..15
      uint32 crate : 8; // 16..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geo : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geo : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 crate : 8; // 16..23
      uint32 unnamed_14_15 : 2; // 14..15
      uint32 cnt : 6; // 8..13
      uint32 unused : 8; // 0..7
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(255,uint32 ,header,header.u32,46);
  CHECK_BITS_EQUAL(251,header.unnamed_14_15,0);
  CHECK_BITS_EQUAL(253,header.unnamed_24_26,2);
  // several UINT32 adc_data NOENCODE
  // {
    //  0_11: adc;
    //    12: overflow;
    //    13: underthreshold;
    // 14_15: unused;
    // 16_20: channel;
    // 21_23: unused2;
    // 24_26: 0;
    // 27_31: geo;
  // }
  for ( ; ; ) {
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 adc : 12; // 0..11
      uint32 overflow : 1; // 12
      uint32 underthreshold : 1; // 13
      uint32 unused : 2; // 14..15
      uint32 channel : 5; // 16..20
      uint32 unused2 : 3; // 21..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geo : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geo : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 unused2 : 3; // 21..23
      uint32 channel : 5; // 16..20
      uint32 unused : 2; // 14..15
      uint32 underthreshold : 1; // 13
      uint32 overflow : 1; // 12
      uint32 adc : 12; // 0..11
#endif
    };
    uint32  u32;
  } adc_data;
  if (__buffer.empty()) goto data_done_1;
  PEEK_FROM_BUFFER_FULL(272,uint32 ,adc_data,adc_data.u32,47);
  CHECK_JUMP_BITS_EQUAL(270,adc_data.unnamed_24_26,0,data_done_1);
  __buffer.advance(sizeof(adc_data.u32));
  }
  data_done_1:;
  // UINT32 eob NOENCODE
  // {
    //  0_23: eventcounter;
    // 24_26: 4;
    // 27_31: geo;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 eventcounter : 24; // 0..23
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 geo : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geo : 5; // 27..31
      uint32 unnamed_24_26 : 3; // 24..26
      uint32 eventcounter : 24; // 0..23
#endif
    };
    uint32  u32;
  } eob;
  READ_FROM_BUFFER_FULL(279,uint32 ,eob,eob.u32,48);
  CHECK_BITS_EQUAL(277,eob.unnamed_24_26,4);
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CAEN_V792_FRS::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS()
template<typename __data_src_t>
void VME_CAEN_V830_FRS::__unpack(__data_src_t &__buffer)
{
  // UINT32 header NOENCODE
  // {
    //  0_15: trigger_number;
    // 16_17: ts;
    // 18_23: nwords;
    // 24_25: unused;
    //    26: 1;
    // 27_31: geo;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 trigger_number : 16; // 0..15
      uint32 ts : 2; // 16..17
      uint32 nwords : 6; // 18..23
      uint32 unused : 2; // 24..25
      uint32 unnamed_26_26 : 1; // 26
      uint32 geo : 5; // 27..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 geo : 5; // 27..31
      uint32 unnamed_26_26 : 1; // 26
      uint32 unused : 2; // 24..25
      uint32 nwords : 6; // 18..23
      uint32 ts : 2; // 16..17
      uint32 trigger_number : 16; // 0..15
#endif
    };
    uint32  u32;
  } header;
  READ_FROM_BUFFER_FULL(233,uint32 ,header,header.u32,50);
  CHECK_BITS_EQUAL(231,header.unnamed_26_26,1);
  // list(0<=i<header.nwords)

  for (uint32 i = 0; i < (uint32) (header.nwords); ++i)
  {
    // UINT32 data_word NOENCODE
    // {
      //  0_31: data;
    // }
    union
    {
      struct
      {
#if __BYTE_ORDER == __LITTLE_ENDIAN
        uint32 data : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
        uint32 data : 32; // 0..31
#endif
      };
      uint32  u32;
    } data_word;
    READ_FROM_BUFFER_FULL(240,uint32 ,data_word,data_word.u32,51);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CAEN_V830_FRS::__unpack);

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
  READ_FROM_BUFFER_FULL(92,uint32 ,hi,hi.u32,53);
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
  READ_FROM_BUFFER_FULL(96,uint32 ,lo,lo.u32,54);
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
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x700);
    UNPACK_DECL(451,TIMESTAMP_WHITERABBIT,ts,/*id*/0x700);
    // external data = EXT_AIDA();
    UNPACK_DECL(452,EXT_AIDA,data);
  }

  else
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
      PEEK_FROM_BUFFER(460,uint32,__match_peek);
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
          UNPACK_DECL(459,DUMMY,dummy);
          break;
      }
    }
  }
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
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
    UNPACK_DECL(503,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1600);
    // external data = EXT_FATIMA_TAMEX();
    UNPACK_DECL(504,EXT_FATIMA_TAMEX,data);
  }

  else
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
      PEEK_FROM_BUFFER(511,uint32,__match_peek);
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
          UNPACK_DECL(510,DUMMY,dummy);
          break;
      }
    }
  }
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
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
    UNPACK_DECL(487,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1500);
    // external data = EXT_FATIMA_VME();
    UNPACK_DECL(488,EXT_FATIMA_VME,data);
  }

  else
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
      PEEK_FROM_BUFFER(495,uint32,__match_peek);
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
          UNPACK_DECL(494,DUMMY,dummy);
          break;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fatima_vme_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_crate_subev)
template<typename __data_src_t>
void frs_crate_subev::__unpack(__data_src_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=30,type=12,subtype=1);
    UNPACK_DECL(600,EXT_FRS,data,/*procid*/30,/*type*/12,/*subtype*/1);
  }

  else
  {
    // dummy = DUMMY();
    UNPACK_DECL(604,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_crate_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_main_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_crate_subev)
template<typename __data_src_t>
void frs_main_crate_subev::__unpack(__data_src_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=10,type=12,subtype=1);
    UNPACK_DECL(570,EXT_FRS,data,/*procid*/10,/*type*/12,/*subtype*/1);
  }

  else
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
      PEEK_FROM_BUFFER(577,uint32,__match_peek);
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
          UNPACK_DECL(576,DUMMY,dummy);
          break;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_main_crate_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_tof_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tof_crate_subev)
template<typename __data_src_t>
void frs_tof_crate_subev::__unpack(__data_src_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=35,type=12,subtype=1);
    UNPACK_DECL(625,EXT_FRS,data,/*procid*/35,/*type*/12,/*subtype*/1);
  }

  else
  {
    // dummy = DUMMY();
    UNPACK_DECL(629,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tof_crate_subev::__unpack);

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
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=10,type=36,subtype=0xe10);
    UNPACK_DECL(585,EXT_FRS,data,/*procid*/10,/*type*/36,/*subtype*/0xe10);
  }

  else
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
      PEEK_FROM_BUFFER(592,uint32,__match_peek);
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
          UNPACK_DECL(591,DUMMY,dummy);
          break;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tpat_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_tpc_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpc_crate_subev)
template<typename __data_src_t>
void frs_tpc_crate_subev::__unpack(__data_src_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=20,type=12,subtype=1);
    UNPACK_DECL(613,EXT_FRS,data,/*procid*/20,/*type*/12,/*subtype*/1);
  }

  else
  {
    // dummy = DUMMY();
    UNPACK_DECL(617,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tpc_crate_subev::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for frs_whiterabbit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_whiterabbit_subev)
template<typename __data_src_t>
void frs_whiterabbit_subev::__unpack(__data_src_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x100);
    UNPACK_DECL(554,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  }

  else
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
      PEEK_FROM_BUFFER(561,uint32,__match_peek);
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
          UNPACK_DECL(560,DUMMY,dummy);
          break;
      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_whiterabbit_subev::__unpack);

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
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x400);
    UNPACK_DECL(470,TIMESTAMP_WHITERABBIT,ts,/*id*/0x400);
    // external data = EXT_GERMANIUM();
    UNPACK_DECL(471,EXT_GERMANIUM,data);
  }

  else
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
      PEEK_FROM_BUFFER(478,uint32,__match_peek);
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
          UNPACK_DECL(477,DUMMY,dummy);
          break;
      }
    }
  }
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
  // if(1)

  // else

  if (1)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x500);
    UNPACK_DECL(520,TIMESTAMP_WHITERABBIT,ts,/*id*/0x500);
    // if(0)

    // else

    if (0)
    {
      // external data_tp = EXT_PLASTIC_TP();
      UNPACK_DECL(523,EXT_PLASTIC_TP,data_tp);
    }

    else
    {
      // header = TAMEX4_HEADER();
      UNPACK_DECL(528,TAMEX4_HEADER,header);
      // select several

        // padding = TAMEX4_PADDING();
      for ( ; ; )
      {
        if (__buffer.empty()) break;
        int __match_no = 0;
        // optimized match 1: TAMEX4_PADDING padding: (s32) => (0xfff00000,0xadd00000)
        {
        uint32 __match_peek;
        PEEK_FROM_BUFFER(532,uint32,__match_peek);
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
            CHECK_SPURIOUS_MATCH_DECL(531,spurious_match_abort_loop_3,TAMEX4_PADDING);
            UNPACK_DECL(531,TAMEX4_PADDING,padding);
            break;
        }
      }
      spurious_match_abort_loop_3:;
      // select several

        // crate[0] = TAMEX_SFP(sfp=0);
      for ( ; ; )
      {
        if (__buffer.empty()) break;
        int __match_no = 0;
        // optimized match 1: TAMEX_SFP crate[0]: could not get bits
        __buffer.peeking();
        MATCH_DECL(535,__match_no,1,TAMEX_SFP,crate[0],/*sfp*/0);
        if (!__match_no) break;
        switch (__match_no)
        {
          case 1:
            UNPACK_DECL(535,TAMEX_SFP,crate[0],/*sfp*/0);
            break;
        }
      }
    }
  }

  else
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
      PEEK_FROM_BUFFER(544,uint32,__match_peek);
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
          UNPACK_DECL(543,DUMMY,dummy);
          break;
      }
    }
  }
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
  // plastic = plastic_subev(type=10,subtype=1,procid=80,control=20,
                          // subcrate=0);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(639,__match_no,1,((VES10_1_type==10)&&(VES10_1_subtype==1)&&(VES10_1_control==20)&&(VES10_1_subcrate==0)&&(VES10_1_procid==80)),plastic);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(639,plastic_subev,plastic,0);
      UNPACK_SUBEVENT_DECL(639,0,plastic_subev,plastic);
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