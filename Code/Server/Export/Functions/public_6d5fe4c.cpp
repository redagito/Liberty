#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe4c, internal_6d5fe4c, public_6d5fe4c);
extern "C" NAKED register_t __cdecl internal_6d5fe4c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64114]
        UNREACHABLE_TRAP(0x6d5fe4c)
    }
}
