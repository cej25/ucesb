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
  uint32  no;READ_FROM_BUFFER(307,uint32 ,no,0);
}
FORCE_IMPL_DATA_SRC_FCN(void,DUMMY::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
template<typename __data_src_t>
void FEBEX_PADDING::__unpack(__data_src_t &__buffer)
{
  // UINT32 pads_data NOENCODE
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
  } pads_data;
  READ_FROM_BUFFER_FULL(110,uint32 ,pads_data,pads_data.u32,2);
  CHECK_BITS_EQUAL(109,pads_data.unnamed_20_31,0xadd);
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_PADDING::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for FEBEX_TRACES.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACES()
template<typename __data_src_t>
void FEBEX_TRACES::__unpack(__data_src_t &__buffer)
{
  // MEMBER(DATA8 ftrigger);
  // MEMBER(DATA8 fboard);
  // MEMBER(DATA32 ftrig_time_hi);
  // MEMBER(DATA32 ftrig_time_lo);
  // MEMBER(DATA32 fts_hi[16] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA32 fts_lo[16] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA32 fen[16] ZERO_SUPPRESS_MULTI(32));
  // MEMBER(DATA32 flength[16] ZERO_SUPPRESS);
  // MEMBER(DATA16 ftrace[16][4000] ZERO_SUPPRESS);
  // UINT32 FF_header NOENCODE
  // {
    //  0_07: three_four;
    //  8_11: trigger_type;
    // 12_15: sfp;
    // 16_23: board_id;
    // 24_31: 255;
    // ENCODE(ftrigger,(value=trigger_type));
    // ENCODE(fboard,(value=board_id));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 three_four : 8; // 0..7
      uint32 trigger_type : 4; // 8..11
      uint32 sfp : 4; // 12..15
      uint32 board_id : 8; // 16..23
      uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_24_31 : 8; // 24..31
      uint32 board_id : 8; // 16..23
      uint32 sfp : 4; // 12..15
      uint32 trigger_type : 4; // 8..11
      uint32 three_four : 8; // 0..7
#endif
    };
    uint32  u32;
  } FF_header;
  READ_FROM_BUFFER_FULL(139,uint32 ,FF_header,FF_header.u32,4);
  CHECK_BITS_EQUAL(135,FF_header.unnamed_24_31,255);
  {
    {
      ftrigger.value = FF_header.trigger_type;
    }
    {
      fboard.value = FF_header.board_id;
    }
  }
  // UINT32 febex_chan_size NOENCODE
  // {
    //  0_01: ignore;
    //  2_31: size;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ignore : 2; // 0..1
      uint32 size : 30; // 2..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 size : 30; // 2..31
      uint32 ignore : 2; // 0..1
#endif
    };
    uint32  u32;
  } febex_chan_size;
  READ_FROM_BUFFER_FULL(145,uint32 ,febex_chan_size,febex_chan_size.u32,5);
  // UINT32 febex_half_time NOENCODE
  // {
    //  0_15: ext_time;
    // 16_31: other;
    // ENCODE(ftrig_time_hi,(value=ext_time));
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 ext_time : 16; // 0..15
      uint32 other : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 other : 16; // 16..31
      uint32 ext_time : 16; // 0..15
#endif
    };
    uint32  u32;
  } febex_half_time;
  READ_FROM_BUFFER_FULL(153,uint32 ,febex_half_time,febex_half_time.u32,6);
  {
    ftrig_time_hi.value = febex_half_time.ext_time;
  }
  // UINT32 febex_event_time NOENCODE
  // {
    //  0_31: time;
    // ENCODE(ftrig_time_lo,(value=time));
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
  } febex_event_time;
  READ_FROM_BUFFER_FULL(160,uint32 ,febex_event_time,febex_event_time.u32,7);
  {
    ftrig_time_lo.value = febex_event_time.time;
  }
  // UINT32 febex_flags NOENCODE
  // {
    //  0_15: hit_pattern;
    // 16_31: pile_flags;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 hit_pattern : 16; // 0..15
      uint32 pile_flags : 16; // 16..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 pile_flags : 16; // 16..31
      uint32 hit_pattern : 16; // 0..15
