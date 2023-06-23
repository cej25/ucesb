#include "structures.hh"
#include <math.h>
#include <stdint.h>

void map_unpack_raw_frs(EXT_FRS &unpack, raw_list_ii_zero_suppress<frs_item, frs_item, 30> &frs) // 30=FRS_MAX_HITS // do we need DATA12 &tss or whatever?
{
    bitsone_iterator iter;
    int i;

    std::cout << unpack.scaler_frs[0] << std::endl;


}