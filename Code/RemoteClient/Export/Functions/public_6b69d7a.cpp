#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69d7a, internal_6b69d7a, public_6b69d7a);
extern "C" NAKED register_t __cdecl internal_6b69d7a()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b360]
        UNREACHABLE_TRAP(0x6b69d7a)
    }
}
