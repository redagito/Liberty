#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56d00, internal_6b56d00, public_6b56d00);
extern "C" NAKED register_t __cdecl internal_6b56d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e520]
        mov dword ptr ds : [public_6b740e4], eax
        ret 
        UNREACHABLE_TRAP(0x6b56d00)
    }
}
