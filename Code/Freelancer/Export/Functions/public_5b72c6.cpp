#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b72c6, internal_5b72c6, public_5b72c6);
extern "C" NAKED register_t __cdecl internal_5b72c6()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67dc]
        UNREACHABLE_TRAP(0x5b72c6)
    }
}
