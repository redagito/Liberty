#include "THORN-PCH.h"

PROC_DECLARE(0x6f58234, internal_6f58234, public_6f58234);
extern "C" NAKED register_t __cdecl internal_6f58234()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0a8]
        UNREACHABLE_TRAP(0x6f58234)
    }
}
