#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b1d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4b1c8 _public_6b4b1c8

PROC_DECLARE(0x6b4b1b0, internal_6b4b1b0, public_6b4b1b0);
extern "C" NAKED register_t __cdecl internal_6b4b1b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b4b1d0
        test byte ptr ss : [esp+8], 1
        je public_6b4b1c8
        push esi
        call public_6b6a092
        add esp, 4
        public_6b4b1c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b4b1b0)
    }
}

#undef public_6b4b1c8
