#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4fb10);

#define public_6b45632 _public_6b45632
#define public_6b45649 _public_6b45649
#define public_6b45675 _public_6b45675
#define public_6b456bd _public_6b456bd
#define public_6b456fb _public_6b456fb
#define public_6b45707 _public_6b45707

PROC_DECLARE(0x6b455f0, internal_6b455f0, public_6b455f0);
extern "C" NAKED register_t __cdecl internal_6b455f0()
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
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b45632
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b45632 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b45649
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b45649 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b45707
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b45675
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b45675 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b45707
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push ebp
        push ecx
        mov ecx, edi
        mov byte ptr ds : [edi+0x24], dl
        call public_6b4fb10
        test eax, eax
        jne public_6b45707
        push esi
        push ebp
        push ebx
        mov ecx, edi
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b456bd
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b456bd : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6b4ecd0
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
        jbe public_6b456fb
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b456fb : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b45707 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b455f0)
    }
}

#undef public_6b45632
#undef public_6b45649
#undef public_6b45675
#undef public_6b456bd
#undef public_6b456fb
#undef public_6b45707
