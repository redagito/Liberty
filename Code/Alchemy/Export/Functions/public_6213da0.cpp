#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213b00);

PROC_DECLARE(0x6213da0, internal_6213da0, public_6213da0);
extern "C" NAKED register_t __cdecl internal_6213da0()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6213b00
        UNREACHABLE_TRAP(0x6213da0)
    }
}
