#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f7c0);

PROC_DECLARE(0x6f40330, internal_6f40330, public_6f40330);
extern "C" NAKED register_t __cdecl internal_6f40330()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6f3f7c0
        UNREACHABLE_TRAP(0x6f40330)
    }
}
