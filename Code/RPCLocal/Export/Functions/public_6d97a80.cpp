#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d97a80, internal_6d97a80, public_6d97a80);
extern "C" NAKED register_t __cdecl internal_6d97a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3f5c]
        mov dword ptr ds : [public_6dbbe7c], eax
        ret 
        UNREACHABLE_TRAP(0x6d97a80)
    }
}
