#include "Alchemy-PCH.h"

PROC_DECLARE(0x6226ec0, internal_6226ec0, public_6226ec0);
extern "C" NAKED register_t __cdecl internal_6226ec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x6226ec0)
    }
}
