#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236b40);
CLANG_FORWARD_PROC_SYMBOL(public_623ffb0);

PROC_DECLARE(0x6236b40, internal_6236b40, public_6236b40);
extern "C" NAKED register_t __cdecl internal_6236b40()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623ffb0
        UNREACHABLE_TRAP(0x6236b40)
    }
}