#endif
    };
    uint32  u32;
  } febex_flags;
  READ_FROM_BUFFER_FULL(169,uint32 ,febex_flags,febex_flags.u32,8);
  // UINT32 deadbeef NOENCODE
  // {
    //  0_31: 0xdeadbeef;
  // }
  union
  {
    struct
    {
#if __BYTE_ORDER == __LITTLE_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
      uint32 unnamed_0_31 : 32; // 0..31
#endif
    };
    uint32  u32;
  } deadbeef;
  READ_FROM_BUFFER_FULL(174,uint32 ,deadbeef,deadbeef.u32,9);
  CHECK_BITS_EQUAL(173,deadbeef.unnamed_0_31,0xdeadbeef);
  // if((FF_header.trigger_type == 3))

  // else

  if ((FF_header.trigger_type == 3))
  {
    // list(0<=i<16)

    for (uint32 i = 0; i < (uint32) (16); ++i)
    {
      // UINT32 pulse_header NOENCODE
      // {
        //  0_07: 52;
        //  8_31: stuff;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 unnamed_0_7 : 8; // 0..7
          uint32 stuff : 24; // 8..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 stuff : 24; // 8..31
          uint32 unnamed_0_7 : 8; // 0..7
#endif
        };
        uint32  u32;
      } pulse_header;
      READ_FROM_BUFFER_FULL(185,uint32 ,pulse_header,pulse_header.u32,10);
      CHECK_BITS_EQUAL(183,pulse_header.unnamed_0_7,52);
      // UINT32 pulse_trace_size NOENCODE
      // {
        //  0_31: size;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 size : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 size : 32; // 0..31
#endif
        };
        uint32  u32;
      } pulse_trace_size;
      READ_FROM_BUFFER_FULL(190,uint32 ,pulse_trace_size,pulse_trace_size.u32,11);
      // UINT32 pulse_trace_header NOENCODE
      // {
        //  0_31: head;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 head : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 head : 32; // 0..31
#endif
        };
        uint32  u32;
      } pulse_trace_header;
      READ_FROM_BUFFER_FULL(195,uint32 ,pulse_trace_header,pulse_trace_header.u32,12);
      // UINT32 pulse_trace_trailer NOENCODE
      // {
        //  0_31: trailer;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 trailer : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 trailer : 32; // 0..31
#endif
        };
        uint32  u32;
      } pulse_trace_trailer;
      READ_FROM_BUFFER_FULL(200,uint32 ,pulse_trace_trailer,pulse_trace_trailer.u32,13);
    }
  }

  else
  {
    // list(0<=i<((febex_chan_size.size / 4) - 1))

    for (uint32 i = 0; i < (uint32) (((febex_chan_size.size / 4) - 1)); ++i)
    {
      // UINT32 F0_header NOENCODE
      // {
        //  0_15: ext_chan_ts;
        // 16_23: ch_id;
        // 24_31: 240;
        // ENCODE(fts_hi[i],(value=ext_chan_ts));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 ext_chan_ts : 16; // 0..15
          uint32 ch_id : 8; // 16..23
          uint32 unnamed_24_31 : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 unnamed_24_31 : 8; // 24..31
          uint32 ch_id : 8; // 16..23
          uint32 ext_chan_ts : 16; // 0..15
#endif
        };
        uint32  u32;
      } F0_header;
      READ_FROM_BUFFER_FULL(217,uint32 ,F0_header,F0_header.u32,14);
      CHECK_BITS_EQUAL(213,F0_header.unnamed_24_31,240);
      {
        typedef __typeof__(*(&(fts_hi))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = fts_hi.insert_index(215,i);
        __item.value = F0_header.ext_chan_ts;
      }
      // UINT32 febex_chan_ts NOENCODE
      // {
        //  0_31: chan_ts;
        // ENCODE(fts_lo[i],(value=chan_ts));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 chan_ts : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 chan_ts : 32; // 0..31
#endif
        };
        uint32  u32;
      } febex_chan_ts;
      READ_FROM_BUFFER_FULL(224,uint32 ,febex_chan_ts,febex_chan_ts.u32,15);
      {
        typedef __typeof__(*(&(fts_lo))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = fts_lo.insert_index(223,i);
        __item.value = febex_chan_ts.chan_ts;
      }
      // UINT32 febex_chan_en NOENCODE
      // {
        //  0_23: chan_en;
        // 24_29: cf;
        //    30: pileup;
        //    31: overflow;
        // ENCODE(fen[F0_header.ch_id],(value=chan_en));
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 chan_en : 24; // 0..23
          uint32 cf : 6; // 24..29
          uint32 pileup : 1; // 30
          uint32 overflow : 1; // 31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 overflow : 1; // 31
          uint32 pileup : 1; // 30
          uint32 cf : 6; // 24..29
          uint32 chan_en : 24; // 0..23
#endif
        };
        uint32  u32;
      } febex_chan_en;
      READ_FROM_BUFFER_FULL(234,uint32 ,febex_chan_en,febex_chan_en.u32,16);
      {
        typedef __typeof__(*(&(fen))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = fen.insert_index(233,F0_header.ch_id);
        __item.value = febex_chan_en.chan_en;
      }
      // UINT32 future_use NOENCODE
      // {
        //  0_31: future;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 future : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 future : 32; // 0..31
#endif
        };
        uint32  u32;
      } future_use;
      READ_FROM_BUFFER_FULL(239,uint32 ,future_use,future_use.u32,17);
    }
    // list(0<=i<16)

    for (uint32 i = 0; i < (uint32) (16); ++i)
    {
      // UINT32 header NOENCODE
      // {
        //  0_07: 52;
        //  8_23: other;
        // 24_31: ch_id;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 unnamed_0_7 : 8; // 0..7
          uint32 other : 16; // 8..23
          uint32 ch_id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 ch_id : 8; // 24..31
          uint32 other : 16; // 8..23
          uint32 unnamed_0_7 : 8; // 0..7
#endif
        };
        uint32  u32;
      } header;
      READ_FROM_BUFFER_FULL(251,uint32 ,header,header.u32,18);
      CHECK_BITS_EQUAL(248,header.unnamed_0_7,52);
      // UINT32 tracesize NOENCODE
      // {
        //  0_31: size;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 size : 32; // 0..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 size : 32; // 0..31
