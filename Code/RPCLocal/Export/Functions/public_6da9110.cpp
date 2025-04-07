#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da9157 _public_6da9157
#define public_6da916e _public_6da916e
#define public_6da9180 _public_6da9180
#define public_6da91a3 _public_6da91a3
#define public_6da91b5 _public_6da91b5
#define public_6da91e0 _public_6da91e0
#define public_6da9213 _public_6da9213

PROC_DECLARE(0x6da9110, internal_6da9110, public_6da9110);
extern "C" NAKED register_t __cdecl internal_6da9110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da9157
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da9157 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da916e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da916e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da9180
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da9180 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da91a3
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da91a3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da91b5
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da91b5 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da91e0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da91e0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6da9213
        mov dword ptr ds : [ecx+0x10], esi
        public_6da9213 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da9110)
    }
}

#undef public_6da9157
#undef public_6da916e
#undef public_6da9180
#undef public_6da91a3
#undef public_6da91b5
#undef public_6da91e0
#undef public_6da9213
