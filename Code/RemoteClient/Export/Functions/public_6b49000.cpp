#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b58110);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b49018 _public_6b49018

PROC_DECLARE(0x6b49000, internal_6b49000, public_6b49000);
extern "C" NAKED register_t __cdecl internal_6b49000()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b58110
        test byte ptr ss : [esp+8], 1
        je public_6b49018
        push esi
        call public_6b6a092
        add esp, 4
        public_6b49018 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b49000)
    }
}

#undef public_6b49018
