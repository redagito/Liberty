#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3d654 _public_6b3d654
#define public_6b3d66c _public_6b3d66c
#define public_6b3d691 _public_6b3d691
#define public_6b3d6bb _public_6b3d6bb
#define public_6b3d6ce _public_6b3d6ce
#define public_6b3d721 _public_6b3d721
#define public_6b3d75d _public_6b3d75d
#define public_6b3d769 _public_6b3d769

PROC_DECLARE(0x6b3d610, internal_6b3d610, public_6b3d610);
extern "C" NAKED register_t __cdecl internal_6b3d610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3d654
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b3d654 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6b3d66c
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3d66c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3d769
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x24], edx
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add eax, edx
        cmp eax, ecx
        jbe public_6b3d691
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3d691 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3d769
        mov ecx, dword ptr ss : [ebp+0x24]
        push ecx
        call public_6b6a134
        add esp, 4
        test eax, eax
        mov dword ptr ss : [ebp+0x20], eax
        jne public_6b3d6bb
        pop edi
        pop esi
        pop ebp
        mov eax, 5
        pop ebx
        ret 0xC
        public_6b3d6bb : nop
        mov edx, dword ptr ss : [ebp+0x24]
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], eax
        jbe public_6b3d6ce
        mov dword ptr ds : [ebx+0xC], edi
        public_6b3d6ce : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6b3d769
        mov eax, dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x20]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        push ebx
        lea eax, ss:[ebp+0x18]
        push edx
        mov dword ptr ds : [eax], ecx
        push eax
        mov ecx, ebp
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b3d721
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b3d721 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6b3d75d
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6b3d75d : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b3d769 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b3d610)
    }
}

#undef public_6b3d654
#undef public_6b3d66c
#undef public_6b3d691
#undef public_6b3d6bb
#undef public_6b3d6ce
#undef public_6b3d721
#undef public_6b3d75d
#undef public_6b3d769
