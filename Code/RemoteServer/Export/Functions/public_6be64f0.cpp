#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bf4750);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be6508 _public_6be6508

PROC_DECLARE(0x6be64f0, internal_6be64f0, public_6be64f0);
extern "C" NAKED register_t __cdecl internal_6be64f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6bf4750
        test byte ptr ss : [esp+8], 1
        je public_6be6508
        push esi
        call public_6c09aaa
        add esp, 4
        public_6be6508 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6be64f0)
    }
}

#undef public_6be6508
