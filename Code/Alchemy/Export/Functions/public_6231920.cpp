#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231920);
CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

PROC_DECLARE(0x6231920, internal_6231920, public_6231920);
extern "C" NAKED register_t __cdecl internal_6231920()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623fb50
        UNREACHABLE_TRAP(0x6231920)
    }
}
