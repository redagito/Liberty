#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8cd28 _public_6d8cd28

PROC_DECLARE(0x6d8cd00, internal_6d8cd00, public_6d8cd00);
extern "C" NAKED register_t __cdecl internal_6d8cd00()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 5
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8cd28
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8cd28 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8cd00)
    }
}

#undef public_6d8cd28
