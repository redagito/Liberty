#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a4d0, internal_6f4a4d0, public_6f4a4d0);
extern "C" NAKED register_t __cdecl internal_6f4a4d0()
{
    __asm
    {
        mov eax, offset public_6f60240
        ret 
        UNREACHABLE_TRAP(0x6f4a4d0)
    }
}
