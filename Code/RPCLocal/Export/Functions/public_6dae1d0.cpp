#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae1d0, internal_6dae1d0, public_6dae1d0);
extern "C" NAKED register_t __cdecl internal_6dae1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65c8]
        mov dword ptr ds : [public_6dbc3cc], eax
        ret 
        UNREACHABLE_TRAP(0x6dae1d0)
    }
}
