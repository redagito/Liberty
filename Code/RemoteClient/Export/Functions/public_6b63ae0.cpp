#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63ae0, internal_6b63ae0, public_6b63ae0);
extern "C" NAKED register_t __cdecl internal_6b63ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e954]
        mov dword ptr ds : [public_6b744b4], eax
        ret 
        UNREACHABLE_TRAP(0x6b63ae0)
    }
}
