#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8d9f8 _public_6d8d9f8

PROC_DECLARE(0x6d8d9d0, internal_6d8d9d0, public_6d8d9d0);
extern "C" NAKED register_t __cdecl internal_6d8d9d0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x10
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8d9f8
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6d8d9f8 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d8d9d0)
    }
}

#undef public_6d8d9f8
