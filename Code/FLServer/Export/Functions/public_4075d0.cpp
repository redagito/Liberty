#include "FLServer-PCH.h"

PROC_DECLARE(0x4075d0, internal_4075d0, public_4075d0);
extern "C" NAKED register_t __cdecl internal_4075d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x4075d0)
    }
}
