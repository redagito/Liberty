#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d888d5 _public_6d888d5

PROC_DECLARE(0x6d888a0, internal_6d888a0, public_6d888a0);
extern "C" NAKED register_t __cdecl internal_6d888a0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x11
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d888d5
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x20], edx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x24]
        public_6d888d5 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d888a0)
    }
}

#undef public_6d888d5
