#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218c90);
CLANG_FORWARD_PROC_SYMBOL(public_623f9e0);

#define public_6218cba _public_6218cba

PROC_DECLARE(0x6218c90, internal_6218c90, public_6218c90);
extern "C" NAKED register_t __cdecl internal_6218c90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        lea esi, ds:[eax+4]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, 0x1BA23359
        jne public_6218cba
        mov ecx, dword ptr ss : [esp+0x10]
        push ecx
        call dword ptr ds : [public_624b00c]
        add esp, 4
        mov dword ptr ds : [esi+0x60], eax
        xor eax, eax
        pop esi
        ret 0xC
        public_6218cba : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        push esi
        call public_623f9e0
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6218c90)
    }
}

#undef public_6218cba
