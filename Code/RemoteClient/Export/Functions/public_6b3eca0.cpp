#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b3eca0, internal_6b3eca0, public_6b3eca0);
extern "C" NAKED register_t __cdecl internal_6b3eca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c14c]
        mov dword ptr ds : [public_6b73e2c], eax
        ret 
        UNREACHABLE_TRAP(0x6b3eca0)
    }
}
