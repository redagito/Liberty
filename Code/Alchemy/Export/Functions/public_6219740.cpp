#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218c20);

PROC_DECLARE(0x6219740, internal_6219740, public_6219740);
extern "C" NAKED register_t __cdecl internal_6219740()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6218c20
        UNREACHABLE_TRAP(0x6219740)
    }
}
