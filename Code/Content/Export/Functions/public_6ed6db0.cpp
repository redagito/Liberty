#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee2b70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed6dc8 _public_6ed6dc8

PROC_DECLARE(0x6ed6db0, internal_6ed6db0, public_6ed6db0);
extern "C" NAKED register_t __cdecl internal_6ed6db0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ee2b70
        test byte ptr ss : [esp+8], 1
        je public_6ed6dc8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ed6dc8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed6db0)
    }
}

#undef public_6ed6dc8
