#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c078b0, internal_6c078b0, public_6c078b0);
extern "C" NAKED register_t __cdecl internal_6c078b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e610]
        mov dword ptr ds : [public_6c142b4], eax
        ret 
        UNREACHABLE_TRAP(0x6c078b0)
    }
}
