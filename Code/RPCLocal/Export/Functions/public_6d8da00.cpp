#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8da33 _public_6d8da33

PROC_DECLARE(0x6d8da00, internal_6d8da00, public_6d8da00);
extern "C" NAKED register_t __cdecl internal_6d8da00()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 4
        push 3
        call public_6d96300
        test eax, eax
        jne public_6d8da33
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x20], edx
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6d8da33 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8da00)
    }
}

#undef public_6d8da33
