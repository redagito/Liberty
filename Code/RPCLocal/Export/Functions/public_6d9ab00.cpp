#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d9ab42 _public_6d9ab42
#define public_6d9ab5a _public_6d9ab5a
#define public_6d9ab82 _public_6d9ab82
#define public_6d9abaa _public_6d9abaa
#define public_6d9abd2 _public_6d9abd2
#define public_6d9ac02 _public_6d9ac02
#define public_6d9ac40 _public_6d9ac40
#define public_6d9ac4c _public_6d9ac4c

PROC_DECLARE(0x6d9ab00, internal_6d9ab00, public_6d9ab00);
extern "C" NAKED register_t __cdecl internal_6d9ab00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6d9ab42
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d9ab42 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6d9ab5a
        mov dword ptr ds : [esi+0xC], ecx
        public_6d9ab5a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d9ac4c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d9ab82
        mov dword ptr ds : [esi+0xC], ecx
        public_6d9ab82 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d9ac4c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d9abaa
        mov dword ptr ds : [esi+0xC], ecx
        public_6d9abaa : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d9ac4c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6d9abd2
        mov dword ptr ds : [esi+0xC], ecx
        public_6d9abd2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d9ac4c
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x2C], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6d9ac02
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6d9ac02 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6d9ac40
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6d9ac40 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d9ac4c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d9ab00)
    }
}

#undef public_6d9ab42
#undef public_6d9ab5a
#undef public_6d9ab82
#undef public_6d9abaa
#undef public_6d9abd2
#undef public_6d9ac02
#undef public_6d9ac40
#undef public_6d9ac4c
