#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bea5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebc60);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bea5fa _public_6bea5fa

PROC_DECLARE(0x6bea5d0, internal_6bea5d0, public_6bea5d0);
extern "C" NAKED register_t __cdecl internal_6bea5d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6c09d26
        add esp, 4
        test eax, eax
        je public_6bea5fa
        mov ecx, eax
        call public_6bebc60
        test eax, eax
        je public_6bea5fa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6bea5fa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6bea5d0)
    }
}

#undef public_6bea5fa
