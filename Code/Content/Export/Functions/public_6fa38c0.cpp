#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9f4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa38c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa38d2 _public_6fa38d2
#define public_6fa38f9 _public_6fa38f9

PROC_DECLARE(0x6fa38c0, internal_6fa38c0, public_6fa38c0);
extern "C" NAKED register_t __cdecl internal_6fa38c0()
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
        je public_6fa38f9
        public_6fa38d2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6fa38c0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f9f4a0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6fa38d2
        public_6fa38f9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6fa38c0)
    }
}

#undef public_6fa38d2
#undef public_6fa38f9
