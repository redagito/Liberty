#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ec70, internal_620ec70, public_620ec70);
extern "C" NAKED register_t __cdecl internal_620ec70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x94]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x620ec70)
    }
}
