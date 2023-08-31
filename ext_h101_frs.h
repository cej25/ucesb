/********************************************************
 *
 * Structure for ext_data_fetch_event() filling.
 *
 * Do not edit - automatically generated.
 */

#ifndef __GUARD_h101_frs_EXT_h101_frs_FRS_H__
#define __GUARD_h101_frs_EXT_h101_frs_FRS_H__

#ifndef __CINT__
# include <stdint.h>
#else
/* For CINT (old version trouble with stdint.h): */
# ifndef uint32_t
typedef unsigned int uint32_t;
typedef          int  int32_t;
# endif
#endif
#ifndef EXT_STRUCT_CTRL
# define EXT_STRUCT_CTRL(x)
#endif

/********************************************************
 *
 * Plain structure (layout as ntuple/root file):
 */

typedef struct EXT_STR_h101_frs_t
{
  /* INFO */
  uint32_t TRIGGER /* [0,15] */;
  uint32_t EVENTNO /* [-1,-1] */;
  /* UNPACK */
  uint32_t frs_tpc_crate_data_frs_info /* [0,1] */;
  float    frs_tpc_crate_data_frs_info_id_z[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_AoQ_corr[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_a2[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_a4[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_x2[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_x4[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_beta[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_brho0[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_tpc_crate_data_frs_info_id_brho1[1 EXT_STRUCT_CTRL(frs_tpc_crate_data_frs_info)] /* [-1,-1] */;
  uint32_t frs_crate_data_frs_info /* [0,1] */;
  float    frs_crate_data_frs_info_id_z[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_AoQ_corr[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_a2[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_a4[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_x2[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_x4[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_beta[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_brho0[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;
  float    frs_crate_data_frs_info_id_brho1[1 EXT_STRUCT_CTRL(frs_crate_data_frs_info)] /* [-1,-1] */;

} EXT_STR_h101_frs;

/********************************************************
 *
 * Structure with multiple levels of arrays (partially)
 * recovered (recommended):
 */

typedef struct EXT_STR_h101_frs_onion_t
{
  /* INFO */
  uint32_t TRIGGER;
  uint32_t EVENTNO;
  /* UNPACK */
  uint32_t frs_tpc_crate_data_frs_info;
  float    frs_tpc_crate_data_frs_info_id_z[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_AoQ_corr[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_a2[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_a4[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_x2[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_x4[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_beta[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_brho0[1 /* frs_tpc_crate_data_frs_info */];
  float    frs_tpc_crate_data_frs_info_id_brho[1][1 /* frs_tpc_crate_data_frs_info */];
  uint32_t frs_crate_data_frs_info;
  float    frs_crate_data_frs_info_id_z[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_AoQ_corr[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_a2[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_a4[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_x2[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_x4[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_beta[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_brho0[1 /* frs_crate_data_frs_info */];
  float    frs_crate_data_frs_info_id_brho[1][1 /* frs_crate_data_frs_info */];

} EXT_STR_h101_frs_onion;

/*******************************************************/

#define EXT_STR_h101_frs_ITEMS_INFO(ok,si,offset,struct_t,printerr) do { \
  ok = 1; \
  /* INFO */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,offset,struct_t,printerr,\
                     TRIGGER,                         UINT32,\
                    "TRIGGER",15); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     EVENTNO,                         UINT32,\
                    "EVENTNO"); \
  /* UNPACK */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info,     UINT32,\
                    "frs_tpc_crate_data_frs_info",1); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_z,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_z","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_AoQ_corr,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_AoQ_corr","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_a2,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_a2","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_a4,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_a4","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_x2,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_x2","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_x4,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_x4","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_beta,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_beta","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_brho0,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_brho0","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_tpc_crate_data_frs_info_id_brho1,FLOAT32,\
                    "frs_tpc_crate_data_frs_info_id_brho1","frs_tpc_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_LIM(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info,         UINT32,\
                    "frs_crate_data_frs_info",1); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_z,    FLOAT32,\
                    "frs_crate_data_frs_info_id_z",    "frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_AoQ_corr,FLOAT32,\
                    "frs_crate_data_frs_info_id_AoQ_corr","frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_a2,   FLOAT32,\
                    "frs_crate_data_frs_info_id_a2",   "frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_a4,   FLOAT32,\
                    "frs_crate_data_frs_info_id_a4",   "frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_x2,   FLOAT32,\
                    "frs_crate_data_frs_info_id_x2",   "frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_x4,   FLOAT32,\
                    "frs_crate_data_frs_info_id_x4",   "frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_beta, FLOAT32,\
                    "frs_crate_data_frs_info_id_beta", "frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_brho0,FLOAT32,\
                    "frs_crate_data_frs_info_id_brho0","frs_crate_data_frs_info"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     frs_crate_data_frs_info_id_brho1,FLOAT32,\
                    "frs_crate_data_frs_info_id_brho1","frs_crate_data_frs_info"); \
  \
} while (0);

/********************************************************
 *
 * For internal use by the network data reader:
 * (version checks, etc)
 */

typedef struct EXT_STR_h101_frs_layout_t
{
  uint32_t _magic;
  uint32_t _size_info;
  uint32_t _size_struct;
  uint32_t _size_struct_onion;
  uint32_t _pack_list_items;

  uint32_t _num_items;
  struct {
    uint32_t _offset;
    uint32_t _size;
    uint32_t _xor;
    const char *_name;
  } _items[1];
  uint32_t _pack_list[48];
} EXT_STR_h101_frs_layout;

#define EXT_STR_h101_frs_LAYOUT_INIT { \
  0x57e65c97, \
  sizeof(EXT_STR_h101_frs_layout), \
  sizeof(EXT_STR_h101_frs), \
  sizeof(EXT_STR_h101_frs_onion), \
  48, \
  1, \
  { \
    { 0, sizeof(EXT_STR_h101_frs), 0x4663a757, "h101" }, \
  }, \
  { \
   /*    0 */ 0x40a52000, 0x00000000, 0x40a52000, 0x00000004, \
   /*    4 */ 0xc0a50000, 0x00000008, 0x00000001, 0x00000009, \
   /*    8 */ 0x00a50000, 0x0000000c, 0x00a50000, 0x00000010, \
   /*   12 */ 0x00a50000, 0x00000014, 0x00a50000, 0x00000018, \
   /*   16 */ 0x00a50000, 0x0000001c, 0x00a50000, 0x00000020, \
   /*   20 */ 0x00a50000, 0x00000024, 0x00a50000, 0x00000028, \
   /*   24 */ 0x00a50000, 0x0000002c, 0xc0a50000, 0x00000030, \
   /*   28 */ 0x00000001, 0x00000009, 0x00a50000, 0x00000034, \
   /*   32 */ 0x00a50000, 0x00000038, 0x00a50000, 0x0000003c, \
   /*   36 */ 0x00a50000, 0x00000040, 0x00a50000, 0x00000044, \
   /*   40 */ 0x00a50000, 0x00000048, 0x00a50000, 0x0000004c, \
   /*   44 */ 0x00a50000, 0x00000050, 0x00a50000, 0x00000054, \
  } \
};

#endif/*__GUARD_h101_frs_EXT_h101_frs_FRS_H__*/

/*******************************************************/
