#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);

PROC_DECLARE(0x6263b10, internal_6263b10, public_6263b10);
extern "C" NAKED register_t __cdecl internal_6263b10()
{
    __asm
    {
        push 4
        lea eax, ss:[esp+8]
        push eax
        call public_6312890
        ret 4
        UNREACHABLE_TRAP(0x6263b10)
    }
}
