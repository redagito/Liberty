#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85500);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f5e0);

#define public_6d8f619 _public_6d8f619
#define public_6d8f650 _public_6d8f650
#define public_6d8f6a2 _public_6d8f6a2
#define public_6d8f6d1 _public_6d8f6d1
#define public_6d8f6f2 _public_6d8f6f2
#define public_6d8f6f4 _public_6d8f6f4
#define public_6d8f6fe _public_6d8f6fe

PROC_DECLARE(0x6d8f5e0, internal_6d8f5e0, public_6d8f5e0);
extern "C" NAKED register_t __cdecl internal_6d8f5e0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax]
        push edi
        lea ebx, ds:[esi+0x20]
        push eax
        push ecx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr ds : [public_6db3040]
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi+0x10], edx
        jbe public_6d8f619
        mov dword ptr ds : [esi+0x1C], 0x17
        public_6d8f619 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        jne public_6d8f6f4
        mov eax, dword ptr ds : [esi+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ds : [esi+0x18], eax
        mov dword ptr ss : [esp+0x10], ecx
        jbe public_6d8f6f2
        xor ebp, ebp
        test cx, cx
        jbe public_6d8f6f2
        lea ebx, ds:[ebx]
        public_6d8f650 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        push edi
        mov ecx, ebx
        call dword ptr ds : [public_6db30d0]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x14]
        mov dword ptr ds : [edx], eax
        push ecx
        add eax, 8
        push eax
        call public_6d85500
        mov edx, dword ptr ds : [ebx+8]
        add esp, 8
        inc edx
        mov dword ptr ds : [ebx+8], edx
        mov edx, dword ptr ds : [esi+0x24]
        mov edi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [esi+0x14]
        add edi, 2
        mov ecx, edi
        add eax, 8
        cmp ecx, edx
        mov dword ptr ds : [esi+0x10], edi
        jbe public_6d8f6a2
        mov dword ptr ds : [esi+0x1C], 0x17
        public_6d8f6a2 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d8f6fe
        mov ecx, dword ptr ds : [esi+0x18]
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        add ecx, 2
        mov dword ptr ds : [esi+0x18], ecx
        mov edi, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [esi+0x14]
        add edi, 4
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [esi+0x10], edi
        jbe public_6d8f6d1
        mov dword ptr ds : [esi+0x1C], 0x17
        public_6d8f6d1 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d8f6fe
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        add ecx, 4
        inc ebp
        cmp bp, word ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [esi+0x18], ecx
        jb public_6d8f650
        public_6d8f6f2 : nop
        xor eax, eax
        public_6d8f6f4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6d8f6fe : nop
        mov eax, dword ptr ds : [esi+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6d8f5e0)
    }
}

#undef public_6d8f619
#undef public_6d8f650
#undef public_6d8f6a2
#undef public_6d8f6d1
#undef public_6d8f6f2
#undef public_6d8f6f4
#undef public_6d8f6fe
