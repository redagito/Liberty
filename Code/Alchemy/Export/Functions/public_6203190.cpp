#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202420);

PROC_DECLARE(0x6203190, internal_6203190, public_6203190);
extern "C" NAKED register_t __cdecl internal_6203190()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6202420
        UNREACHABLE_TRAP(0x6203190)
    }
}
