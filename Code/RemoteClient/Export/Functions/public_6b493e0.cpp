#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49400);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b493f8 _public_6b493f8

PROC_DECLARE(0x6b493e0, internal_6b493e0, public_6b493e0);
extern "C" NAKED register_t __cdecl internal_6b493e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b49400
        test byte ptr ss : [esp+8], 1
        je public_6b493f8
        push esi
        call public_6b6a092
        add esp, 4
        public_6b493f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b493e0)
    }
}

#undef public_6b493f8
