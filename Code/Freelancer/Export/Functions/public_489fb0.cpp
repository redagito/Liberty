#include "Freelancer-PCH.h"

PROC_DECLARE(0x489fb0, internal_489fb0, public_489fb0);
extern "C" NAKED register_t __cdecl internal_489fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d24b0]
        mov dword ptr ds : [public_671fec], eax
        ret 
        UNREACHABLE_TRAP(0x489fb0)
    }
}
