#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4307f0);
CLANG_FORWARD_PROC_SYMBOL(public_432cc0);
CLANG_FORWARD_PROC_SYMBOL(public_4330a0);
CLANG_FORWARD_PROC_SYMBOL(public_433330);
CLANG_FORWARD_PROC_SYMBOL(public_433f20);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_430800 _public_430800
#define public_430830 _public_430830
#define public_430858 _public_430858
#define public_43087d _public_43087d
#define public_430881 _public_430881
#define public_4308a1 _public_4308a1

PROC_DECLARE(0x4307f0, internal_4307f0, public_4307f0);
extern "C" NAKED register_t __cdecl internal_4307f0()
{
    __asm
    {
        mov ecx, offset public_667e18
        jmp public_430800
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_430800 : nop
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
        je public_43087d
        mov ecx, eax
        cmp eax, ecx
        jne public_43087d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_430858
        nop 
        lea esp, ss:[esp]
        public_430830 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4330a0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_433f20
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_430830
        public_430858 : nop
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
        call public_53e430
        jmp public_4308a1
        public_43087d : nop
        cmp eax, edi
        je public_4308a1
        public_430881 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_433330
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_432cc0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_430881
        public_4308a1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4307f0)
    }
}

#undef public_430800
#undef public_430830
#undef public_430858
#undef public_43087d
#undef public_430881
#undef public_4308a1
