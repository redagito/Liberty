#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212240);

PROC_DECLARE(0x6211b00, internal_6211b00, public_6211b00);
extern "C" NAKED register_t __cdecl internal_6211b00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6212240
        UNREACHABLE_TRAP(0x6211b00)
    }
}
