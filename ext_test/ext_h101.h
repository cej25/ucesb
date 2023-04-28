/********************************************************
 *
 * Structure for ext_data_fetch_event() filling.
 *
 * Do not edit - automatically generated.
 */

#ifndef __GUARD_ALL_EXT_TEST_EXT_H101_H__
#define __GUARD_ALL_EXT_TEST_EXT_H101_H__

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

typedef struct EXT_STR_h101_t
{
  /* INFO */
  uint32_t TRIGGER /* [0,15] */;
  uint32_t EVENTNO /* [-1,-1] */;
  uint32_t STIDX /* [-1,-1] */;

} EXT_STR_h101;

/********************************************************
 *
 * Structure with multiple levels of arrays (partially)
 * recovered (recommended):
 */

typedef struct EXT_STR_h101_onion_t
{
  /* INFO */
  uint32_t TRIGGER;
  uint32_t EVENTNO;
  uint32_t STIDX;

} EXT_STR_h101_onion;

/*******************************************************/

#define EXT_STR_h101_ITEMS_INFO(ok,si,offset,struct_t,printerr) do { \
  ok = 1; \
  /* INFO */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,offset,struct_t,printerr,\
                     TRIGGER,                         UINT32,\
                    "TRIGGER",15); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     EVENTNO,                         UINT32,\
                    "EVENTNO"); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     STIDX,                           UINT32,\
                    "STIDX"); \
  \
} while (0);

/********************************************************
 *
 * For internal use by the network data reader:
 * (version checks, etc)
 */

typedef struct EXT_STR_h101_layout_t
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
  uint32_t _pack_list[6];
} EXT_STR_h101_layout;

#define EXT_STR_h101_LAYOUT_INIT { \
  0x57e65c97, \
  sizeof(EXT_STR_h101_layout), \
  sizeof(EXT_STR_h101), \
  sizeof(EXT_STR_h101_onion), \
  6, \
  1, \
  { \
    { 0, sizeof(EXT_STR_h101), 0x5a5eeef0, "h101" }, \
  }, \
  { \
   /*    0 */ 0x40a52000, 0x00000000, 0x40a52000, 0x00000004, \
   /*    4 */ 0x40a52000, 0x00000008, \
  } \
};

/********************************************************
 *
 * Plain structure (layout as ntuple/root file):
 */

typedef struct EXT_STR_hsticky_t
{
  /* INFO */
  uint32_t TRIGGER /* [0,15] */;
  uint32_t EVENTNO /* [-1,-1] */;
  uint32_t STIDX /* [-1,-1] */;

} EXT_STR_hsticky;

/********************************************************
 *
 * Structure with multiple levels of arrays (partially)
 * recovered (recommended):
 */

typedef struct EXT_STR_hsticky_onion_t
{
  /* INFO */
  uint32_t TRIGGER;
  uint32_t EVENTNO;
  uint32_t STIDX;

} EXT_STR_hsticky_onion;

/*******************************************************/

#define EXT_STR_hsticky_ITEMS_INFO(ok,si,offset,struct_t,printerr) do { \
  ok = 1; \
  /* INFO */ \
  EXT_STR_ITEM_INFO_LIM(ok,si,offset,struct_t,printerr,\
                     TRIGGER,                         UINT32,\
                    "TRIGGER",15); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     EVENTNO,                         UINT32,\
                    "EVENTNO"); \
  EXT_STR_ITEM_INFO    (ok,si,offset,struct_t,printerr,\
                     STIDX,                           UINT32,\
                    "STIDX"); \
  \
} while (0);

/********************************************************
 *
 * For internal use by the network data reader:
 * (version checks, etc)
 */

typedef struct EXT_STR_hsticky_layout_t
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
  uint32_t _pack_list[6];
} EXT_STR_hsticky_layout;

#define EXT_STR_hsticky_LAYOUT_INIT { \
  0x57e65c97, \
  sizeof(EXT_STR_hsticky_layout), \
  sizeof(EXT_STR_hsticky), \
  sizeof(EXT_STR_hsticky_onion), \
  6, \
  1, \
  { \
    { 0, sizeof(EXT_STR_hsticky), 0x5a5eeef0, "hsticky" }, \
  }, \
  { \
   /*    0 */ 0x40a52000, 0x00000000, 0x40a52000, 0x00000004, \
   /*    4 */ 0x40a52000, 0x00000008, \
  } \
};

#endif/*__GUARD_ALL_EXT_TEST_EXT_H101_H__*/

/*******************************************************/
