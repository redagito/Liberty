#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223ee0);

PROC_DECLARE(0x6224400, internal_6224400, public_6224400);
extern "C" NAKED register_t __cdecl internal_6224400()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6223ee0
        UNREACHABLE_TRAP(0x6224400)
    }
}
