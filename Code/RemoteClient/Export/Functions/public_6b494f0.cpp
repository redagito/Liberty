#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b49510);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b49508 _public_6b49508

PROC_DECLARE(0x6b494f0, internal_6b494f0, public_6b494f0);
extern "C" NAKED register_t __cdecl internal_6b494f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6b49510
        test byte ptr ss : [esp+8], 1
        je public_6b49508
        push esi
        call public_6b6a092
        add esp, 4
        public_6b49508 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6b494f0)
    }
}

#undef public_6b49508
