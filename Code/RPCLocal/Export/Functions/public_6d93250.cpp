#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d93250, internal_6d93250, public_6d93250);
extern "C" NAKED register_t __cdecl internal_6d93250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d90]
        mov dword ptr ds : [public_6dbbdec], eax
        ret 
        UNREACHABLE_TRAP(0x6d93250)
    }
}
