#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be2610);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be2638 _public_6be2638

PROC_DECLARE(0x6be2620, internal_6be2620, public_6be2620);
extern "C" NAKED register_t __cdecl internal_6be2620()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be2610
        test byte ptr ss : [esp+8], 1
        je public_6be2638
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be2638 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be2620)
    }
}

#undef public_6be2638