#endif
        };
        uint32  u32;
      } tracesize;
      READ_FROM_BUFFER_FULL(256,uint32 ,tracesize,tracesize.u32,19);
      // UINT32 tracehead NOENCODE
      // {
        //  0_23: other;
        // 24_31: head;
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 other : 24; // 0..23
          uint32 head : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 head : 8; // 24..31
          uint32 other : 24; // 0..23
#endif
        };
        uint32  u32;
      } tracehead;
      READ_FROM_BUFFER_FULL(262,uint32 ,tracehead,tracehead.u32,20);
      // ENCODE(flength[header.ch_id],(value=((tracesize.size / 2) - 4)));

      {
        typedef __typeof__(*(&(flength))) __array_t;
        typedef typename __array_t::item_t __item_t;
        __item_t &__item = flength.insert_index(264,header.ch_id);
        __item.value = ((tracesize.size / 2) - 4);
      }
      // list(0<=j<((tracesize.size / 4) - 2))

      for (uint32 j = 0; j < (uint32) (((tracesize.size / 4) - 2)); ++j)
      {
        // UINT32 channel_trace NOENCODE
        // {
          //  0_13: data1;
          // 14_15: stuff1;
          // 16_29: data2;
          // 30_31: stuff2;
          // ENCODE(ftrace[header.ch_id][((2 * j) + 0)],(value=data1));
          // ENCODE(ftrace[header.ch_id][((2 * j) + 1)],(value=data2));
        // }
        union
        {
          struct
          {
#if __BYTE_ORDER == __LITTLE_ENDIAN
            uint32 data1 : 14; // 0..13
            uint32 stuff1 : 2; // 14..15
            uint32 data2 : 14; // 16..29
            uint32 stuff2 : 2; // 30..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
            uint32 stuff2 : 2; // 30..31
            uint32 data2 : 14; // 16..29
            uint32 stuff1 : 2; // 14..15
            uint32 data1 : 14; // 0..13
#endif
          };
          uint32  u32;
        } channel_trace;
        READ_FROM_BUFFER_FULL(284,uint32 ,channel_trace,channel_trace.u32,21);
        {
          {
            typedef __typeof__(*(&(ftrace[header.ch_id]))) __array_t;
            typedef typename __array_t::item_t __item_t;
            __item_t &__item = ftrace[header.ch_id].insert_index(282,((2 * j) + 0));
            __item.value = channel_trace.data1;
          }
          {
            typedef __typeof__(*(&(ftrace[header.ch_id]))) __array_t;
            typedef typename __array_t::item_t __item_t;
            __item_t &__item = ftrace[header.ch_id].insert_index(283,((2 * j) + 1));
            __item.value = channel_trace.data2;
          }
        }
      }
      // UINT32 trace_trailer NOENCODE
      // {
        //  0_23: notused;
        // 24_31: id = RANGE(176,191);
      // }
      union
      {
        struct
        {
#if __BYTE_ORDER == __LITTLE_ENDIAN
          uint32 notused : 24; // 0..23
          uint32 id : 8; // 24..31
#endif
#if __BYTE_ORDER == __BIG_ENDIAN
          uint32 id : 8; // 24..31
          uint32 notused : 24; // 0..23
#endif
        };
        uint32  u32;
      } trace_trailer;
      READ_FROM_BUFFER_FULL(292,uint32 ,trace_trailer,trace_trailer.u32,22);
      CHECK_BITS_RANGE(291,trace_trailer.id,176,191);
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_TRACES::__unpack);

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
  READ_FROM_BUFFER_FULL(26,uint32 ,header,header.u32,24);
  CHECK_BITS_EQUAL(21,header.id,id);
  CHECK_BITS_EQUAL(22,header.unnamed_12_15,0);
  CHECK_BITS_EQUAL(24,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(31,uint32 ,d1,d1.u32,25);
  CHECK_BITS_EQUAL(29,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(36,uint32 ,d2,d2.u32,26);
  CHECK_BITS_EQUAL(34,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(41,uint32 ,d3,d3.u32,27);
  CHECK_BITS_EQUAL(39,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(46,uint32 ,d4,d4.u32,28);
  CHECK_BITS_EQUAL(44,d4.unnamed_16_31,0x6e1);
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
  READ_FROM_BUFFER_FULL(63,uint32 ,header,header.u32,30);
  CHECK_BITS_EQUAL(58,header.id,id);
  CHECK_BITS_EQUAL(59,header.unnamed_13_15,0);
  CHECK_BITS_EQUAL(61,header.unnamed_17_31,0);
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
  READ_FROM_BUFFER_FULL(68,uint32 ,d1,d1.u32,31);
  CHECK_BITS_EQUAL(66,d1.unnamed_16_31,0x3e1);
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
  READ_FROM_BUFFER_FULL(73,uint32 ,d2,d2.u32,32);
  CHECK_BITS_EQUAL(71,d2.unnamed_16_31,0x4e1);
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
  READ_FROM_BUFFER_FULL(78,uint32 ,d3,d3.u32,33);
  CHECK_BITS_EQUAL(76,d3.unnamed_16_31,0x5e1);
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
  READ_FROM_BUFFER_FULL(83,uint32 ,d4,d4.u32,34);
  CHECK_BITS_EQUAL(81,d4.unnamed_16_31,0x6e1);
  {
    t4.value = d4.t4;
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TIMESTAMP_WHITERABBIT_EXTENDED::__unpack,uint32 id);

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
  READ_FROM_BUFFER_FULL(94,uint32 ,hi,hi.u32,36);
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
  READ_FROM_BUFFER_FULL(98,uint32 ,lo,lo.u32,37);
  {
    time_lo.value = lo.time;
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,WR_MULTI::__unpack);

/** END_UNPACKER ******************************************************/
/** BEGIN_UNPACKER *****************************************************
 *
 * Event unpacker for febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(febex_subev)
template<typename __data_src_t>
void febex_subev::__unpack(__data_src_t &__buffer)
{
  // if(0)

  if (0)
  {
    // wr = TIMESTAMP_WHITERABBIT(id=0x400);
    UNPACK_DECL(316,TIMESTAMP_WHITERABBIT,wr,/*id*/0x400);
  }
  // select several

    // padding = FEBEX_PADDING();
  for ( ; ; )
  {
    if (__buffer.empty()) break;
    int __match_no = 0;
    // optimized match 1: FEBEX_PADDING padding: (s32) => (0xfff00000,0xadd00000)
    {
    uint32 __match_peek;
    PEEK_FROM_BUFFER(323,uint32,__match_peek);
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
        CHECK_SPURIOUS_MATCH_DECL(322,spurious_match_abort_loop_0,FEBEX_PADDING);
        UNPACK_DECL(322,FEBEX_PADDING,padding);
        break;
    }
  }
  spurious_match_abort_loop_0:;
  // data = FEBEX_TRACES();
  UNPACK_DECL(326,FEBEX_TRACES,data);
}
FORCE_IMPL_DATA_SRC_FCN(void,febex_subev::__unpack);

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
  // trace = febex_subev(procid=60);
  // ignore_unknown_subevent;
{
  int __match_no = 0;
  MATCH_SUBEVENT_DECL(332,__match_no,1,((VES10_1_procid==60)),trace);
  if (!__match_no) return 0;
  switch (__match_no)
  {
    case 1:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(332,febex_subev,trace,0);
      UNPACK_SUBEVENT_DECL(332,0,febex_subev,trace);
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
