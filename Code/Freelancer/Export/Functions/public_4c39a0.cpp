#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c39a0, internal_4c39a0, public_4c39a0);
extern "C" NAKED register_t __cdecl internal_4c39a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6cc0]
        mov dword ptr ds : [public_67333c], eax
        ret 
        UNREACHABLE_TRAP(0x4c39a0)
    }
}
