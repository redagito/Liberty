#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33f80);

PROC_DECLARE(0x6f33f80, internal_6f33f80, public_6f33f80);
extern "C" NAKED register_t __cdecl internal_6f33f80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6f33f80)
    }
}
