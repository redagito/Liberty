#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1370);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9d7e3 _public_6d9d7e3

PROC_DECLARE(0x6d9d7d0, internal_6d9d7d0, public_6d9d7d0);
extern "C" NAKED register_t __cdecl internal_6d9d7d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        test eax, eax
        je public_6d9d7e3
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d9d7e3 : nop
        mov ecx, esi
        pop esi
        jmp public_6da1370
        UNREACHABLE_TRAP(0x6d9d7d0)
    }
}

#undef public_6d9d7e3
