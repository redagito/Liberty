#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8560);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be8558 _public_6be8558

PROC_DECLARE(0x6be8540, internal_6be8540, public_6be8540);
extern "C" NAKED register_t __cdecl internal_6be8540()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be8560
        test byte ptr ss : [esp+8], 1
        je public_6be8558
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be8558 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be8540)
    }
}

#undef public_6be8558
