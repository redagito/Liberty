#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8bb04 _public_6d8bb04

PROC_DECLARE(0x6d8baa0, internal_6d8baa0, public_6d8baa0);
extern "C" NAKED register_t __cdecl internal_6d8baa0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x12
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8bb04
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x20], 0x10
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x34], edx
        mov edx, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x38], edx
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+0x28], ecx
        mov dx, word ptr ds : [eax+2]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov word ptr ds : [eax+0x40], dx
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8bb04 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8baa0)
    }
}

#undef public_6d8bb04
