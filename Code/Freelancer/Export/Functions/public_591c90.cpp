#include "Freelancer-PCH.h"


#define public_591c9c _public_591c9c

PROC_DECLARE(0x591c90, internal_591c90, public_591c90);
extern "C" NAKED register_t __cdecl internal_591c90()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_591c9c
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0xC]
        public_591c9c : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x591c90)
    }
}

#undef public_591c9c
