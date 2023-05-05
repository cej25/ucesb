#ifndef _DESPEC_SETUP_
#define _DESPEC_SETUP_

// general
#define NO_UINT64 1 // define until uint64 unpacking is supported 

// aida
#define AIDA_MAX_FEES 12
#define AIDA_MAX_HITS 13000 // 13k?

// germaniums
#define GE_MAX_DETS 4
#define GE_MAX_CRYSTALS 7
#define GE_MAX_HITS (GE_MAX_DETS * GE_MAX_CRYSTALS)
#define GE_FEBEX_MODULES 2
#define GE_MAX_CHANNELS 49

// fatima vme
#define SCALER_MODULE_ON 1
#define FAT_TDC_NUMBER 2
#define FAT_MAX_VME_CHANNELS 51
#define FAT_MAX_HITS 1000 // made up for now lol
#define MAX_AM_DETS_VME 60
#define MAX_SCALERS_VME 32

// fatima tamex
#define MAX_CHA_INPUT 33

// bplast tamex
#define PLASTIC_MAX_HITS 1000 // made up for now
// this never goes over 3. Was initially 100.
#define PLASTIC_MAX_ITER 3

// frs


#endif /* _DESPEC_SETUP_ */
