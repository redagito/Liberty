#include "Server-PCH.h"

PROC_DECLARE(0x6d45fb0, internal_6d45fb0, public_6d45fb0);
extern "C" NAKED register_t __cdecl internal_6d45fb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ae24]
        mov dword ptr ds : [public_6d902e8], eax
        ret 
        UNREACHABLE_TRAP(0x6d45fb0)
    }
}
