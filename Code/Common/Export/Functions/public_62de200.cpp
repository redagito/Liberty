#include "Common-PCH.h"

PROC_DECLARE(0x62de200, internal_62de200, public_62de200);
extern "C" NAKED register_t __cdecl internal_62de200()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a05d4]
        mov dword ptr ds : [public_63fca08], eax
        ret 
        UNREACHABLE_TRAP(0x62de200)
    }
}
