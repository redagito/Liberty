#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5ba80, internal_6b5ba80, public_6b5ba80);
extern "C" NAKED register_t __cdecl internal_6b5ba80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e63c]
        mov dword ptr ds : [public_6b7422c], eax
        ret 
        UNREACHABLE_TRAP(0x6b5ba80)
    }
}
