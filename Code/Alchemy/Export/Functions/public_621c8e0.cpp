#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c8e0, internal_621c8e0, public_621c8e0);
extern "C" NAKED register_t __cdecl internal_621c8e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x108]
        inc ecx
        mov dword ptr ds : [eax+0x108], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x621c8e0)
    }
}
