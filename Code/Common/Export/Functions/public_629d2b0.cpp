#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629d2b0);

PROC_DECLARE(0x629d2b0, internal_629d2b0, public_629d2b0);
extern "C" NAKED register_t __cdecl internal_629d2b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x88]
        ret 
        UNREACHABLE_TRAP(0x629d2b0)
    }
}
