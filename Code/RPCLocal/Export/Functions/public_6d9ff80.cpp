#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9ff80);
CLANG_FORWARD_PROC_SYMBOL(public_6da0a00);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9ffaa _public_6d9ffaa

PROC_DECLARE(0x6d9ff80, internal_6d9ff80, public_6d9ff80);
extern "C" NAKED register_t __cdecl internal_6d9ff80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x28
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6d9ffaa
        mov ecx, eax
        call public_6da0a00
        test eax, eax
        je public_6d9ffaa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6d9ffaa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d9ff80)
    }
}

#undef public_6d9ffaa
