#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f20e00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eb7af0 _public_6eb7af0
#define public_6eb7b0f _public_6eb7b0f
#define public_6eb7b34 _public_6eb7b34
#define public_6eb7b38 _public_6eb7b38
#define public_6eb7b58 _public_6eb7b58

PROC_DECLARE(0x6eb7ac0, internal_6eb7ac0, public_6eb7ac0);
extern "C" NAKED register_t __cdecl internal_6eb7ac0()
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
        je public_6eb7b34
        mov ecx, eax
        cmp eax, ecx
        jne public_6eb7b34
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6eb7b0f
        nop 
        lea esp, ss:[esp]
        public_6eb7af0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ed1cd0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6eb7af0
        public_6eb7b0f : nop
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
        call public_6f1df30
        jmp public_6eb7b58
        public_6eb7b34 : nop
        cmp eax, edi
        je public_6eb7b58
        public_6eb7b38 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f1fa00
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f20e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6eb7b38
        public_6eb7b58 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6eb7ac0)
    }
}

#undef public_6eb7af0
#undef public_6eb7b0f
#undef public_6eb7b34
#undef public_6eb7b38
#undef public_6eb7b58
