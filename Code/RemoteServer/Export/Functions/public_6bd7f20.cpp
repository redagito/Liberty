#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd7f55 _public_6bd7f55

PROC_DECLARE(0x6bd7f20, internal_6bd7f20, public_6bd7f20);
extern "C" NAKED register_t __cdecl internal_6bd7f20()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x24
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7f55
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x20], edx
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd7f55 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd7f20)
    }
}

#undef public_6bd7f55
