#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_450190);

PROC_DECLARE(0x4502a0, internal_4502a0, public_4502a0);
extern "C" NAKED register_t __cdecl internal_4502a0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x14
        jmp public_450190
        UNREACHABLE_TRAP(0x4502a0)
    }
}
