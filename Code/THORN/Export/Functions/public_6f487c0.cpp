#include "THORN-PCH.h"


#define public_6f487d2 _public_6f487d2

PROC_DECLARE(0x6f487c0, internal_6f487c0, public_6f487c0);
extern "C" NAKED register_t __cdecl internal_6f487c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x1C]
        cmp dword ptr ss : [esp+4], eax
        jb public_6f487d2
        test eax, eax
        jl public_6f487d2
        xor eax, eax
        ret 8
        public_6f487d2 : nop
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6f487c0)
    }
}

#undef public_6f487d2
