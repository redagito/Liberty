#include "Alchemy-PCH.h"

PROC_DECLARE(0x6214ad0, internal_6214ad0, public_6214ad0);
extern "C" NAKED register_t __cdecl internal_6214ad0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x94]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6214ad0)
    }
}
