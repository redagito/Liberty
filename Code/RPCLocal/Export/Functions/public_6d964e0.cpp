#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d964e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d967b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d96b80);
CLANG_FORWARD_PROC_SYMBOL(public_6d96bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6da17e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d96510 _public_6d96510
#define public_6d9652f _public_6d9652f
#define public_6d96554 _public_6d96554
#define public_6d96558 _public_6d96558
#define public_6d96578 _public_6d96578

PROC_DECLARE(0x6d964e0, internal_6d964e0, public_6d964e0);
extern "C" NAKED register_t __cdecl internal_6d964e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6d96554
        mov ecx, eax
        cmp eax, ecx
        jne public_6d96554
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6d9652f
        nop 
        lea esp, ss:[esp]
        public_6d96510 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6d96b80
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6d96510
        public_6d9652f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6da17e0
        jmp public_6d96578
        public_6d96554 : nop
        cmp eax, edi
        je public_6d96578
        public_6d96558 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6d96bc0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6d967b0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6d96558
        public_6d96578 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6db1dc2
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d964e0)
    }
}

#undef public_6d96510
#undef public_6d9652f
#undef public_6d96554
#undef public_6d96558
#undef public_6d96578
