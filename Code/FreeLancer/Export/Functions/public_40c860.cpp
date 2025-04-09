#include "FreeLancer-PCH.h"

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

#define public_40c8ce _public_40c8ce
#define public_40c8d6 _public_40c8d6
#define public_40c8e1 _public_40c8e1
#define public_40c8e9 _public_40c8e9
#define public_40c91c _public_40c91c
#define public_40c989 _public_40c989
#define public_40c9b4 _public_40c9b4
#define public_40c9d6 _public_40c9d6
#define public_40c9d9 _public_40c9d9

PROC_DECLARE(0x40c860, internal_40c860, public_40c860);
extern "C" NAKED register_t __cdecl internal_40c860()
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
/*FIXUP push offset public_610494 @0x40c86b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_610494
/*FIXUP push offset public_6101f0 @0x40c870*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101f0
        push 0
        push eax
        mov esi, ecx
        call public_5b8058
        mov ecx, dword ptr ds : [esi+0x18]
        mov ebx, eax
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ds : [esi+0x10], edx
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ds : [esi+0x14], eax
        mov ecx, dword ptr ds : [ebx+0x18]
        mov dword ptr ds : [esi+0x18], ecx
        mov edx, dword ptr ds : [ebx+0x1C]
        lea ebp, ds:[ebx+0x20]
        lea edi, ds:[esi+0x20]
        add esp, 0x14
        cmp edi, ebp
        mov dword ptr ds : [esi+0x1C], edx
        je public_40c9d9
        mov eax, dword ptr ss : [ebp+4]
        test eax, eax
        jne public_40c8ce
        xor edx, edx
        jmp public_40c8d6
        public_40c8ce : nop
        mov edx, dword ptr ss : [ebp+8]
        sub edx, eax
        sar edx, 3
        public_40c8d6 : nop
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_40c8e1
        xor eax, eax
        jmp public_40c8e9
        public_40c8e1 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 3
        public_40c8e9 : nop
        cmp edx, eax
        ja public_40c91c
        mov eax, dword ptr ss : [ebp+8]
        push ecx
        push eax
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_591460
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        push eax
        mov ecx, edi
        call public_53aaa0
        mov ecx, ebp
        call public_5995f0
        mov edx, dword ptr ds : [edi+4]
        lea eax, ds:[edx+eax*8]
        jmp public_40c9d6
        public_40c91c : nop
        mov ecx, edi
        call public_40d760
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_5995f0
        mov ecx, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        ja public_40c989
        mov ecx, dword ptr ds : [ebx+0x24]
        lea ebp, ds:[ebx+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, edi
        call public_5995f0
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [edi+4]
        lea eax, ds:[edx+eax*8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push eax
        push edx
        mov dword ptr ss : [esp+0x24], eax
        call public_591460
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [esp+0x24]
        add esp, 0xC
        push eax
        push ecx
        push edx
        mov ecx, edi
        call public_40d780
        mov ecx, ebp
        call public_5995f0
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ds:[ecx+eax*8]
        mov dword ptr ds : [edi+8], edx
        jmp public_40c9d9
        public_40c989 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+4]
        push eax
        push ecx
        mov ecx, edi
        call public_53aaa0
        mov edx, dword ptr ds : [edi+4]
        push edx
        call public_5b7e1d
        lea ebp, ds:[ebx+0x20]
        add esp, 4
        mov ecx, ebp
        call public_5995f0
        test eax, eax
        jge public_40c9b4
        xor eax, eax
        public_40c9b4 : nop
        shl eax, 3
        push eax
        call public_5b7e84
        add esp, 4
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ss : [ebp+8]
        mov ebp, dword ptr ss : [ebp+4]
        push eax
        push ecx
        push ebp
        mov ecx, edi
        call public_40d780
        mov dword ptr ds : [edi+0xC], eax
        public_40c9d6 : nop
        mov dword ptr ds : [edi+8], eax
        public_40c9d9 : nop
        lea ecx, ds:[ebx+0x30]
        push ecx
        lea ecx, ds:[esi+0x30]
        call public_5595c0
        lea edx, ds:[ebx+0x40]
        push edx
        lea ecx, ds:[esi+0x40]
        call public_40d4b0
        mov cl, byte ptr ds : [esi+0x50]
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [ebx+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov cl, byte ptr ds : [ebx+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ds : [esi+0x50], cl
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 0x10
        xor al, cl
        mov byte ptr ds : [esi+0x50], al
        mov ecx, dword ptr ds : [ebx+0x50]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x50], ecx
        mov edx, dword ptr ds : [ebx+0x54]
        pop edi
        mov dword ptr ds : [esi+0x54], edx
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x40c860)
    }
}

#undef public_40c8ce
#undef public_40c8d6
#undef public_40c8e1
#undef public_40c8e9
#undef public_40c91c
#undef public_40c989
#undef public_40c9b4
#undef public_40c9d6
#undef public_40c9d9
