/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for ADC_DATA.
 *
 * Do not edit - automatically generated.
 */

// ADC_DATA()
#if !PACKER_CODE
# define DECLARED_UNPACK_ADC_DATA
class ADC_DATA
#else//PACKER_CODE
# define DECLARED_PACKER_ADC_DATA
class PACKER_ADC_DATA
#endif//PACKER_CODE

{
public:
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

  STRUCT_FCNS_DECL(ADC_DATA);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for BARRIER.
 *
 * Do not edit - automatically generated.
 */

// BARRIER()
#if !PACKER_CODE
# define DECLARED_UNPACK_BARRIER
class BARRIER
#else//PACKER_CODE
# define DECLARED_PACKER_BARRIER
class PACKER_BARRIER
#endif//PACKER_CODE

{
public:
  // UINT32 barrier NOENCODE
  // {
    //  0_31: ba = MATCH(0xbabababa);
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

  STRUCT_FCNS_DECL(BARRIER);
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
 * Event unpacker associated structures for EXT_FRS.
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
 * Event unpacker associated structures for EXT_PLASTIC.
 *
 * Do not edit - automatically generated.
 */


/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for EXT_PLASTIC_TP.
 *
 * Do not edit - automatically generated.
 */


/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for SKIP.
 *
 * Do not edit - automatically generated.
 */

// SKIP(n)
#if !PACKER_CODE
# define DECLARED_UNPACK_SKIP
class SKIP
#else//PACKER_CODE
# define DECLARED_PACKER_SKIP
class PACKER_SKIP
#endif//PACKER_CODE

{
public:
  // list(0<=i<n)

    // UINT32 skip NOENCODE;

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 n);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 n);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 n);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(SKIP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX4_EPOCH_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_EPOCH_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                  // time_epoch)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX4_EPOCH_DATA
class TAMEX4_EPOCH_DATA
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX4_EPOCH_DATA
class PACKER_TAMEX4_EPOCH_DATA
#endif//PACKER_CODE

{
public:
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

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX4_EPOCH_DATA);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX4_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_HEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX4_HEADER
class TAMEX4_HEADER
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX4_HEADER
class PACKER_TAMEX4_HEADER
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA16 post_trig_ns[64] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,64> post_trig_ns;
  // MEMBER(DATA16 pre_trig_ns[64] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA16,DATA16,64> pre_trig_ns;
  // UINT32 trigger_window NOENCODE
  // {
    //  0_15: post_trig_ns;
    // 16_31: pre_trig_ns;
    // ENCODE(post_trig_ns APPEND_LIST,(value=post_trig_ns));
    // ENCODE(pre_trig_ns APPEND_LIST,(value=pre_trig_ns));
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

  STRUCT_FCNS_DECL(TAMEX4_HEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX4_PADDING.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_PADDING()
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX4_PADDING
class TAMEX4_PADDING
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX4_PADDING
class PACKER_TAMEX4_PADDING
#endif//PACKER_CODE

{
public:
  // UINT32 padding NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
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

  STRUCT_FCNS_DECL(TAMEX4_PADDING);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX4_TIME_DATA.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_TIME_DATA(sfp,card,time_coarse,time_fine,time_edge,time_channel,
                 // time_epoch)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX4_TIME_DATA
class TAMEX4_TIME_DATA
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX4_TIME_DATA
class PACKER_TAMEX4_TIME_DATA
#endif//PACKER_CODE

{
public:
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

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                      ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                      ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_coarse
                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_fine
                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_edge
                                       ,raw_list_ii_zero_suppress<DATA12,DATA12,512> &time_channel
                                       ,raw_list_ii_zero_suppress<DATA32,DATA32,512> &time_epoch);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX4_TIME_DATA);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX4_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX4_SFP(sfp,card)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX4_SFP
class TAMEX4_SFP
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX4_SFP
class PACKER_TAMEX4_SFP
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA12 time_coarse[512] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_coarse;
  // MEMBER(DATA12 time_fine[512] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_fine;
  // MEMBER(DATA12 time_edge[512] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_edge;
  // MEMBER(DATA12 time_channel[512] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA12,DATA12,512> time_channel;
  // MEMBER(DATA32 time_epoch[512] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA32,DATA32,512> time_epoch;
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

    // select several

      // time = TAMEX4_TIME_DATA(sfp=sfp,card=card,time_coarse=time_coarse,
                              // time_fine=time_fine,time_edge=time_edge,
                              // time_channel=time_channel,time_epoch=time_epoch);
      // epoch = TAMEX4_EPOCH_DATA(sfp=sfp,card=card,time_coarse=time_coarse,
                                // time_fine=time_fine,time_edge=time_edge,
                                // time_channel=time_channel,time_epoch=time_epoch);
    SINGLE(TAMEX4_TIME_DATA,time);
    SINGLE(TAMEX4_EPOCH_DATA,epoch);
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

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp,uint32 card);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp,uint32 card);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp,uint32 card);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX4_SFP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TAMEX_SFP.
 *
 * Do not edit - automatically generated.
 */

