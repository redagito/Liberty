#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_40d760);
CLANG_FORWARD_PROC_SYMBOL(public_40d780);
CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_591460);
CLANG_FORWARD_PROC_SYMBOL(public_5995f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_409592 _public_409592
#define public_4095fa _public_4095fa
#define public_409625 _public_409625
#define public_409647 _public_409647
#define public_40964a _public_40964a

PROC_DECLARE(0x4094e0, internal_4094e0, public_4094e0);
extern "C" NAKED register_t __cdecl internal_4094e0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        push 0
/*FIXUP push offset public_610308 @0x4094eb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610308
/*FIXUP push offset public_6101f0 @0x4094f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101f0
        push 0
        push eax
        mov esi, ecx
        call public_5b8058
        mov ecx, dword ptr ds : [esi+0x18]
        mov edi, eax
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [edi+0x10]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [edi+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x1C]
        lea ebp, ds:[edi+0x20]
        lea ebx, ds:[esi+0x20]
        add esp, 0x14
        cmp ebx, ebp
        mov dword ptr ds : [esi+0x1C], edx
        je public_40964a
        mov ecx, ebx
        call public_5995f0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_5995f0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        ja public_409592
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [edi+0x28]
        mov ecx, dword ptr ds : [edi+0x24]
        lea ebp, ds:[edi+0x20]
        push edx
        push eax
        push ecx
        call public_591460
        mov ecx, dword ptr ds : [ebx+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, ebx
        call public_53aaa0
        mov ecx, ebp
        call public_5995f0
        mov edx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*8]
        jmp public_409647
        public_409592 : nop
        mov ecx, ebx
        call public_40d760
        lea ecx, ds:[edi+0x20]
        mov ebp, eax
        call public_5995f0
        cmp eax, ebp
        ja public_4095fa
        mov ecx, dword ptr ds : [edi+0x24]
        lea ebp, ds:[edi+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, ebx
        call public_5995f0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [ebx+4]
        lea eax, ds:[edx+eax*8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_591460
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, ebx
        call public_40d780
        mov ecx, ebp
        call public_5995f0
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [ebx+8], edx
        jmp public_40964a
        public_4095fa : nop
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_53aaa0
        mov edx, dword ptr ds : [ebx+4]
        push edx
        call public_5b7e1d
        lea ebp, ds:[edi+0x20]
        add esp, 4
        mov ecx, ebp
        call public_5995f0
        test eax, eax
        jge public_409625
        xor eax, eax
        public_409625 : nop
        shl eax, 3
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, ebx
        call public_40d780
        mov dword ptr ds : [ebx+0xC], eax
        public_409647 : nop
        mov dword ptr ds : [ebx+8], eax
        public_40964a : nop
        lea ecx, ds:[edi+0x30]
        push ecx
        lea ecx, ds:[esi+0x30]
        call public_5595c0
        lea edx, ds:[edi+0x40]
        push edx
        lea ecx, ds:[esi+0x40]
        call public_40d4b0
        mov al, byte ptr ds : [edi+0x50]
        mov cl, byte ptr ds : [esi+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [edi+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [edi+0x50]
        xor al, cl
        and al, 0x10
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov ecx, dword ptr ds : [edi+0x50]
        mov dword ptr ds : [esi+0x50], ecx
        mov edx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x54], edx
        mov eax, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], eax
        mov ecx, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], ecx
        mov edx, dword ptr ds : [edi+0x60]
        mov dword ptr ds : [esi+0x60], edx
        mov eax, dword ptr ds : [edi+0x64]
        mov dword ptr ds : [esi+0x64], eax
        mov ecx, dword ptr ds : [edi+0x68]
        mov dword ptr ds : [esi+0x68], ecx
        mov edx, dword ptr ds : [edi+0x6C]
        mov dword ptr ds : [esi+0x6C], edx
        mov eax, dword ptr ds : [edi+0x70]
        mov dword ptr ds : [esi+0x70], eax
        mov ecx, dword ptr ds : [edi+0x74]
        mov dword ptr ds : [esi+0x74], ecx
        mov edx, dword ptr ds : [edi+0x78]
        mov dword ptr ds : [esi+0x78], edx
        mov eax, dword ptr ds : [edi+0x7C]
        mov dword ptr ds : [esi+0x7C], eax
        mov ecx, dword ptr ds : [edi+0x80]
        mov dword ptr ds : [esi+0x80], ecx
        mov edx, dword ptr ds : [edi+0x84]
        mov dword ptr ds : [esi+0x84], edx
        mov eax, dword ptr ds : [edi+0x88]
        mov dword ptr ds : [esi+0x88], eax
        mov ecx, dword ptr ds : [edi+0x8C]
        mov dword ptr ds : [esi+0x8C], ecx
        mov edx, dword ptr ds : [edi+0x90]
        mov dword ptr ds : [esi+0x90], edx
        mov eax, dword ptr ds : [edi+0x94]
        mov dword ptr ds : [esi+0x94], eax
        mov ecx, dword ptr ds : [edi+0x98]
        mov dword ptr ds : [esi+0x98], ecx
        mov edx, dword ptr ds : [edi+0x9C]
        mov dword ptr ds : [esi+0x9C], edx
        mov eax, dword ptr ds : [edi+0xA0]
        mov dword ptr ds : [esi+0xA0], eax
        mov ecx, dword ptr ds : [edi+0xA4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0xA4], ecx
        mov edx, dword ptr ds : [edi+0xA8]
        mov dword ptr ds : [esi+0xA8], edx
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4094e0)
    }
}

#undef public_409592
#undef public_4095fa
#undef public_409625
#undef public_409647
#undef public_40964a
