#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a2f0, internal_6f4a2f0, public_6f4a2f0);
extern "C" NAKED register_t __cdecl internal_6f4a2f0()
{
    __asm
    {
        lea eax, ds:[ecx+0x84]
        ret 
        UNREACHABLE_TRAP(0x6f4a2f0)
    }
}
