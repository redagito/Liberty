#include "Common-PCH.h"

PROC_DECLARE(0x6280fb0, internal_6280fb0, public_6280fb0);
extern "C" NAKED register_t __cdecl internal_6280fb0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x18]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6280fb0)
    }
}
