#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d866f0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8675d _public_6d8675d
#define public_6d8677e _public_6d8677e
#define public_6d8679d _public_6d8679d
#define public_6d867c0 _public_6d867c0
#define public_6d867d2 _public_6d867d2
#define public_6d86814 _public_6d86814

PROC_DECLARE(0x6d866f0, internal_6d866f0, public_6d866f0);
extern "C" NAKED register_t __cdecl internal_6d866f0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push esi
        push edi
        push 0x1000
        mov esi, ecx
        call public_6db1f8a
        mov ebx, eax
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6d8675d
        push 8
        mov dword ptr ds : [esi+0x28], 2
        call public_6db1f8a
        mov dword ptr ds : [esi+0x24], eax
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[ebx+0x800]
        lea ebx, ds:[esi+4]
        add eax, 4
        add esp, 4
        add esi, 0x14
        mov dword ptr ds : [ebx], ecx
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [ebx+4], edx
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [ebx+8], edi
        mov dword ptr ds : [esi+8], edi
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        mov dword ptr ds : [ebx+0xC], eax
        pop ebx
        add esp, 0x18
        ret 
        public_6d8675d : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [esi+0x24]
        mov eax, dword ptr ds : [esi+0x20]
        lea ecx, ds:[edx+ecx*4-4]
        cmp eax, ecx
        jae public_6d8677e
        add eax, 4
        mov dword ptr ds : [esi+0x20], eax
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ds : [esi+0x20]
        jmp public_6d86814
        public_6d8677e : nop
        push ebp
        sub eax, dword ptr ds : [esi+0x10]
        sar eax, 2
        inc eax
        mov ebp, eax
        lea edi, ss:[ebp+ebp]
        lea eax, ds:[edi*4]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        jge public_6d8679d
        xor eax, eax
        public_6d8679d : nop
        push eax
        call public_6db1f8a
        mov ecx, dword ptr ds : [esi+0x10]
        shr edi, 2
        lea edi, ds:[eax+edi*4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x20]
        add eax, 4
        add esp, 4
        cmp ecx, eax
        mov edx, edi
        je public_6d867d2
        nop 
        public_6d867c0 : nop
        mov ebp, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], ebp
        add ecx, 4
        add edx, 4
        cmp ecx, eax
        jne public_6d867c0
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d867d2 : nop
        mov edx, dword ptr ds : [esi+0x24]
        push edx
        call public_6db1dc2
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0x24], eax
        lea eax, ss:[ebp+ebp]
        mov dword ptr ds : [esi+0x28], eax
        lea eax, ds:[edi+ebp*4]
        mov dword ptr ds : [eax], ebx
        mov ebp, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x24], ebp
        lea ebp, ds:[esi+4]
        mov dword ptr ss : [ebp], ecx
        lea edx, ds:[ecx+0x1000]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], ecx
        add esp, 4
        mov dword ptr ss : [ebp+0xC], edi
        pop ebp
        public_6d86814 : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 0x14
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], ebx
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6d866f0)
    }
}

#undef public_6d8675d
#undef public_6d8677e
#undef public_6d8679d
#undef public_6d867c0
#undef public_6d867d2
#undef public_6d86814
