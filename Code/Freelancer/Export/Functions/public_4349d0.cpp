#include "Freelancer-PCH.h"

PROC_DECLARE(0x4349d0, internal_4349d0, public_4349d0);
extern "C" NAKED register_t __cdecl internal_4349d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cada4]
        mov dword ptr ds : [public_668694], eax
        ret 
        UNREACHABLE_TRAP(0x4349d0)
    }
}
