#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316580);
CLANG_FORWARD_PROC_SYMBOL(public_631a700);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631a718 _public_631a718

PROC_DECLARE(0x631a700, internal_631a700, public_631a700);
extern "C" NAKED register_t __cdecl internal_631a700()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6316580
        test byte ptr ss : [esp+8], 1
        je public_631a718
        push esi
        call public_6391d5a
        add esp, 4
        public_631a718 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x631a700)
    }
}

#undef public_631a718
