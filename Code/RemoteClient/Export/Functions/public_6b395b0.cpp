#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b395b0, internal_6b395b0, public_6b395b0);
extern "C" NAKED register_t __cdecl internal_6b395b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b73d74]
        ret 
        UNREACHABLE_TRAP(0x6b395b0)
    }
}
