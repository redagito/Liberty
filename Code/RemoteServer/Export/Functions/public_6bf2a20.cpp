#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf2a69 _public_6bf2a69
#define public_6bf2a81 _public_6bf2a81
#define public_6bf2a91 _public_6bf2a91
#define public_6bf2aae _public_6bf2aae
#define public_6bf2abe _public_6bf2abe
#define public_6bf2ad9 _public_6bf2ad9
#define public_6bf2ae9 _public_6bf2ae9
#define public_6bf2b04 _public_6bf2b04
#define public_6bf2b14 _public_6bf2b14
#define public_6bf2b3b _public_6bf2b3b
#define public_6bf2b6e _public_6bf2b6e

PROC_DECLARE(0x6bf2a20, internal_6bf2a20, public_6bf2a20);
extern "C" NAKED register_t __cdecl internal_6bf2a20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
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
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf2a69
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6bf2a69 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6bf2a81
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf2a81 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf2a91
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf2a91 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf2aae
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf2aae : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf2abe
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf2abe : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf2ad9
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf2ad9 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf2ae9
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf2ae9 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x25]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf2b04
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf2b04 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6bf2b14
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf2b14 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x26]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf2b3b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6bf2b3b : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6bf2b6e
        mov dword ptr ds : [ecx+0x10], esi
        public_6bf2b6e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6bf2a20)
    }
}

#undef public_6bf2a69
#undef public_6bf2a81
#undef public_6bf2a91
#undef public_6bf2aae
#undef public_6bf2abe
#undef public_6bf2ad9
#undef public_6bf2ae9
#undef public_6bf2b04
#undef public_6bf2b14
#undef public_6bf2b3b
#undef public_6bf2b6e
