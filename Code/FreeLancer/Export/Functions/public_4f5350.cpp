#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f5350, internal_4f5350, public_4f5350);
extern "C" NAKED register_t __cdecl internal_4f5350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9898]
        mov dword ptr ds : [public_674c40], eax
        ret 
        UNREACHABLE_TRAP(0x4f5350)
    }
}
