#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223f00);
CLANG_FORWARD_PROC_SYMBOL(public_62400f0);

PROC_DECLARE(0x6223f00, internal_6223f00, public_6223f00);
extern "C" NAKED register_t __cdecl internal_6223f00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_62400f0
        UNREACHABLE_TRAP(0x6223f00)
    }
}