// TAMEX_SFP(sfp)
#if !PACKER_CODE
# define DECLARED_UNPACK_TAMEX_SFP
class TAMEX_SFP
#else//PACKER_CODE
# define DECLARED_PACKER_TAMEX_SFP
class PACKER_TAMEX_SFP
#endif//PACKER_CODE

{
public:
  // select several

    // card[0] = TAMEX4_SFP(sfp=sfp,card=0);
    // card[1] = TAMEX4_SFP(sfp=sfp,card=1);
    // card[2] = TAMEX4_SFP(sfp=sfp,card=2);
    // card[3] = TAMEX4_SFP(sfp=sfp,card=3);
    // card[4] = TAMEX4_SFP(sfp=sfp,card=4);
  SINGLE(TAMEX4_SFP,card[5]);

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,uint32 sfp);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer,uint32 sfp);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,uint32 sfp);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TAMEX_SFP);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TDC_DATA.
 *
 * Do not edit - automatically generated.
 */

// TDC_DATA(data,channel,leadOrTrail)
#if !PACKER_CODE
# define DECLARED_UNPACK_TDC_DATA
class TDC_DATA
#else//PACKER_CODE
# define DECLARED_PACKER_TDC_DATA
class PACKER_TDC_DATA
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA8 channel[32] NO_INDEX_LIST);
  // MEMBER(DATA8 leadOrTrail[32] NO_INDEX_LIST);
  // MEMBER(DATA8 multihit);
  DATA8 multihit;
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

public:
#ifndef __PSDC__
# if !PACKER_CODE
template<typename __data_src_t>
  void __unpack(__data_src_t &__buffer,raw_array_multi_zero_suppress<DATA24,DATA24,32,32> &data
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &channel
                                      ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &leadOrTrail);
template<typename __data_src_t>
  static bool __match(__data_src_t &__buffer);
  // void __clean();
# else//PACKER_CODE
template<typename __data_dest_t>
  void __packer(__data_dest_t &__buffer,raw_array_multi_zero_suppress<DATA24,DATA24,32,32> &data
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &channel
                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,32> &leadOrTrail);
# endif//PACKER_CODE

  STRUCT_FCNS_DECL(TDC_DATA);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TDC_ERROR.
 *
 * Do not edit - automatically generated.
 */

// TDC_ERROR()
#if !PACKER_CODE
# define DECLARED_UNPACK_TDC_ERROR
class TDC_ERROR
#else//PACKER_CODE
# define DECLARED_PACKER_TDC_ERROR
class PACKER_TDC_ERROR
#endif//PACKER_CODE

