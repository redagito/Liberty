#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);
CLANG_FORWARD_PROC_SYMBOL(public_6be3620);

#define public_6bd7e7b _public_6bd7e7b

PROC_DECLARE(0x6bd7e40, internal_6bd7e40, public_6bd7e40);
extern "C" NAKED register_t __cdecl internal_6bd7e40()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x27
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7e7b
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push edx
        call public_6be3620
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x170]
        public_6bd7e7b : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6bd7e40)
    }
}

#undef public_6bd7e7b
