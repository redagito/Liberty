#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42edb0);
CLANG_FORWARD_PROC_SYMBOL(public_42f6e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42f6f2 _public_42f6f2
#define public_42f719 _public_42f719

PROC_DECLARE(0x42f6e0, internal_42f6e0, public_42f6e0);
extern "C" NAKED register_t __cdecl internal_42f6e0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_42f719
        public_42f6f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_42f6e0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_42edb0
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_42f6f2
        public_42f719 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x42f6e0)
    }
}

#undef public_42f6f2
#undef public_42f719
