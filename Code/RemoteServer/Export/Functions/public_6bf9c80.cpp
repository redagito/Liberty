#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf9c80, internal_6bf9c80, public_6bf9c80);
extern "C" NAKED register_t __cdecl internal_6bf9c80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e28c]
        mov dword ptr ds : [public_6c13f08], eax
        ret 
        UNREACHABLE_TRAP(0x6bf9c80)
    }
}
