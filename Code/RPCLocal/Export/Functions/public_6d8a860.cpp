#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8a8a1 _public_6d8a8a1

PROC_DECLARE(0x6d8a860, internal_6d8a860, public_6d8a860);
extern "C" NAKED register_t __cdecl internal_6d8a860()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x21
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8a8a1
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x24], eax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8a8a1 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d8a860)
    }
}

#undef public_6d8a8a1
