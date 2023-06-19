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
 * Event packer for FEBEX_PADDING.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_PADDING()
template<typename __data_dest_t>
void PACKER_FEBEX_PADDING::__packer(__data_dest_t &__buffer)
{
  // UINT32 pads_data NOENCODE
  // {
    //  0_11: counter;
    // 12_19: index;
    // 20_31: 0xadd;
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_PADDING::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FEBEX_TRACES.
 *
 * Do not edit - automatically generated.
 */

// FEBEX_TRACES()
template<typename __data_dest_t>
void PACKER_FEBEX_TRACES::__packer(__data_dest_t &__buffer)
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
  // UINT32 febex_chan_size NOENCODE
  // {
    //  0_01: ignore;
    //  2_31: size;
  // }
  // UINT32 febex_half_time NOENCODE
  // {
    //  0_15: ext_time;
    // 16_31: other;
    // ENCODE(ftrig_time_hi,(value=ext_time));
  // }
  // UINT32 febex_event_time NOENCODE
  // {
    //  0_31: time;
    // ENCODE(ftrig_time_lo,(value=time));
  // }
  // UINT32 febex_flags NOENCODE
  // {
    //  0_15: hit_pattern;
    // 16_31: pile_flags;
  // }
  // UINT32 deadbeef NOENCODE
  // {
    //  0_31: 0xdeadbeef;
  // }
  // if((FF_header.trigger_type == 3))

  // else

  if ((FF_header.trigger_type == 3))
  {
    // list(0<=i<16)

    {
      // UINT32 pulse_header NOENCODE
      // {
        //  0_07: 52;
        //  8_31: stuff;
      // }
      // UINT32 pulse_trace_size NOENCODE
      // {
        //  0_31: size;
      // }
      // UINT32 pulse_trace_header NOENCODE
      // {
        //  0_31: head;
      // }
      // UINT32 pulse_trace_trailer NOENCODE
      // {
        //  0_31: trailer;
      // }
    }
  }

  else
  {
    // list(0<=i<((febex_chan_size.size / 4) - 1))

    {
      // UINT32 F0_header NOENCODE
      // {
        //  0_15: ext_chan_ts;
        // 16_23: ch_id;
        // 24_31: 240;
        // ENCODE(fts_hi[i],(value=ext_chan_ts));
      // }
      // UINT32 febex_chan_ts NOENCODE
      // {
        //  0_31: chan_ts;
        // ENCODE(fts_lo[i],(value=chan_ts));
      // }
      // UINT32 febex_chan_en NOENCODE
      // {
        //  0_23: chan_en;
        // 24_29: cf;
        //    30: pileup;
        //    31: overflow;
        // ENCODE(fen[F0_header.ch_id],(value=chan_en));
      // }
      // UINT32 future_use NOENCODE
      // {
        //  0_31: future;
      // }
    }
    // list(0<=i<16)

    {
      // UINT32 header NOENCODE
      // {
        //  0_07: 52;
        //  8_23: other;
        // 24_31: ch_id;
      // }
      // UINT32 tracesize NOENCODE
      // {
        //  0_31: size;
      // }
      // UINT32 tracehead NOENCODE
      // {
        //  0_23: other;
        // 24_31: head;
      // }
      // ENCODE(flength[header.ch_id],(value=((tracesize.size / 2) - 4)));

      // list(0<=j<((tracesize.size / 4) - 2))

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
      }
      // UINT32 trace_trailer NOENCODE
      // {
        //  0_23: notused;
        // 24_31: id = RANGE(176,191);
      // }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FEBEX_TRACES::__packer);

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
 * Event packer for febex_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(febex_subev)
template<typename __data_dest_t>
void PACKER_febex_subev::__packer(__data_dest_t &__buffer)
{
  // if(0)

  if (0)
  {
    // wr = TIMESTAMP_WHITERABBIT(id=0x400);
    PACK_DECL(316,TIMESTAMP_WHITERABBIT,wr,/*id*/0x400);
  }
  // select several

    // padding = FEBEX_PADDING();
  {
    PACK_DECL(322,FEBEX_PADDING,padding);
  }
  // data = FEBEX_TRACES();
  PACK_DECL(326,FEBEX_TRACES,data);
}
FORCE_IMPL_DATA_SRC_FCN(void,febex_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
  // trace = febex_subev(procid=60);
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
