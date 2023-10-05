/** BEGIN_PACKER *******************************************************
 *
 * Event packer for ADC_DATA.
 *
 * Do not edit - automatically generated.
 */

// ADC_DATA()
template<typename __data_dest_t>
void PACKER_ADC_DATA::__packer(__data_dest_t &__buffer)
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
}
FORCE_IMPL_DATA_SRC_FCN(void,ADC_DATA::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
template<typename __data_dest_t>
void PACKER_BARRIER::__packer(__data_dest_t &__buffer)
{
  // UINT32 barrier NOENCODE
  // {
    //  0_31: ba = MATCH(0xbabababa);
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,BARRIER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for DUMMY.
 *
 * Do not edit - automatically generated.
 */

// DUMMY()
template<typename __data_dest_t>
void PACKER_DUMMY::__packer(__data_dest_t &__buffer)
{
  // UINT32 no NOENCODE;
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_AIDA.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_FRS.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_GERMANIUM.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_PLASTIC.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EXT_PLASTIC_TP.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for SKIP.
 *
 * Do not edit - automatically generated.
 */

// SKIP(n)
template<typename __data_dest_t>
void PACKER_SKIP::__packer(__data_dest_t &__buffer,uint32 n)
{
  // list(0<=i<n)

  {
    // UINT32 skip NOENCODE;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,SKIP::__packer,uint32 n);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX4_EPOCH_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_EPOCH_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                  // time_epoch)
template<typename __data_dest_t>
void PACKER_TAMEX4_EPOCH_DATA::__packer(__data_dest_t &__buffer,uint32 sfp
                                                               ,uint32 card
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
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX4_EPOCH_DATA::__packer,uint32 sfp,uint32 card);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX4_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_HEADER()
template<typename __data_dest_t>
void PACKER_TAMEX4_HEADER::__packer(__data_dest_t &__buffer)
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
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX4_HEADER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX4_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_PADDING()
template<typename __data_dest_t>
void PACKER_TAMEX4_PADDING::__packer(__data_dest_t &__buffer)
{
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TAMEX4_PADDING::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX4_TIME_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_TIME_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                 // time_epoch)
template<typename __data_dest_t>
void PACKER_TAMEX4_TIME_DATA::__packer(__data_dest_t &__buffer,uint32 sfp
                                                              ,uint32 card
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
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX4_TIME_DATA::__packer,uint32 sfp,uint32 card);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX4_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_SFP(sfp,card)
template<typename __data_dest_t>
void PACKER_TAMEX4_SFP::__packer(__data_dest_t &__buffer,uint32 sfp,uint32 card)
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
  // MATCH_END;
  // UINT32 data_size NOENCODE
  // {
    //  0_31: bytes;
  // }
  // UINT32 tdc_header NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 170;
  // }
  // list(0<=i<((data_size.bytes / 4) - 3))

  {
    // select several

      // time = TAMEX4_TIME_DATA(sfp=sfp,card=card,time_coarse=time_coarse,
                              // time_fine=time_fine,time_edge=time_edge,
                              // time_channel=time_channel,time_epoch=time_epoch);
      // epoch = TAMEX4_EPOCH_DATA(sfp=sfp,card=card,time_coarse=time_coarse,
                                // time_fine=time_fine,time_edge=time_edge,
                                // time_channel=time_channel,time_epoch=time_epoch);
    {
      PACK_DECL(391,TAMEX4_TIME_DATA,time,/*sfp*/sfp,/*card*/card,/*time_coarse*/time_coarse,/*time_fine*/time_fine,/*time_edge*/time_edge,/*time_channel*/time_channel,/*time_epoch*/time_epoch);
      PACK_DECL(392,TAMEX4_EPOCH_DATA,epoch,/*sfp*/sfp,/*card*/card,/*time_coarse*/time_coarse,/*time_fine*/time_fine,/*time_edge*/time_edge,/*time_channel*/time_channel,/*time_epoch*/time_epoch);
    }
  }
  // UINT32 error_bits NOENCODE
  // {
    //  0_23: bits;
    // 24_31: 238;
  // }
  // UINT32 trailer NOENCODE
  // {
    //  0_15: lec;
    //    16: buf_no;
    // 17_19: reserved;
    // 20_23: trigger_type;
    // 24_31: 187;
  // }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX4_SFP::__packer,uint32 sfp,uint32 card);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TAMEX_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_SFP(sfp)
template<typename __data_dest_t>
void PACKER_TAMEX_SFP::__packer(__data_dest_t &__buffer,uint32 sfp)
{
  // select several

    // card[0] = TAMEX4_SFP(sfp=sfp,card=0);
    // card[1] = TAMEX4_SFP(sfp=sfp,card=1);
    // card[2] = TAMEX4_SFP(sfp=sfp,card=2);
    // card[3] = TAMEX4_SFP(sfp=sfp,card=3);
    // card[4] = TAMEX4_SFP(sfp=sfp,card=4);
  {
    PACK_DECL(426,TAMEX4_SFP,card[0],/*sfp*/sfp,/*card*/0);
    PACK_DECL(427,TAMEX4_SFP,card[1],/*sfp*/sfp,/*card*/1);
    PACK_DECL(428,TAMEX4_SFP,card[2],/*sfp*/sfp,/*card*/2);
    PACK_DECL(429,TAMEX4_SFP,card[3],/*sfp*/sfp,/*card*/3);
    PACK_DECL(430,TAMEX4_SFP,card[4],/*sfp*/sfp,/*card*/4);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TAMEX_SFP::__packer,uint32 sfp);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TDC_DATA.
 *
 * Do not edit - automatically generated.
 */

// TDC_DATA(data,channel,leadOrTrail)
template<typename __data_dest_t>
void PACKER_TDC_DATA::__packer(__data_dest_t &__buffer,raw_array_multi_zero_suppress<DATA24,DATA24,32,32> &data
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
}
FORCE_IMPL_DATA_SRC_FCN(void,TDC_DATA::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// TDC_ERROR()
template<typename __data_dest_t>
void PACKER_TDC_ERROR::__packer(__data_dest_t &__buffer)
{
  // UINT32 tdc_err NOENCODE
  // {
    //  0_14: error_flags;
    // 15_23: unused1;
    // 24_25: tdc;
    //    26: unused2;
    // 27_31: 4;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TDC_ERROR::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TDC_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TDC_HEADER()
template<typename __data_dest_t>
void PACKER_TDC_HEADER::__packer(__data_dest_t &__buffer)
{
  // UINT32 tdc_header NOENCODE
  // {
    //  0_11: bunch_id;
    // 12_23: event_id;
    // 24_25: tdc;
    //    26: unused;
    // 27_31: 1;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TDC_HEADER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TDC_TRAILER.
 *
 * Do not edit - automatically generated.
 */

// TDC_TRAILER()
template<typename __data_dest_t>
void PACKER_TDC_TRAILER::__packer(__data_dest_t &__buffer)
{
  // UINT32 tdc_trailer NOENCODE
  // {
    //  0_11: word_count;
    // 12_23: event_id;
    // 24_25: tdc;
    //    26: unused;
    // 27_31: 3;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,TDC_TRAILER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TIMESTAMP_WHITERABBIT.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT(id)
template<typename __data_dest_t>
void PACKER_TIMESTAMP_WHITERABBIT::__packer(__data_dest_t &__buffer,uint32 id)
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
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for TIMESTAMP_WHITERABBIT_EXTENDED.
 *
 * Do not edit - automatically generated.
 */

// TIMESTAMP_WHITERABBIT_EXTENDED(id)
template<typename __data_dest_t>
void PACKER_TIMESTAMP_WHITERABBIT_EXTENDED::__packer(__data_dest_t &__buffer,uint32 id)
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
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT_EXTENDED::__packer,uint32 id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V1290_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_FRS()
template<typename __data_dest_t>
void PACKER_VME_CAEN_V1290_FRS::__packer(__data_dest_t &__buffer)
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
  // select several

    // tdc_header = TDC_HEADER();
    // measurement = TDC_DATA(data=data,channel=channel,leadOrTrail=leadOrTrail);
    // tdc_error = TDC_ERROR();
    // tdc_trailer = TDC_TRAILER();
  {
    PACK_DECL(196,TDC_HEADER,tdc_header);
    PACK_DECL(197,TDC_DATA,measurement,/*data*/data,/*channel*/channel,/*leadOrTrail*/leadOrTrail);
    PACK_DECL(198,TDC_ERROR,tdc_error);
    PACK_DECL(199,TDC_TRAILER,tdc_trailer);
  }
  // optional UINT32 ext_time_tag NOENCODE
  // {
    //  0_26: time_tag;
    // 27_31: 17;
  // }
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
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CAEN_V1290_FRS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V792_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V792_FRS()
template<typename __data_dest_t>
void PACKER_VME_CAEN_V792_FRS::__packer(__data_dest_t &__buffer)
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
  // UINT32 eob NOENCODE
  // {
    //  0_23: eventcounter;
    // 24_26: 4;
    // 27_31: geo;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CAEN_V792_FRS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS()
template<typename __data_dest_t>
void PACKER_VME_CAEN_V830_FRS::__packer(__data_dest_t &__buffer)
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
  // list(0<=i<header.nwords)

  {
    // UINT32 data_word NOENCODE
    // {
      //  0_31: data;
    // }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,VME_CAEN_V830_FRS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for WR_MULTI.
 *
 * Do not edit - automatically generated.
 */

// WR_MULTI()
template<typename __data_dest_t>
void PACKER_WR_MULTI::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 time_hi);
  // MEMBER(DATA32 time_lo);
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
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for aida_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(aida_subev)
template<typename __data_dest_t>
void PACKER_aida_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x700);
    PACK_DECL(451,TIMESTAMP_WHITERABBIT,ts,/*id*/0x700);
    // external data = EXT_AIDA();
    PACK_DECL(452,EXT_AIDA,data);
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(459,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,aida_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fatima_tamex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_tamex_subev)
template<typename __data_dest_t>
void PACKER_fatima_tamex_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
    PACK_DECL(503,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1600);
    // external data = EXT_FATIMA_TAMEX();
    PACK_DECL(504,EXT_FATIMA_TAMEX,data);
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(510,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fatima_tamex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for fatima_vme_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(fatima_vme_subev)
template<typename __data_dest_t>
void PACKER_fatima_vme_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
    PACK_DECL(487,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1500);
    // external data = EXT_FATIMA_VME();
    PACK_DECL(488,EXT_FATIMA_VME,data);
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(494,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,fatima_vme_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_crate_subev)
template<typename __data_dest_t>
void PACKER_frs_crate_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=30,type=12,subtype=1);
    PACK_DECL(600,EXT_FRS,data,/*procid*/30,/*type*/12,/*subtype*/1);
  }

  else
  {
    // dummy = DUMMY();
    PACK_DECL(604,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_crate_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_main_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_crate_subev)
template<typename __data_dest_t>
void PACKER_frs_main_crate_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=10,type=12,subtype=1);
    PACK_DECL(570,EXT_FRS,data,/*procid*/10,/*type*/12,/*subtype*/1);
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(576,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_main_crate_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_tof_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tof_crate_subev)
template<typename __data_dest_t>
void PACKER_frs_tof_crate_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=35,type=12,subtype=1);
    PACK_DECL(625,EXT_FRS,data,/*procid*/35,/*type*/12,/*subtype*/1);
  }

  else
  {
    // dummy = DUMMY();
    PACK_DECL(629,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tof_crate_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_tpat_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpat_subev)
template<typename __data_dest_t>
void PACKER_frs_tpat_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=10,type=36,subtype=0xe10);
    PACK_DECL(585,EXT_FRS,data,/*procid*/10,/*type*/36,/*subtype*/0xe10);
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(591,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tpat_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_tpc_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpc_crate_subev)
template<typename __data_dest_t>
void PACKER_frs_tpc_crate_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // external data = EXT_FRS(procid=20,type=12,subtype=1);
    PACK_DECL(613,EXT_FRS,data,/*procid*/20,/*type*/12,/*subtype*/1);
  }

  else
  {
    // dummy = DUMMY();
    PACK_DECL(617,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tpc_crate_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_whiterabbit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_whiterabbit_subev)
template<typename __data_dest_t>
void PACKER_frs_whiterabbit_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x100);
    PACK_DECL(554,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(560,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_whiterabbit_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for germanium_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(germanium_subev)
template<typename __data_dest_t>
void PACKER_germanium_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  // else

  if (0)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x400);
    PACK_DECL(470,TIMESTAMP_WHITERABBIT,ts,/*id*/0x400);
    // external data = EXT_GERMANIUM();
    PACK_DECL(471,EXT_GERMANIUM,data);
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(477,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,germanium_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for plastic_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(plastic_subev)
template<typename __data_dest_t>
void PACKER_plastic_subev::__packer(__data_dest_t &__buffer)
{
  // if(1)

  // else

  if (1)
  {
    // ts = TIMESTAMP_WHITERABBIT(id=0x500);
    PACK_DECL(520,TIMESTAMP_WHITERABBIT,ts,/*id*/0x500);
    // if(0)

    // else

    if (0)
    {
      // external data_tp = EXT_PLASTIC_TP();
      PACK_DECL(523,EXT_PLASTIC_TP,data_tp);
    }

    else
    {
      // header = TAMEX4_HEADER();
      PACK_DECL(528,TAMEX4_HEADER,header);
      // select several

        // padding = TAMEX4_PADDING();
      {
        PACK_DECL(531,TAMEX4_PADDING,padding);
      }
      // select several

        // crate[0] = TAMEX_SFP(sfp=0);
      {
        PACK_DECL(535,TAMEX_SFP,crate[0],/*sfp*/0);
      }
    }
  }

  else
  {
    // select several

      // dummy = DUMMY();
    {
      PACK_DECL(543,DUMMY,dummy);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,plastic_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // plastic = plastic_subev(type=10,subtype=1,procid=80,control=20,
                          // subcrate=0);
  // ignore_unknown_subevent;
{
}

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
{
}

/** END_PACKER ********************************************************/
