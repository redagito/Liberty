#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313bb0);
CLANG_FORWARD_PROC_SYMBOL(public_63177f0);
CLANG_FORWARD_PROC_SYMBOL(public_6318d60);
CLANG_FORWARD_PROC_SYMBOL(public_6319c30);
CLANG_FORWARD_PROC_SYMBOL(public_631a720);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6313be0 _public_6313be0
#define public_6313c08 _public_6313c08
#define public_6313c2d _public_6313c2d
#define public_6313c31 _public_6313c31
#define public_6313c51 _public_6313c51

PROC_DECLARE(0x6313bb0, internal_6313bb0, public_6313bb0);
extern "C" NAKED register_t __cdecl internal_6313bb0()
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
        je public_6313c2d
        mov ecx, eax
        cmp eax, ecx
        jne public_6313c2d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6313c08
        nop 
        lea esp, ss:[esp]
        public_6313be0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318d60
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_631a720
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6313be0
        public_6313c08 : nop
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
        call public_632c410
        jmp public_6313c51
        public_6313c2d : nop
        cmp eax, edi
        je public_6313c51
        public_6313c31 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6319c30
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_63177f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6313c31
        public_6313c51 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6313bb0)
    }
}

#undef public_6313be0
#undef public_6313c08
#undef public_6313c2d
#undef public_6313c31
#undef public_6313c51
