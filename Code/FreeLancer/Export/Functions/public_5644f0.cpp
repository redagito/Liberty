#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5644f0, internal_5644f0, public_5644f0);
extern "C" NAKED register_t __cdecl internal_5644f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e250c]
        mov dword ptr ds : [public_67a564], eax
        ret 
        UNREACHABLE_TRAP(0x5644f0)
    }
}
