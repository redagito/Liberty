#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b402f0, internal_6b402f0, public_6b402f0);
extern "C" NAKED register_t __cdecl internal_6b402f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c1b4]
        mov dword ptr ds : [public_6b73e4c], eax
        ret 
        UNREACHABLE_TRAP(0x6b402f0)
    }
}
