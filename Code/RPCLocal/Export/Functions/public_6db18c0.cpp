#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db18c0, internal_6db18c0, public_6db18c0);
extern "C" NAKED register_t __cdecl internal_6db18c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6798]
        mov dword ptr ds : [public_6dbc5b0], eax
        ret 
        UNREACHABLE_TRAP(0x6db18c0)
    }
}
