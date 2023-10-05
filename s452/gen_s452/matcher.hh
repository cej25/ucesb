/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for ADC_DATA.
 *
 * Do not edit - automatically generated.
 */

// ADC_DATA()
template<typename __data_src_t>
bool ADC_DATA::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(176,uint32 ,adc_data,adc_data.u32,1);
  MATCH_BITS_EQUAL(174,adc_data.unnamed_24_26,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,ADC_DATA::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_src_t>
bool BARRIER::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(106,uint32 ,barrier,barrier.u32,3);
  MATCH_BITS_EQUAL(105,barrier.ba,0xbabababa);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,BARRIER::__match);

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
  MATCH_READ_FROM_BUFFER(435,uint32 ,no,5);
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
 * Event matcher for EXT_FRS.
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
 * Event matcher for EXT_PLASTIC.
 *
 * Do not edit - automatically generated.
 */


/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for EXT_PLASTIC_TP.
 *
 * Do not edit - automatically generated.
 */


/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for SKIP.
 *
 * Do not edit - automatically generated.
 */

// SKIP(n)
template<typename __data_src_t>
bool SKIP::__match(__data_src_t &__buffer,uint32 n)
{
  // list(0<=i<n)

  for (uint32 i = 0; i < (uint32) (n); ++i)
  {
    // UINT32 skip NOENCODE;
    uint32  skip;
    MATCH_READ_FROM_BUFFER(442,uint32 ,skip,7);
    return true;
    return false;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,SKIP::__match,uint32 n);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX4_EPOCH_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_EPOCH_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                  // time_epoch)
template<typename __data_src_t>
bool TAMEX4_EPOCH_DATA::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  MATCH_READ_FROM_BUFFER_FULL(353,uint32 ,data,data.u32,9);
  MATCH_BITS_EQUAL(346,data.unnamed_29_31,3);
  {
  }
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX4_EPOCH_DATA::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX4_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_HEADER()
template<typename __data_src_t>
bool TAMEX4_HEADER::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(297,uint32 ,trigger_window,trigger_window.u32,11);
  {
  }
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TAMEX4_HEADER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX4_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_PADDING()
template<typename __data_src_t>
bool TAMEX4_PADDING::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(307,uint32 ,padding,padding.u32,13);
  MATCH_BITS_EQUAL(306,padding.unnamed_20_31,0xadd);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TAMEX4_PADDING::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX4_TIME_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_TIME_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                 // time_epoch)
template<typename __data_src_t>
bool TAMEX4_TIME_DATA::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  MATCH_READ_FROM_BUFFER_FULL(331,uint32 ,data,data.u32,15);
  MATCH_BITS_EQUAL(324,data.type,4);
  {
  }
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX4_TIME_DATA::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX4_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_SFP(sfp,card)
template<typename __data_src_t>
bool TAMEX4_SFP::__match(__data_src_t &__buffer,uint32 sfp,uint32 card)
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
  MATCH_READ_FROM_BUFFER_FULL(372,uint32 ,indicator,indicator.u32,21);
  MATCH_BITS_EQUAL(367,indicator.unnamed_0_7,52);
  MATCH_BITS_EQUAL(369,indicator.sfp,sfp);
  MATCH_BITS_EQUAL(370,indicator.card,card);
  MATCH_BITS_EQUAL(371,indicator.unnamed_24_31,0);
  // MATCH_END;
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX4_SFP::__match,uint32 sfp,uint32 card);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TAMEX_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_SFP(sfp)
template<typename __data_src_t>
bool TAMEX_SFP::__match(__data_src_t &__buffer,uint32 sfp)
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
    MATCH_DECL(426,__match_no,1,TAMEX4_SFP,card[0],/*sfp*/sfp,/*card*/0);
    MATCH_DECL(427,__match_no,2,TAMEX4_SFP,card[1],/*sfp*/sfp,/*card*/1);
    MATCH_DECL(428,__match_no,3,TAMEX4_SFP,card[2],/*sfp*/sfp,/*card*/2);
    MATCH_DECL(429,__match_no,4,TAMEX4_SFP,card[3],/*sfp*/sfp,/*card*/3);
    MATCH_DECL(430,__match_no,5,TAMEX4_SFP,card[4],/*sfp*/sfp,/*card*/4);
    if (!__match_no) break;
    return true;
  }
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TAMEX_SFP::__match,uint32 sfp);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TDC_DATA.
 *
 * Do not edit - automatically generated.
 */

