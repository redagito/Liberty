#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_40d4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5595c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b8058);

#define public_40a97a _public_40a97a
#define public_40a996 _public_40a996
#define public_40a9b1 _public_40a9b1

PROC_DECLARE(0x40a8a0, internal_40a8a0, public_40a8a0);
extern "C" NAKED register_t __cdecl internal_40a8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push 0
/*FIXUP push offset public_6103ac @0x40a8a9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6103ac
/*FIXUP push offset public_6101f0 @0x40a8ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101f0
        push 0
        push eax
        mov ebp, ecx
        call public_5b8058
        mov ecx, dword ptr ss : [ebp+0x18]
        mov ebx, eax
        mov edx, dword ptr ds : [ebx+4]
        mov dword ptr ss : [ebp+4], edx
        mov eax, dword ptr ds : [ebx+8]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [ebp+0x10], edx
        mov eax, dword ptr ds : [ebx+0x14]
        mov dword ptr ss : [ebp+0x14], eax
        mov ecx, dword ptr ds : [ebx+0x18]
        mov dword ptr ss : [ebp+0x18], ecx
        mov edx, dword ptr ds : [ebx+0x1C]
        add esp, 0x14
        lea eax, ds:[ebx+0x20]
        push eax
        lea ecx, ss:[ebp+0x20]
        mov dword ptr ss : [ebp+0x1C], edx
        call public_40d2c0
        lea ecx, ds:[ebx+0x30]
        push ecx
        lea ecx, ss:[ebp+0x30]
        call public_5595c0
        lea edx, ds:[ebx+0x40]
        push edx
        lea ecx, ss:[ebp+0x40]
        call public_40d4b0
        mov cl, byte ptr ss : [ebp+0x50]
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 1
        xor al, cl
        mov byte ptr ss : [ebp+0x50], al
        mov cl, byte ptr ds : [ebx+0x50]
        xor cl, al
        and cl, 2
        xor cl, al
        mov byte ptr ss : [ebp+0x50], cl
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 4
        xor al, cl
        mov byte ptr ss : [ebp+0x50], al
        mov cl, byte ptr ds : [ebx+0x50]
        xor cl, al
        and cl, 8
        xor cl, al
        mov byte ptr ss : [ebp+0x50], cl
        mov al, byte ptr ds : [ebx+0x50]
        xor al, cl
        and al, 0x10
        xor al, cl
        mov byte ptr ss : [ebp+0x50], al
        mov ecx, dword ptr ds : [ebx+0x50]
        mov dword ptr ss : [ebp+0x50], ecx
        mov edx, dword ptr ds : [ebx+0x54]
        mov dword ptr ss : [ebp+0x54], edx
        mov eax, dword ptr ds : [ebx+0x58]
        lea esi, ds:[ebx+0x60]
        test esi, esi
        mov dword ptr ss : [ebp+0x58], eax
        jne public_40a97a
        mov dword ptr ss : [ebp+0x5C], esi
        mov byte ptr ss : [ebp+0x60], 0
        jmp public_40a9b1
        public_40a97a : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea edx, ss:[ebp+0x60]
        jb public_40a996
        mov eax, 0x1F
        public_40a996 : nop
        mov ecx, eax
        mov edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ds : [eax+ebp+0x60], 0
        mov dword ptr ss : [ebp+0x5C], eax
        pop edi
        public_40a9b1 : nop
        mov eax, dword ptr ds : [ebx+0x80]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+0x80], eax
        mov ecx, dword ptr ds : [ebx+0x84]
        pop esi
        mov dword ptr ss : [ebp+0x84], ecx
        mov dword ptr ss : [ebp+0x18], edx
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x40a8a0)
    }
}

#undef public_40a97a
#undef public_40a996
#undef public_40a9b1
