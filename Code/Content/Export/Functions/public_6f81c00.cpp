#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f81c20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f81c18 _public_6f81c18

PROC_DECLARE(0x6f81c00, internal_6f81c00, public_6f81c00);
extern "C" NAKED register_t __cdecl internal_6f81c00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f81c20
        test byte ptr ss : [esp+8], 1
        je public_6f81c18
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f81c18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f81c00)
    }
}

#undef public_6f81c18