// TDC_DATA(data,channel,leadOrTrail)
template<typename __data_src_t>
bool TDC_DATA::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(125,uint32 ,tdc_data,tdc_data.u32,23);
  MATCH_BITS_EQUAL(120,tdc_data.unnamed_27_31,0);
  {
  }
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TDC_DATA::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// TDC_ERROR()
template<typename __data_src_t>
bool TDC_ERROR::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(149,uint32 ,tdc_err,tdc_err.u32,25);
  MATCH_BITS_EQUAL(148,tdc_err.unnamed_27_31,4);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TDC_ERROR::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TDC_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TDC_HEADER()
template<typename __data_src_t>
bool TDC_HEADER::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(137,uint32 ,tdc_header,tdc_header.u32,27);
  MATCH_BITS_EQUAL(136,tdc_header.unnamed_27_31,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TDC_HEADER::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for TDC_TRAILER.
 *
 * Do not edit - automatically generated.
 */

// TDC_TRAILER()
template<typename __data_src_t>
bool TDC_TRAILER::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(161,uint32 ,tdc_trailer,tdc_trailer.u32,29);
  MATCH_BITS_EQUAL(160,tdc_trailer.unnamed_27_31,3);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,TDC_TRAILER::__match);

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
  MATCH_READ_FROM_BUFFER_FULL(24,uint32 ,header,header.u32,35);
  MATCH_BITS_EQUAL(19,header.id,id);
  MATCH_BITS_EQUAL(20,header.unnamed_12_15,0);
  MATCH_BITS_EQUAL(22,header.unnamed_17_31,0);
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
  MATCH_READ_FROM_BUFFER_FULL(61,uint32 ,header,header.u32,41);
  MATCH_BITS_EQUAL(56,header.id,id);
  MATCH_BITS_EQUAL(57,header.unnamed_13_15,0);
  MATCH_BITS_EQUAL(59,header.unnamed_17_31,0);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN_ARG(bool,TIMESTAMP_WHITERABBIT_EXTENDED::__match,uint32 id);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V1290_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_FRS()
template<typename __data_src_t>
bool VME_CAEN_V1290_FRS::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(190,uint32 ,header,header.u32,45);
  MATCH_BITS_EQUAL(189,header.unnamed_27_31,8);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,VME_CAEN_V1290_FRS::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V792_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V792_FRS()
template<typename __data_src_t>
bool VME_CAEN_V792_FRS::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(255,uint32 ,header,header.u32,49);
  MATCH_BITS_EQUAL(251,header.unnamed_14_15,0);
  MATCH_BITS_EQUAL(253,header.unnamed_24_26,2);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,VME_CAEN_V792_FRS::__match);

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS()
template<typename __data_src_t>
bool VME_CAEN_V830_FRS::__match(__data_src_t &__buffer)
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
  MATCH_READ_FROM_BUFFER_FULL(233,uint32 ,header,header.u32,52);
  MATCH_BITS_EQUAL(231,header.unnamed_26_26,1);
  return true;
  return false;
}
FORCE_IMPL_DATA_SRC_FCN(bool,VME_CAEN_V830_FRS::__match);

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
  MATCH_READ_FROM_BUFFER_FULL(92,uint32 ,hi,hi.u32,55);
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
 * Event matcher for frs_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_crate_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_main_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_crate_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_tof_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tof_crate_subev)
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
 * Event matcher for frs_tpc_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpc_crate_subev)
// No __match function for subevents.

/** END_MATCHER *******************************************************/
/** BEGIN_MATCHER ******************************************************
 *
 * Event matcher for frs_whiterabbit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_whiterabbit_subev)
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
