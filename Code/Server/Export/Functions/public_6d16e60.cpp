#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16e60);
CLANG_FORWARD_PROC_SYMBOL(public_6d17050);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16e78 _public_6d16e78

PROC_DECLARE(0x6d16e60, internal_6d16e60, public_6d16e60);
extern "C" NAKED register_t __cdecl internal_6d16e60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d17050
        test byte ptr ss : [esp+8], 1
        je public_6d16e78
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d16e78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16e60)
    }
}

#undef public_6d16e78
