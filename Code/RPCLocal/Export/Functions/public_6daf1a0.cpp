#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf1a0, internal_6daf1a0, public_6daf1a0);
extern "C" NAKED register_t __cdecl internal_6daf1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6654]
        mov dword ptr ds : [public_6dbc490], eax
        ret 
        UNREACHABLE_TRAP(0x6daf1a0)
    }
}
