#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea5f80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea5f78 _public_6ea5f78

PROC_DECLARE(0x6ea5f60, internal_6ea5f60, public_6ea5f60);
extern "C" NAKED register_t __cdecl internal_6ea5f60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ea5f80
        test byte ptr ss : [esp+8], 1
        je public_6ea5f78
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ea5f78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ea5f60)
    }
}

#undef public_6ea5f78
