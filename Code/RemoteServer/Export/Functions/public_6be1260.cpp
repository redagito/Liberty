#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6be1260, internal_6be1260, public_6be1260);
extern "C" NAKED register_t __cdecl internal_6be1260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0bc10]
        mov dword ptr ds : [public_6c13af0], eax
        ret 
        UNREACHABLE_TRAP(0x6be1260)
    }
}
