#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da78a0, internal_6da78a0, public_6da78a0);
extern "C" NAKED register_t __cdecl internal_6da78a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6200]
        mov dword ptr ds : [public_6dbc0a0], eax
        ret 
        UNREACHABLE_TRAP(0x6da78a0)
    }
}
