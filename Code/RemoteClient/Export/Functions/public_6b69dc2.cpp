#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69dc2, internal_6b69dc2, public_6b69dc2);
extern "C" NAKED register_t __cdecl internal_6b69dc2()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b2d8]
        UNREACHABLE_TRAP(0x6b69dc2)
    }
}
