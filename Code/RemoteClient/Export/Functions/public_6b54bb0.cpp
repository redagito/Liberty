#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54bb0, internal_6b54bb0, public_6b54bb0);
extern "C" NAKED register_t __cdecl internal_6b54bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e45c]
        mov dword ptr ds : [public_6b7404c], eax
        ret 
        UNREACHABLE_TRAP(0x6b54bb0)
    }
}
