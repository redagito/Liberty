#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b6a032, internal_6b6a032, public_6b6a032);
extern "C" NAKED register_t __cdecl internal_6b6a032()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b044]
        UNREACHABLE_TRAP(0x6b6a032)
    }
}
