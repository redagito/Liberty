#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2f430);

PROC_DECLARE(0x6c2f460, internal_6c2f460, public_6c2f460);
extern "C" NAKED register_t __cdecl internal_6c2f460()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6c2f430
        UNREACHABLE_TRAP(0x6c2f460)
    }
}
