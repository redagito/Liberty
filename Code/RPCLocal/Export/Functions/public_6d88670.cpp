#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d886bc _public_6d886bc

PROC_DECLARE(0x6d88670, internal_6d88670, public_6d88670);
extern "C" NAKED register_t __cdecl internal_6d88670()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x2F
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d886bc
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x10]
        movzx eax, word ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x28], edx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [edx+0x24], eax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d886bc : nop
        pop esi
        pop ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6d88670)
    }
}

#undef public_6d886bc
