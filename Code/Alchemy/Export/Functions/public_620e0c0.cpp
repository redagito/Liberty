#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e0c0, internal_620e0c0, public_620e0c0);
extern "C" NAKED register_t __cdecl internal_620e0c0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e0c0)
    }
}
