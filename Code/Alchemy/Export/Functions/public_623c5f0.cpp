#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c5f0, internal_623c5f0, public_623c5f0);
extern "C" NAKED register_t __cdecl internal_623c5f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x94]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x623c5f0)
    }
}
