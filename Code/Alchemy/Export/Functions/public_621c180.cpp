#include "Alchemy-PCH.h"

PROC_DECLARE(0x621c180, internal_621c180, public_621c180);
extern "C" NAKED register_t __cdecl internal_621c180()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x621c180)
    }
}
