#include "THORN-PCH.h"

PROC_DECLARE(0x6f58240, internal_6f58240, public_6f58240);
extern "C" NAKED register_t __cdecl internal_6f58240()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0b0]
        UNREACHABLE_TRAP(0x6f58240)
    }
}
