#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621daa0);

PROC_DECLARE(0x621daa0, internal_621daa0, public_621daa0);
extern "C" NAKED register_t __cdecl internal_621daa0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x90]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621daa0)
    }
}
