#include "Alchemy-PCH.h"

PROC_DECLARE(0x621a900, internal_621a900, public_621a900);
extern "C" NAKED register_t __cdecl internal_621a900()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x18], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x621a900)
    }
}
