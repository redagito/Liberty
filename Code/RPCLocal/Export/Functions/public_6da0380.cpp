#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da0380);
CLANG_FORWARD_PROC_SYMBOL(public_6da1020);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da03aa _public_6da03aa

PROC_DECLARE(0x6da0380, internal_6da0380, public_6da0380);
extern "C" NAKED register_t __cdecl internal_6da0380()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push 0x2C
        mov dword ptr ds : [esi], 0
        call public_6db1f8a
        add esp, 4
        test eax, eax
        je public_6da03aa
        mov ecx, eax
        call public_6da1020
        test eax, eax
        je public_6da03aa
        mov dword ptr ds : [esi], eax
        xor eax, eax
        pop esi
        ret 
        public_6da03aa : nop
        mov eax, 5
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6da0380)
    }
}

#undef public_6da03aa
