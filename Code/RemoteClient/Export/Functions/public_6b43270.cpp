#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b436c0);
CLANG_FORWARD_PROC_SYMBOL(public_6b43710);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b432c6 _public_6b432c6
#define public_6b432e0 _public_6b432e0
#define public_6b432f8 _public_6b432f8
#define public_6b4347c _public_6b4347c
#define public_6b434b0 _public_6b434b0

PROC_DECLARE(0x6b43270, internal_6b43270, public_6b43270);
extern "C" NAKED register_t __cdecl internal_6b43270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x94
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0xA0]
        push edi
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+0xC], 0
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        push eax
        lea ebx, ds:[esi+0x18]
        push ebx
        mov ecx, esi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b432c6
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        add esp, 0x94
        ret 0xC
        public_6b432c6 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        add edx, 0x94
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [edi], edx
        jbe public_6b432e0
        mov dword ptr ds : [edi+0xC], 0x16
        public_6b432e0 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6b432f8
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        add esp, 0x94
        ret 0xC
        public_6b432f8 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov edx, dword ptr ds : [esi+0x24]
        mov al, byte ptr ds : [esi+0x28]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [esi+0x30]
        mov byte ptr ss : [esp+0x14], al
        mov eax, dword ptr ds : [esi+0x34]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x40]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [esi+0x48]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [esi+0x4C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x5C]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [esi+0x54]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [esi+0x68]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ds : [esi+0x60]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+0x64]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ds : [esi+0x74]
        mov dword ptr ss : [esp+0x4C], edx
        mov edx, dword ptr ds : [esi+0x6C]
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ds : [esi+0x70]
        mov dword ptr ss : [esp+0x60], ecx
        mov ecx, dword ptr ds : [esi+0x80]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ds : [esi+0x78]
        mov dword ptr ss : [esp+0x5C], eax
        mov eax, dword ptr ds : [esi+0x7C]
        mov dword ptr ss : [esp+0x6C], ecx
        push ebp
        lea ecx, ds:[esi+0x8C]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0x6C], eax
        mov eax, dword ptr ds : [esi+0x88]
        push ecx
        lea ecx, ss:[esp+0x80]
        mov dword ptr ss : [esp+0x78], edx
        mov dword ptr ss : [esp+0x7C], eax
        call public_6b436c0
        lea edx, ds:[esi+0x98]
        push edx
        lea ecx, ss:[esp+0x8C]
        call public_6b436c0
        mov ecx, dword ptr ds : [esi+0xA8]
        mov eax, dword ptr ds : [esi+0xA4]
        mov dl, byte ptr ds : [esi+0xAC]
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x98], ecx
        mov cl, byte ptr ds : [esi+0xAE]
        mov dword ptr ss : [esp+0x94], eax
        mov al, byte ptr ds : [esi+0xAD]
        mov byte ptr ss : [esp+0x9E], cl
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x9C], dl
        mov dl, byte ptr ds : [esi+0xAF]
        mov byte ptr ss : [esp+0x9D], al
        mov al, byte ptr ds : [esi+0xB0]
        push ecx
        mov byte ptr ss : [esp+0xA3], dl
        mov byte ptr ss : [esp+0xA4], al
        mov ecx, ebp
        call public_6b43710
        mov edx, dword ptr ds : [esi+0x14]
        push edi
        push edx
        add ebp, 0x94
        push ebx
        mov ecx, esi
        mov dword ptr ds : [ebx], ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        pop ebp
        je public_6b4347c
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        add esp, 0x94
        ret 0xC
        public_6b4347c : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0xAC]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [edi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jbe public_6b434b0
        mov dword ptr ds : [ecx+0x10], edi
        public_6b434b0 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x94
        ret 0xC
        UNREACHABLE_TRAP(0x6b43270)
    }
}

#undef public_6b432c6
#undef public_6b432e0
#undef public_6b432f8
#undef public_6b4347c
#undef public_6b434b0
