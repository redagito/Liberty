#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b47590);
CLANG_FORWARD_PROC_SYMBOL(public_6b48290);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b475ba _public_6b475ba

PROC_DECLARE(0x6b47590, internal_6b47590, public_6b47590);
extern "C" NAKED register_t __cdecl internal_6b47590()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x3C
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b475ba
        mov ecx, eax
        call public_6b48290
        test eax, eax
        je public_6b475ba
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b475ba : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b47590)
    }
}

#undef public_6b475ba
