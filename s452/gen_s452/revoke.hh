/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// EVENT
int unpack_event::__revoke_subevent(subevent_header *__header)
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
      REVOKE_SUBEVENT_DECL(451,0,germanium_subev,germanium);
      break;
    case 2:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(453,fatima_vme_subev,fatima_vme,1);
      REVOKE_SUBEVENT_DECL(453,0,fatima_vme_subev,fatima_vme);
      break;
    case 3:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(454,fatima_tamex_subev,fatima_tamex,2);
      REVOKE_SUBEVENT_DECL(454,0,fatima_tamex_subev,fatima_tamex);
      break;
    case 4:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(455,aida_subev,aida,3);
      REVOKE_SUBEVENT_DECL(455,0,aida_subev,aida);
      break;
    case 5:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(459,frs_main_subev,frs_main,4);
      REVOKE_SUBEVENT_DECL(459,0,frs_main_subev,frs_main);
      break;
    case 6:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(460,frs_tpat_subev,frs_tpat,5);
      REVOKE_SUBEVENT_DECL(460,0,frs_tpat_subev,frs_tpat);
      break;
    case 7:
      UNPACK_SUBEVENT_CHECK_NO_REVISIT(462,frs_frs_subev,frs_frs,6);
      REVOKE_SUBEVENT_DECL(462,0,frs_frs_subev,frs_frs);
      break;
  }
  return 0;
}

/** END_REVOKE ********************************************************/
/** BEGIN_REVOKE *******************************************************
 *
 * Event revoker for EVENT.
 *
 * Do not edit - automatically generated.
 */

// STICKY_EVENT
int unpack_sticky_event::__revoke_subevent(subevent_header *__header)
{
  int __match_no = 0;
  if (!__match_no) return 0;
  switch (__match_no)
  {
  }
  return 0;
}

/** END_REVOKE ********************************************************/
