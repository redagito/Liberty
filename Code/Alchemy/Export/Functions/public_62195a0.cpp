#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62195a0);
CLANG_FORWARD_PROC_SYMBOL(public_6244580);

PROC_DECLARE(0x62195a0, internal_62195a0, public_62195a0);
extern "C" NAKED register_t __cdecl internal_62195a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244580
        UNREACHABLE_TRAP(0x62195a0)
    }
}
