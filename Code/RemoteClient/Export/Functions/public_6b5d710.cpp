#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5d710, internal_6b5d710, public_6b5d710);
extern "C" NAKED register_t __cdecl internal_6b5d710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6e8]
        mov dword ptr ds : [public_6b742c0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5d710)
    }
}
