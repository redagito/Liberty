#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f73b0);

PROC_DECLARE(0x4f73b0, internal_4f73b0, public_4f73b0);
extern "C" NAKED register_t __cdecl internal_4f73b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_674f18]
        mov dword ptr ds : [public_674f1c], eax
        ret 
        UNREACHABLE_TRAP(0x4f73b0)
    }
}
