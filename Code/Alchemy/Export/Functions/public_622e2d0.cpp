#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ed20);

PROC_DECLARE(0x622e2d0, internal_622e2d0, public_622e2d0);
extern "C" NAKED register_t __cdecl internal_622e2d0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ed20
        UNREACHABLE_TRAP(0x622e2d0)
    }
}
