#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da7f40, internal_6da7f40, public_6da7f40);
extern "C" NAKED register_t __cdecl internal_6da7f40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6218]
        mov dword ptr ds : [public_6dbc0c0], eax
        ret 
        UNREACHABLE_TRAP(0x6da7f40)
    }
}
