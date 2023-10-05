/***********************************************************************
 *
 * This file is autogenerated by ./tdcpm_parse_struct.pl
 *
 * Editing is useless.
 *
 **********************************************************************/

/* The headers declaring '...' (TODO: insert structure names!)
 * must be included before this file!
 */

#include "tdcpm_struct_info.h"

/**********************************************************************/

void tdcpm_declare_struct()
{
  tdcpm_struct_info *li_calt;
  tdcpm_struct_info_item *li_calt__k;
  tdcpm_struct_info_item *li_calt__m;

  tdcpm_struct_info *li_cale;
  tdcpm_struct_info_item *li_cale__k;
  tdcpm_struct_info_item *li_cale__m;

  tdcpm_struct_info *li_cal2;
  tdcpm_struct_info_item *li_cal2__a;
  tdcpm_struct_info_item *li_cal2__b;
  tdcpm_struct_info_item *li_cal2__c;
  tdcpm_struct_info_item *li_cal2__d;
  tdcpm_struct_info_item *li_cal2__e;
  tdcpm_struct_info_item *li_cal2__f;

  tdcpm_struct_info_item *gi__cal_det_r;
  tdcpm_struct_info_item *gi__cal_det_s;
  tdcpm_struct_info_item *gi__cal_det_t;

  li_calt = TDCPM_STRUCT(calt, "calt");

  li_calt__k = TDCPM_STRUCT_ITEM_DOUBLE(li_calt, calt, _k, "k", "ns/ch");
  li_calt__m = TDCPM_STRUCT_ITEM_DOUBLE(li_calt, calt, _m, "m", "ns");

  (void) li_calt;
  (void) li_calt__k;
  (void) li_calt__m;

  li_cale = TDCPM_STRUCT(cale, "cale");

  li_cale__k = TDCPM_STRUCT_ITEM_DOUBLE(li_cale, cale, _k, "k", "10 MeV/ch");
  li_cale__m = TDCPM_STRUCT_ITEM_DOUBLE(li_cale, cale, _m, "m", "10 MeV");

  (void) li_cale;
  (void) li_cale__k;
  (void) li_cale__m;

  li_cal2 = TDCPM_STRUCT(cal2, "cal2");

  li_cal2__a = TDCPM_STRUCT_ITEM_DOUBLE(li_cal2, cal2, _a, "a", "");
  li_cal2__b = TDCPM_STRUCT_ITEM_DOUBLE(li_cal2, cal2, _b, "b", "");
  /*        */ TDCPM_STRUCT_ITEM_ARRAY(li_cal2__b, cal2, _b);
  li_cal2__c = TDCPM_STRUCT_ITEM_DOUBLE(li_cal2, cal2, _c, "c", "");
  /*        */ TDCPM_STRUCT_ITEM_ARRAY(li_cal2__c, cal2, _c);
  /*        */ TDCPM_STRUCT_ITEM_ARRAY(li_cal2__c, cal2, _c[0]);
  li_cal2__d = TDCPM_STRUCT_ITEM_STRUCT(li_cal2, cal2, _d, "d", li_calt);
  li_cal2__e = TDCPM_STRUCT_ITEM_STRUCT(li_cal2, cal2, _e, "e", li_cale);
  /*        */ TDCPM_STRUCT_ITEM_ARRAY(li_cal2__e, cal2, _e);
  li_cal2__f = TDCPM_STRUCT_ITEM_STRUCT(li_cal2, cal2, _f, "f", li_cale);
  /*        */ TDCPM_STRUCT_ITEM_ARRAY(li_cal2__f, cal2, _f);
  /*        */ TDCPM_STRUCT_ITEM_ARRAY(li_cal2__f, cal2, _f[0]);

  (void) li_cal2;
  (void) li_cal2__a;
  (void) li_cal2__b;
  (void) li_cal2__c;
  (void) li_cal2__d;
  (void) li_cal2__e;
  (void) li_cal2__f;

  gi__cal_det_r = TDCPM_STRUCT_INSTANCE(_cal_det_r, "r", li_cal2);
  gi__cal_det_s = TDCPM_STRUCT_INSTANCE(_cal_det_s, "s", li_calt);
  /*           */ TDCPM_STRUCT_INSTANCE_ARRAY(gi__cal_det_s, _cal_det_s);
  gi__cal_det_t = TDCPM_STRUCT_INSTANCE(_cal_det_t, "t", li_cal2);
  /*           */ TDCPM_STRUCT_INSTANCE_ARRAY(gi__cal_det_t, _cal_det_t);
  /*           */ TDCPM_STRUCT_INSTANCE_ARRAY(gi__cal_det_t, _cal_det_t[0]);

  (void) gi__cal_det_r;
  (void) gi__cal_det_s;
  (void) gi__cal_det_t;

}

/**********************************************************************/
