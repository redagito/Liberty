#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be3190);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6be31a9 _public_6be31a9

PROC_DECLARE(0x6be3190, internal_6be3190, public_6be3190);
extern "C" NAKED register_t __cdecl internal_6be3190()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        mov dword ptr ds : [esi], offset public_6c0bd6c
        je public_6be31a9
        push eax
        call public_6c09aaa
        add esp, 4
        public_6be31a9 : nop
        mov ecx, esi
        pop esi
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6be3190)
    }
}

#undef public_6be31a9
