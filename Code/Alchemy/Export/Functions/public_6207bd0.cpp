#include "Alchemy-PCH.h"

PROC_DECLARE(0x6207bd0, internal_6207bd0, public_6207bd0);
extern "C" NAKED register_t __cdecl internal_6207bd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        inc eax
        ret 4
        UNREACHABLE_TRAP(0x6207bd0)
    }
}
