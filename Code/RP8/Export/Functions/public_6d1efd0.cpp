#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ed90);

PROC_DECLARE(0x6d1efd0, internal_6d1efd0, public_6d1efd0);
extern "C" NAKED register_t __cdecl internal_6d1efd0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0x14
        jmp public_6d1ed90
        UNREACHABLE_TRAP(0x6d1efd0)
    }
}
