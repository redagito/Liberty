#include "THORN-PCH.h"

PROC_DECLARE(0x6f58306, internal_6f58306, public_6f58306);
extern "C" NAKED register_t __cdecl internal_6f58306()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a140]
        UNREACHABLE_TRAP(0x6f58306)
    }
}
