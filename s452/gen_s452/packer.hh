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
 * Event packer for aida_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(aida_subev)
template<typename __data_dest_t>
void PACKER_aida_subev::__packer(__data_dest_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x700);
  PACK_DECL(118,TIMESTAMP_WHITERABBIT,ts,/*id*/0x700);
  // external data = EXT_AIDA();
  PACK_DECL(119,EXT_AIDA,data);
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
  // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
  PACK_DECL(136,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1600);
  // external data = EXT_FATIMA_TAMEX();
  PACK_DECL(137,EXT_FATIMA_TAMEX,data);
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
  // ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
  PACK_DECL(130,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1500);
  // external data = EXT_FATIMA_VME();
  PACK_DECL(131,EXT_FATIMA_VME,data);
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
  // external data = EXT_FRS(procid=30,type=12,subtype=1);
  PACK_DECL(171,EXT_FRS,data,/*procid*/30,/*type*/12,/*subtype*/1);
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
  // external data = EXT_FRS(procid=10,type=12,subtype=1);
  PACK_DECL(161,EXT_FRS,data,/*procid*/10,/*type*/12,/*subtype*/1);
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
  // external data = EXT_FRS(procid=35,type=12,subtype=1);
  PACK_DECL(182,EXT_FRS,data,/*procid*/35,/*type*/12,/*subtype*/1);
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
  // external data = EXT_FRS(procid=10,type=36,subtype=0xe10);
  PACK_DECL(166,EXT_FRS,data,/*procid*/10,/*type*/36,/*subtype*/0xe10);
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
  // external data = EXT_FRS(procid=20,type=12,subtype=1);
  PACK_DECL(176,EXT_FRS,data,/*procid*/20,/*type*/12,/*subtype*/1);
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
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  PACK_DECL(156,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
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
  // ts = TIMESTAMP_WHITERABBIT(id=0x400);
  PACK_DECL(124,TIMESTAMP_WHITERABBIT,ts,/*id*/0x400);
  // external data = EXT_GERMANIUM();
  PACK_DECL(125,EXT_GERMANIUM,data);
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
  // ts = TIMESTAMP_WHITERABBIT(id=0x500);
  PACK_DECL(142,TIMESTAMP_WHITERABBIT,ts,/*id*/0x500);
  // if(0)

  // else

  if (0)
  {
    // external data_tp = EXT_PLASTIC_TP();
    PACK_DECL(145,EXT_PLASTIC_TP,data_tp);
  }

  else
  {
    // external data = EXT_PLASTIC();
    PACK_DECL(149,EXT_PLASTIC,data);
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
  // germanium = germanium_subev(type=10,subtype=1,procid=60,control=20,
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
