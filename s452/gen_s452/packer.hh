/** BEGIN_PACKER *******************************************************
 *
 * Event packer for AIDA_INFO.
 *
 * Do not edit - automatically generated.
 */

// AIDA_INFO(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_dest_t>
void PACKER_AIDA_INFO::__packer(__data_dest_t &__buffer,uint32 module_id
                                                       ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
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

  if ((((wordA.info_code == 2) || (wordA.info_code == 4)) || (wordA.info_code == 7)))
  {
    // ENCODE(ts_med APPEND_LIST,(value=wordA.info_field));

    // ENCODE(ts_high APPEND_LIST,(value=0));

    // ENCODE(adc APPEND_LIST,(value=0));

  }
  // if(((wordA.info_code == 5) || (wordA.info_code == 8)))

  if (((wordA.info_code == 5) || (wordA.info_code == 8)))
  {
    // ENCODE(ts_high APPEND_LIST,(value=wordA.info_field));

    // ENCODE(ts_med APPEND_LIST,(value=0));

    // ENCODE(adc APPEND_LIST,(value=0));

  }
  // if((wordA.info_code == 6))

  if ((wordA.info_code == 6))
  {
    // ENCODE(adc APPEND_LIST,(value=0));

    // ENCODE(ts_med APPEND_LIST,(value=wordA.info_field));

    // ENCODE(ts_high APPEND_LIST,(value=0));

  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,AIDA_INFO::__packer,uint32 module_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for AIDA_ADC.
 *
 * Do not edit - automatically generated.
 */

// AIDA_ADC(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_dest_t>
void PACKER_AIDA_ADC::__packer(__data_dest_t &__buffer,uint32 module_id,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
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

}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,AIDA_ADC::__packer,uint32 module_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for AIDA_MODULE.
 *
 * Do not edit - automatically generated.
 */

// AIDA_MODULE(module_id,module,channel,info,adc,ts_low,ts_med,ts_high)
template<typename __data_dest_t>
void PACKER_AIDA_MODULE::__packer(__data_dest_t &__buffer,uint32 module_id
                                                         ,raw_list_ii_zero_suppress<DATA8,DATA8,13000> &module
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
  {
    PACK_DECL(39,AIDA_INFO,i,/*module_id*/module_id,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(40,AIDA_ADC,d,/*module_id*/module_id,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,AIDA_MODULE::__packer,uint32 module_id);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for AIDA.
 *
 * Do not edit - automatically generated.
 */

// AIDA()
template<typename __data_dest_t>
void PACKER_AIDA::__packer(__data_dest_t &__buffer)
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
  {
    PACK_DECL(17,AIDA_MODULE,mod[0],/*module_id*/0,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(18,AIDA_MODULE,mod[1],/*module_id*/1,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(19,AIDA_MODULE,mod[2],/*module_id*/2,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(20,AIDA_MODULE,mod[3],/*module_id*/3,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(21,AIDA_MODULE,mod[4],/*module_id*/4,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(22,AIDA_MODULE,mod[5],/*module_id*/5,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(23,AIDA_MODULE,mod[6],/*module_id*/6,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(24,AIDA_MODULE,mod[7],/*module_id*/7,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(25,AIDA_MODULE,mod[8],/*module_id*/8,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(26,AIDA_MODULE,mod[9],/*module_id*/9,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(27,AIDA_MODULE,mod[10],/*module_id*/10,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
    PACK_DECL(28,AIDA_MODULE,mod[11],/*module_id*/11,/*module*/module,/*channel*/channel,/*info*/info,/*adc*/adc,/*ts_low*/ts_low,/*ts_med*/ts_med,/*ts_high*/ts_high);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,AIDA::__packer);

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
 * Event packer for EXT_GERMANIUM.
 *
 * Do not edit - automatically generated.
 */


/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FATIMA_QDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_QDC()
template<typename __data_dest_t>
void PACKER_FATIMA_QDC::__packer(__data_dest_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_QDC::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FATIMA_SCALER.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_SCALER()
template<typename __data_dest_t>
void PACKER_FATIMA_SCALER::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 scalers[16] ZERO_SUPPRESS_LIST);
  // UINT32 header NOENCODE
  // {
    //  0_31: h = CHECK(0x7a001000);
  // }
  // list(0<=index<16)

  {
    // UINT32 ch_data NOENCODE;
    // ENCODE(scalers[index],(value=ch_data));

  }
  // UINT32 trailer NOENCODE
  // {
    //  0_31: t = CHECK(0x7c000000);
  // }
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_SCALER::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FATIMA_TAMEX.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TAMEX()
template<typename __data_dest_t>
void PACKER_FATIMA_TAMEX::__packer(__data_dest_t &__buffer)
{
  // select several

    // dummy = DUMMY();
  {
    PACK_DECL(144,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_TAMEX::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FATIMA_TDC.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_TDC()
template<typename __data_dest_t>
void PACKER_FATIMA_TDC::__packer(__data_dest_t &__buffer)
{
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_TDC::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FATIMA_VME.
 *
 * Do not edit - automatically generated.
 */

// FATIMA_VME()
template<typename __data_dest_t>
void PACKER_FATIMA_VME::__packer(__data_dest_t &__buffer)
{
  // select optional

    // scaler = FATIMA_SCALER();
  {
    PACK_DECL(131,FATIMA_SCALER,scaler);
  }
  // select several

    // dummy = DUMMY();
  {
    PACK_DECL(135,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FATIMA_VME::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS()
template<typename __data_dest_t>
void PACKER_FRS::__packer(__data_dest_t &__buffer)
{
  // select several

    // dummy = DUMMY();
  {
    PACK_DECL(189,DUMMY,dummy);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FRS_FRS.
 *
 * Do not edit - automatically generated.
 */

// FRS_FRS()
template<typename __data_dest_t>
void PACKER_FRS_FRS::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  // UINT32 no NOENCODE;
  // if(((no & 0xffff0000) == 0x04400000))

  if (((no & 0xffff0000) == 0x04400000))
  {
    // list(0<=index<32)

    {
      // UINT32 ch_data NOENCODE;
      // ENCODE(scalers[index],(value=ch_data));

    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS_FRS::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for FRS_MAIN.
 *
 * Do not edit - automatically generated.
 */

// FRS_MAIN()
template<typename __data_dest_t>
void PACKER_FRS_MAIN::__packer(__data_dest_t &__buffer)
{
  // MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  // UINT32 no NOENCODE;
  // if((no == 0xbabababa))

  if ((no == 0xbabababa))
  {
    // UINT32 sc NOENCODE;
    // if(((sc & 0xffff0000) == 0x0c800000))

    if (((sc & 0xffff0000) == 0x0c800000))
    {
      // list(0<=index<32)

      {
        // UINT32 ch_data NOENCODE;
        // ENCODE(scalers[index],(value=ch_data));

      }
    }
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,FRS_MAIN::__packer);

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
 * Event packer for TRLOII_TPAT.
 *
 * Do not edit - automatically generated.
 */

// TRLOII_TPAT(id)
template<typename __data_dest_t>
void PACKER_TRLOII_TPAT::__packer(__data_dest_t &__buffer,uint32 id)
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
  // list(0<=index<(header.uint32_num / 3))

  {
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
  }
}
FORCE_IMPL_DATA_SRC_FCN_ARG(void,TRLOII_TPAT::__packer,uint32 id);

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
  PACK_DECL(365,TIMESTAMP_WHITERABBIT,ts,/*id*/0x700);
  // external data = EXT_AIDA();
  PACK_DECL(366,EXT_AIDA,data);
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
  PACK_DECL(395,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1600);
  // external data = EXT_FATIMA_TAMEX();
  PACK_DECL(396,EXT_FATIMA_TAMEX,data);
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
  PACK_DECL(388,TIMESTAMP_WHITERABBIT_EXTENDED,ts,/*id*/0x1500);
  // external data = EXT_FATIMA_VME();
  PACK_DECL(390,EXT_FATIMA_VME,data);
}
FORCE_IMPL_DATA_SRC_FCN(void,fatima_vme_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_frs_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_frs_subev)
template<typename __data_dest_t>
void PACKER_frs_frs_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // subev = FRS_FRS();
  {
    PACK_DECL(434,FRS_FRS,subev);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_frs_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_main_subev.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_main_subev)
template<typename __data_dest_t>
void PACKER_frs_main_subev::__packer(__data_dest_t &__buffer)
{
  // select several

    // subev = FRS_MAIN();
  {
    PACK_DECL(410,FRS_MAIN,subev);
  }
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_main_subev::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_subev1.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev1)
template<typename __data_dest_t>
void PACKER_frs_subev1::__packer(__data_dest_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  PACK_DECL(401,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  // subev = FRS();
  PACK_DECL(402,FRS,subev);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_subev1::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_subev4.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev4)
template<typename __data_dest_t>
void PACKER_frs_subev4::__packer(__data_dest_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  PACK_DECL(425,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  // subev = FRS();
  PACK_DECL(426,FRS,subev);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_subev4::__packer);

/** END_PACKER ********************************************************/
/** BEGIN_PACKER *******************************************************
 *
 * Event packer for frs_subev6.
 *
 * Do not edit - automatically generated.
 */

// SUBEVENT(frs_subev6)
template<typename __data_dest_t>
void PACKER_frs_subev6::__packer(__data_dest_t &__buffer)
{
  // ts = TIMESTAMP_WHITERABBIT(id=0x100);
  PACK_DECL(440,TIMESTAMP_WHITERABBIT,ts,/*id*/0x100);
  // subev = FRS();
  PACK_DECL(441,FRS,subev);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_subev6::__packer);

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
  // dummy = DUMMY();
  PACK_DECL(419,DUMMY,dummy);
  // tpat = TRLOII_TPAT(id=207);
  PACK_DECL(420,TRLOII_TPAT,tpat,/*id*/207);
}
FORCE_IMPL_DATA_SRC_FCN(void,frs_tpat_subev::__packer);

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
  PACK_DECL(372,TIMESTAMP_WHITERABBIT,ts,/*id*/0x400);
  // external data = EXT_GERMANIUM();
  PACK_DECL(374,EXT_GERMANIUM,data);
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
  PACK_DECL(381,TIMESTAMP_WHITERABBIT,ts,/*id*/0x500);
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
