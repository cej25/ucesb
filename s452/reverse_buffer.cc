#include "reverse_buffer.hh"

EXT_REVERSE_BUFFER::EXT_REVERSE_BUFFER()
{
   // __clean();
}

EXT_REVERSE_BUFFER::~EXT_REVERSE_BUFFER()
{
}

void EXT_REVERSE_BUFFER::__clean()
{
    //febex_info.__clean();
}

EXT_DECL_DATA_SRC_FCN(void, EXT_REVERSE_BUFFER::__unpack)
{
    __buffer.reverse(4);
}

EXT_FORCE_IMPL_DATA_SRC_FCN(void, EXT_REVERSE_BUFFER::__unpack);