#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4b2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b4b2ca _public_6b4b2ca

PROC_DECLARE(0x6b4b2a0, internal_6b4b2a0, public_6b4b2a0);
extern "C" NAKED register_t __cdecl internal_6b4b2a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x48
        mov dword ptr ds : [esi], 0
        call public_6b6a134
        add esp, 4
        test eax, eax
        je public_6b4b2ca
        mov ecx, eax
        call public_6b4b2e0
        test eax, eax
        je public_6b4b2ca
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6b4b2ca : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b4b2a0)
    }
}

#undef public_6b4b2ca
