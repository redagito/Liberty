#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_51b480);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_51e9b7 _public_51e9b7

PROC_DECLARE(0x51e980, internal_51e980, public_51e980);
extern "C" NAKED register_t __cdecl internal_51e980()
{
    __asm
    {
        call public_51b480
        call public_54baf0
        test eax, eax
        je public_51e9b7
        mov edx, dword ptr ds : [public_673344]
        mov ecx, dword ptr ds : [public_67ecd0]
        push esi
        mov esi, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ds : [eax]
        push 5
        push 0
        mov ecx, eax
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [public_67ecd0]
        push eax
        call dword ptr ds : [esi+0xE4]
        pop esi
        public_51e9b7 : nop
        push 0x40400000
        push 0
        call public_41a0f0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x51e980)
    }
}

#undef public_51e9b7
