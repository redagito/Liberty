#include "Alchemy-PCH.h"

PROC_DECLARE(0x623c3e0, internal_623c3e0, public_623c3e0);
extern "C" NAKED register_t __cdecl internal_623c3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        ret 4
        UNREACHABLE_TRAP(0x623c3e0)
    }
}
