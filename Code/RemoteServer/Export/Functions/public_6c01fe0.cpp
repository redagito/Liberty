#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c02022 _public_6c02022
#define public_6c0203a _public_6c0203a
#define public_6c02062 _public_6c02062
#define public_6c0208c _public_6c0208c
#define public_6c020b4 _public_6c020b4
#define public_6c020de _public_6c020de
#define public_6c0210e _public_6c0210e
#define public_6c0214c _public_6c0214c
#define public_6c02158 _public_6c02158

PROC_DECLARE(0x6c01fe0, internal_6c01fe0, public_6c01fe0);
extern "C" NAKED register_t __cdecl internal_6c01fe0()
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
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c02022
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c02022 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6c0203a
        mov dword ptr ds : [esi+0xC], ecx
        public_6c0203a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c02158
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6c02062
        mov dword ptr ds : [esi+0xC], ecx
        public_6c02062 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c02158
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x24], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6c0208c
        mov dword ptr ds : [esi+0xC], ecx
        public_6c0208c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c02158
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6c020b4
        mov dword ptr ds : [esi+0xC], ecx
        public_6c020b4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c02158
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2C], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6c020de
        mov dword ptr ds : [esi+0xC], ecx
        public_6c020de : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c02158
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x30], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c0210e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c0210e : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
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
        jbe public_6c0214c
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6c0214c : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c02158 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c01fe0)
    }
}

#undef public_6c02022
#undef public_6c0203a
#undef public_6c02062
#undef public_6c0208c
#undef public_6c020b4
#undef public_6c020de
#undef public_6c0210e
#undef public_6c0214c
#undef public_6c02158
