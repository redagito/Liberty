#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b466f0);

#define public_6b380ac _public_6b380ac

PROC_DECLARE(0x6b38070, internal_6b38070, public_6b38070);
extern "C" NAKED register_t __cdecl internal_6b38070()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x52
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b380ac
        mov ecx, dword ptr ss : [esp+4]
        push eax
        mov dword ptr ds : [ecx+0x20], eax
        mov ecx, dword ptr ss : [esp+8]
        push eax
        call public_6b466f0
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b380ac : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b38070)
    }
}

#undef public_6b380ac
