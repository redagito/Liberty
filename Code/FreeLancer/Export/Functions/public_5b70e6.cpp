#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b70e6, internal_5b70e6, public_5b70e6);
extern "C" NAKED register_t __cdecl internal_5b70e6()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6d04]
        UNREACHABLE_TRAP(0x5b70e6)
    }
}
