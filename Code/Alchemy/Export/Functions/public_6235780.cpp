#include "Alchemy-PCH.h"

PROC_DECLARE(0x6235780, internal_6235780, public_6235780);
extern "C" NAKED register_t __cdecl internal_6235780()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x6235780)
    }
}