{
public:
  // UINT32 tdc_err NOENCODE
  // {
    //  0_14: error_flags;
    // 15_23: unused1;
    // 24_25: tdc;
    //    26: unused2;
    // 27_31: 4;
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

  STRUCT_FCNS_DECL(TDC_ERROR);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TDC_HEADER.
 *
 * Do not edit - automatically generated.
 */

// TDC_HEADER()
#if !PACKER_CODE
# define DECLARED_UNPACK_TDC_HEADER
class TDC_HEADER
#else//PACKER_CODE
# define DECLARED_PACKER_TDC_HEADER
class PACKER_TDC_HEADER
#endif//PACKER_CODE

{
public:
  // UINT32 tdc_header NOENCODE
  // {
    //  0_11: bunch_id;
    // 12_23: event_id;
    // 24_25: tdc;
    //    26: unused;
    // 27_31: 1;
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

  STRUCT_FCNS_DECL(TDC_HEADER);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for TDC_TRAILER.
 *
 * Do not edit - automatically generated.
 */

// TDC_TRAILER()
#if !PACKER_CODE
# define DECLARED_UNPACK_TDC_TRAILER
class TDC_TRAILER
#else//PACKER_CODE
# define DECLARED_PACKER_TDC_TRAILER
class PACKER_TDC_TRAILER
#endif//PACKER_CODE

{
public:
  // UINT32 tdc_trailer NOENCODE
  // {
    //  0_11: word_count;
    // 12_23: event_id;
    // 24_25: tdc;
    //    26: unused;
    // 27_31: 3;
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

  STRUCT_FCNS_DECL(TDC_TRAILER);
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
 * Event unpacker associated structures for VME_CAEN_V1290_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V1290_FRS()
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V1290_FRS
class VME_CAEN_V1290_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V1290_FRS
class PACKER_VME_CAEN_V1290_FRS
#endif//PACKER_CODE

{
public:
  // MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(32));
  raw_array_multi_zero_suppress<DATA24,DATA24,32,32> data;
  // MEMBER(DATA8 channel[32] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,32> channel;
  // MEMBER(DATA8 leadOrTrail[32] NO_INDEX_LIST);
  raw_list_ii_zero_suppress<DATA8,DATA8,32> leadOrTrail;
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
  SINGLE(TDC_HEADER,tdc_header);
  SINGLE(TDC_DATA,measurement);
  SINGLE(TDC_ERROR,tdc_error);
  SINGLE(TDC_TRAILER,tdc_trailer);
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

  STRUCT_FCNS_DECL(VME_CAEN_V1290_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V792_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V792_FRS()
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V792_FRS
class VME_CAEN_V792_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V792_FRS
class PACKER_VME_CAEN_V792_FRS
#endif//PACKER_CODE

{
public:
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

  STRUCT_FCNS_DECL(VME_CAEN_V792_FRS);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for VME_CAEN_V830_FRS.
 *
 * Do not edit - automatically generated.
 */

// VME_CAEN_V830_FRS()
#if !PACKER_CODE
# define DECLARED_UNPACK_VME_CAEN_V830_FRS
class VME_CAEN_V830_FRS
#else//PACKER_CODE
# define DECLARED_PACKER_VME_CAEN_V830_FRS
class PACKER_VME_CAEN_V830_FRS
#endif//PACKER_CODE

{
public:
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

    // UINT32 data_word NOENCODE
    // {
      //  0_31: data;
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

  STRUCT_FCNS_DECL(VME_CAEN_V830_FRS);
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
  // if(0)

  // else

    // ts = TIMESTAMP_WHITERABBIT(id=0x700);
    // external data = EXT_AIDA();
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
    SINGLE(EXT_AIDA,data);
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
  // if(0)

  // else

    // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
    // external data = EXT_FATIMA_TAMEX();
    SINGLE(TIMESTAMP_WHITERABBIT_EXTENDED,ts);
    SINGLE(EXT_FATIMA_TAMEX,data);
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
  // if(0)

  // else

    // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
    // external data = EXT_FATIMA_VME();
    SINGLE(TIMESTAMP_WHITERABBIT_EXTENDED,ts);
    SINGLE(EXT_FATIMA_VME,data);
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

  STRUCT_FCNS_DECL(fatima_vme_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_crate_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_crate_subev
class frs_crate_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_crate_subev
class PACKER_frs_crate_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // if(0)

  // else

    // external data = EXT_FRS(procid=30,type=12,subtype=1);
    SINGLE(EXT_FRS,data);
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

  STRUCT_FCNS_DECL(frs_crate_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_main_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_crate_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_main_crate_subev
class frs_main_crate_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_main_crate_subev
class PACKER_frs_main_crate_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // if(0)

  // else

    // external data = EXT_FRS(procid=10,type=12,subtype=1);
    SINGLE(EXT_FRS,data);
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

  STRUCT_FCNS_DECL(frs_main_crate_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_tof_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tof_crate_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_tof_crate_subev
class frs_tof_crate_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_tof_crate_subev
class PACKER_frs_tof_crate_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // if(0)

  // else

    // external data = EXT_FRS(procid=35,type=12,subtype=1);
    SINGLE(EXT_FRS,data);
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

  STRUCT_FCNS_DECL(frs_tof_crate_subev);
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
  // if(0)

  // else

    // external data = EXT_FRS(procid=10,type=36,subtype=0xe10);
    SINGLE(EXT_FRS,data);
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

  STRUCT_FCNS_DECL(frs_tpat_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_tpc_crate_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_tpc_crate_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_tpc_crate_subev
class frs_tpc_crate_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_tpc_crate_subev
class PACKER_frs_tpc_crate_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // if(0)

  // else

    // external data = EXT_FRS(procid=20,type=12,subtype=1);
    SINGLE(EXT_FRS,data);
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

  STRUCT_FCNS_DECL(frs_tpc_crate_subev);
#endif//!__PSDC__
};

/** END_STRUCTURES ****************************************************/
/** BEGIN_STRUCTURES ***************************************************
 *
 * Event unpacker associated structures for frs_whiterabbit_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_whiterabbit_subev)
#if !PACKER_CODE
# define DECLARED_UNPACK_frs_whiterabbit_subev
class frs_whiterabbit_subev
#else//PACKER_CODE
# define DECLARED_PACKER_frs_whiterabbit_subev
class PACKER_frs_whiterabbit_subev
#endif//PACKER_CODE
 : public unpack_subevent_base
{
public:
  // if(0)

  // else

    // ts = TIMESTAMP_WHITERABBIT(id=0x100);
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
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

  STRUCT_FCNS_DECL(frs_whiterabbit_subev);
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
  // if(0)

  // else

    // ts = TIMESTAMP_WHITERABBIT(id=0x400);
    // external data = EXT_GERMANIUM();
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
    SINGLE(EXT_GERMANIUM,data);
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
  // if(1)

  // else

    // ts = TIMESTAMP_WHITERABBIT(id=0x500);
    // if(0)

    // else

      // external data_tp = EXT_PLASTIC_TP();
      SINGLE(EXT_PLASTIC_TP,data_tp);
      // header = TAMEX4_HEADER();
      // select several

        // padding = TAMEX4_PADDING();
      SINGLE(TAMEX4_PADDING,padding);
      // select several

        // crate[0] = TAMEX_SFP(sfp=0);
      SINGLE(TAMEX_SFP,crate[1]);
      SINGLE(TAMEX4_HEADER,header);
    SINGLE(TIMESTAMP_WHITERABBIT,ts);
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
  // plastic = plastic_subev(type=10,subtype=1,procid=80,control=20,
                          // subcrate=0);
  // ignore_unknown_subevent;
SINGLE(plastic_subev,plastic);
public:
#ifndef __PSDC__
  bitsone<2> __visited;
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
