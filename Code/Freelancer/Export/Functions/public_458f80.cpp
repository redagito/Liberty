#include "Freelancer-PCH.h"

PROC_DECLARE(0x458f80, internal_458f80, public_458f80);
extern "C" NAKED register_t __cdecl internal_458f80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce7b4]
        mov dword ptr ds : [public_66d328], eax
        ret 
        UNREACHABLE_TRAP(0x458f80)
    }
}
