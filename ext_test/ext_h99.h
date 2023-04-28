/********************************************************
 *
 * Structure for ext_data_fetch_event() filling.
 *
 * Do not edit - automatically generated.
 */

#ifndef __GUARD_ALL_EXT_TEST_EXT_H99_H__
#define __GUARD_ALL_EXT_TEST_EXT_H99_H__

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

typedef struct EXT_STR_h99_t
{
  /* DEF */
  int32_t  a /* [-1,-1] */;
  float    c /* [-1,-1] */;
  int32_t  b /* [-1,-1] */;
  float    d[4 EXT_STRUCT_CTRL(b)] /* [-1,-1] */;
  float    e[7] /* [-1,-1] */;

} EXT_STR_h99;

/********************************************************
 *
 * Structure with multiple levels of arrays (partially)
 * recovered (recommended):
 */

typedef struct EXT_STR_h99_onion_t
{
  /* DEF */
  int32_t  a;
  float    c;
  int32_t  b;
  float    d[4 /* b */];
  float    e[7 /* _ */];

} EXT_STR_h99_onion;

/*******************************************************/

#define EXT_STR_h99_ITEMS_INFO(ok,si,offset,struct_t,printerr) do { \
  ok = 1; \
  /* DEF */ \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     a,                               INT32,\
                    "a"); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     c,                               FLOAT32,\
                    "c"); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     b,                               INT32,\
                    "b"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     d,                               FLOAT32,\
                    "d",                               "b"); \
  EXT_STR_ITEM_INFO_ZZP(ok,si,offset,struct_t,printerr,\
                     e,                               FLOAT32,\
                    "e",7); \
  \
} while (0);

/********************************************************
 *
 * For internal use by the network data reader:
 * (version checks, etc)
 */

typedef struct EXT_STR_h99_layout_t
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
  uint32_t _pack_list[30];
} EXT_STR_h99_layout;

#define EXT_STR_h99_LAYOUT_INIT { \
  0x57e65c97, \
  sizeof(EXT_STR_h99_layout), \
  sizeof(EXT_STR_h99), \
  sizeof(EXT_STR_h99_onion), \
  30, \
  1, \
  { \
    { 0, sizeof(EXT_STR_h99), 0x0a500fd5, "h99" }, \
  }, \
  { \
   /*    0 */ 0x40a50000, 0x00000000, 0x00a50000, 0x00000004, \
   /*    4 */ 0xc0a50000, 0x00000008, 0x00000004, 0x00000001, \
   /*    8 */ 0x00a50000, 0x0000000c, 0x00a50000, 0x00000010, \
   /*   12 */ 0x00a50000, 0x00000014, 0x00a50000, 0x00000018, \
   /*   16 */ 0x00a50000, 0x0000001c, 0x00a50000, 0x00000020, \
   /*   20 */ 0x00a50000, 0x00000024, 0x00a50000, 0x00000028, \
   /*   24 */ 0x00a50000, 0x0000002c, 0x00a50000, 0x00000030, \
   /*   28 */ 0x00a50000, 0x00000034, \
  } \
};

/********************************************************
 *
 * Plain structure (layout as ntuple/root file):
 */

typedef struct EXT_STR_h98_t
{
  /* DEF */
  int32_t  g /* [-1,-1] */;
  float    h /* [-1,-1] */;

} EXT_STR_h98;

/********************************************************
 *
 * Structure with multiple levels of arrays (partially)
 * recovered (recommended):
 */

typedef struct EXT_STR_h98_onion_t
{
  /* DEF */
  int32_t  g;
  float    h;

} EXT_STR_h98_onion;

/*******************************************************/

#define EXT_STR_h98_ITEMS_INFO(ok,si,offset,struct_t,printerr) do { \
  ok = 1; \
  /* DEF */ \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     g,                               INT32,\
                    "g"); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     h,                               FLOAT32,\
                    "h"); \
  \
} while (0);

/********************************************************
 *
 * For internal use by the network data reader:
 * (version checks, etc)
 */

typedef struct EXT_STR_h98_layout_t
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
  uint32_t _pack_list[4];
} EXT_STR_h98_layout;

#define EXT_STR_h98_LAYOUT_INIT { \
  0x57e65c97, \
  sizeof(EXT_STR_h98_layout), \
  sizeof(EXT_STR_h98), \
  sizeof(EXT_STR_h98_onion), \
  4, \
  1, \
  { \
    { 0, sizeof(EXT_STR_h98), 0x5a5a5cac, "h98" }, \
  }, \
  { \
   /*    0 */ 0x40a50000, 0x00000000, 0x00a50000, 0x00000004, \
  } \
};

#endif/*__GUARD_ALL_EXT_TEST_EXT_H99_H__*/

/*******************************************************/
