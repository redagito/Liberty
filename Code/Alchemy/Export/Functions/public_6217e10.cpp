#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217e10);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6217e36 _public_6217e36

PROC_DECLARE(0x6217e10, internal_6217e10, public_6217e10);
extern "C" NAKED register_t __cdecl internal_6217e10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        cmp eax, ecx
        mov dword ptr ds : [esi], offset public_624bc34
        jg public_6217e36
        mov dword ptr ds : [esi+0x10], ecx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        mov eax, esi
        pop esi
        ret 4
        public_6217e36 : nop
        mov dword ptr ds : [esi+0x10], eax
        shl eax, 3
        push eax
        call public_624612c
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6217e10)
    }
}

#undef public_6217e36
