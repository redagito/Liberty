#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5b3d0, internal_6b5b3d0, public_6b5b3d0);
extern "C" NAKED register_t __cdecl internal_6b5b3d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e60c]
        mov dword ptr ds : [public_6b74204], eax
        ret 
        UNREACHABLE_TRAP(0x6b5b3d0)
    }
}
