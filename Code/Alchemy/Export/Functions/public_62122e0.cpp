#include "Alchemy-PCH.h"

PROC_DECLARE(0x62122e0, internal_62122e0, public_62122e0);
extern "C" NAKED register_t __cdecl internal_62122e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x62122e0)
    }
}
