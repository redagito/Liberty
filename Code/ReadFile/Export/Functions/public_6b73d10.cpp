#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b73d10, internal_6b73d10, public_6b73d10);
extern "C" NAKED register_t __cdecl internal_6b73d10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x1C], 5
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6b73d10)
    }
}
