#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bf6b50);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be6e38 _public_6be6e38

PROC_DECLARE(0x6be6e20, internal_6be6e20, public_6be6e20);
extern "C" NAKED register_t __cdecl internal_6be6e20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bf6b50
        test byte ptr ss : [esp+8], 1
        je public_6be6e38
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be6e38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be6e20)
    }
}

#undef public_6be6e38
