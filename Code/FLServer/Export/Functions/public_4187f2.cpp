#include "FLServer-PCH.h"

PROC_DECLARE(0x4187f2, internal_4187f2, public_4187f2);
extern "C" NAKED register_t __cdecl internal_4187f2()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb9c]
        UNREACHABLE_TRAP(0x4187f2)
    }
}
