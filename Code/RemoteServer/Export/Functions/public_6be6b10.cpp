#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be6b28 _public_6be6b28

PROC_DECLARE(0x6be6b10, internal_6be6b10, public_6be6b10);
extern "C" NAKED register_t __cdecl internal_6be6b10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6be6b30
        test byte ptr ss : [esp+8], 1
        je public_6be6b28
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be6b28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be6b10)
    }
}

#undef public_6be6b28
