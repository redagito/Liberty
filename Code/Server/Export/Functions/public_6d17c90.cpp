#include "Server-PCH.h"

PROC_DECLARE(0x6d17c90, internal_6d17c90, public_6d17c90);
extern "C" NAKED register_t __cdecl internal_6d17c90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d685d0]
        mov dword ptr ds : [public_6d8e588], eax
        ret 
        UNREACHABLE_TRAP(0x6d17c90)
    }
}
