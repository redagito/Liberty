#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b3e0c2 _public_6b3e0c2
#define public_6b3e0d7 _public_6b3e0d7
#define public_6b3e105 _public_6b3e105
#define public_6b3e143 _public_6b3e143
#define public_6b3e14f _public_6b3e14f

PROC_DECLARE(0x6b3e080, internal_6b3e080, public_6b3e080);
extern "C" NAKED register_t __cdecl internal_6b3e080()
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
        je public_6b3e0c2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b3e0c2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b3e0d7
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b3e0d7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b3e14f
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        push esi
        push ebp
        mov byte ptr ds : [edi+0x20], cl
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b3e105
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b3e105 : nop
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
        jbe public_6b3e143
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b3e143 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b3e14f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b3e080)
    }
}

#undef public_6b3e0c2
#undef public_6b3e0d7
#undef public_6b3e105
#undef public_6b3e143
#undef public_6b3e14f
