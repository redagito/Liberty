#include "Server-PCH.h"

PROC_DECLARE(0x6d189a0, internal_6d189a0, public_6d189a0);
extern "C" NAKED register_t __cdecl internal_6d189a0()
{
    __asm
    {
        mov word ptr ds : [public_6d8f5e0], 3
        mov byte ptr ds : [public_6d8f5e2], 1
        ret 
        UNREACHABLE_TRAP(0x6d189a0)
    }
}
