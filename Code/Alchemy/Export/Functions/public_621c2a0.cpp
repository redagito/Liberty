#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c2a0, internal_621c2a0, public_621c2a0);
extern "C" NAKED register_t __cdecl internal_621c2a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x90]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x621c2a0)
    }
}
