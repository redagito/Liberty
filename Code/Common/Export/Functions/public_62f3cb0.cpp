#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f3cb0);
CLANG_FORWARD_PROC_SYMBOL(public_62f9a20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62f3cc8 _public_62f3cc8

PROC_DECLARE(0x62f3cb0, internal_62f3cb0, public_62f3cb0);
extern "C" NAKED register_t __cdecl internal_62f3cb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62f9a20
        test byte ptr ss : [esp+8], 1
        je public_62f3cc8
        push esi
        call public_6391d5a
        add esp, 4
        public_62f3cc8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f3cb0)
    }
}

#undef public_62f3cc8
