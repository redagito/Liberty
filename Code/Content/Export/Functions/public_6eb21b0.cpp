#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eabcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb21b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb21c8 _public_6eb21c8

PROC_DECLARE(0x6eb21b0, internal_6eb21b0, public_6eb21b0);
extern "C" NAKED register_t __cdecl internal_6eb21b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eabcf0
        test byte ptr ss : [esp+8], 1
        je public_6eb21c8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6eb21c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6eb21b0)
    }
}

#undef public_6eb21c8
