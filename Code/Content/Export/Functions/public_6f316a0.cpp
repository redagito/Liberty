#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f316c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f316b8 _public_6f316b8

PROC_DECLARE(0x6f316a0, internal_6f316a0, public_6f316a0);
extern "C" NAKED register_t __cdecl internal_6f316a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f316c0
        test byte ptr ss : [esp+8], 1
        je public_6f316b8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f316b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f316a0)
    }
}

#undef public_6f316b8
