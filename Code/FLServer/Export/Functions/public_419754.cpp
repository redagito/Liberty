#include "FLServer-PCH.h"

PROC_DECLARE(0x419754, internal_419754, public_419754);
extern "C" NAKED register_t __cdecl internal_419754()
{
    __asm
    {
        jmp dword ptr ds : [public_41b140]
        UNREACHABLE_TRAP(0x419754)
    }
}
