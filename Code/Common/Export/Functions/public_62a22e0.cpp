#include "Common-PCH.h"

PROC_DECLARE(0x62a22e0, internal_62a22e0, public_62a22e0);
extern "C" NAKED register_t __cdecl internal_62a22e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xF8]
        ret 
        UNREACHABLE_TRAP(0x62a22e0)
    }
}
