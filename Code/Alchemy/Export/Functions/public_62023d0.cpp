#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62023d0);
CLANG_FORWARD_PROC_SYMBOL(public_62274b0);

PROC_DECLARE(0x62023d0, internal_62023d0, public_62023d0);
extern "C" NAKED register_t __cdecl internal_62023d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_62274b0
        UNREACHABLE_TRAP(0x62023d0)
    }
}
