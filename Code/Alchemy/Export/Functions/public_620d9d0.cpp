#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620db20);

PROC_DECLARE(0x620d9d0, internal_620d9d0, public_620d9d0);
extern "C" NAKED register_t __cdecl internal_620d9d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620db20
        UNREACHABLE_TRAP(0x620d9d0)
    }
}
