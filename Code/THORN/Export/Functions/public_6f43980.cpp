#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f43998 _public_6f43998

PROC_DECLARE(0x6f43980, internal_6f43980, public_6f43980);
extern "C" NAKED register_t __cdecl internal_6f43980()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f439a0
        test byte ptr ss : [esp+8], 1
        je public_6f43998
        push esi
        call public_6f57e26
        add esp, 4
        public_6f43998 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f43980)
    }
}

#undef public_6f43998
