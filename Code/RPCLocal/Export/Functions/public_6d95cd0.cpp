#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d95cd0, internal_6d95cd0, public_6d95cd0);
extern "C" NAKED register_t __cdecl internal_6d95cd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3df4]
        mov dword ptr ds : [public_6dbbe20], eax
        ret 
        UNREACHABLE_TRAP(0x6d95cd0)
    }
}
