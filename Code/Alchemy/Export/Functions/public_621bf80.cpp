#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621bf80);
CLANG_FORWARD_PROC_SYMBOL(public_6245b00);

PROC_DECLARE(0x621bf80, internal_621bf80, public_621bf80);
extern "C" NAKED register_t __cdecl internal_621bf80()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_6245b00
        UNREACHABLE_TRAP(0x621bf80)
    }
}
