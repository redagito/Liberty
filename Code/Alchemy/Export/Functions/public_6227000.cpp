#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227000);

PROC_DECLARE(0x6227000, internal_6227000, public_6227000);
extern "C" NAKED register_t __cdecl internal_6227000()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x98]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6227000)
    }
}
