#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11b50);
CLANG_FORWARD_PROC_SYMBOL(public_6d12520);
CLANG_FORWARD_PROC_SYMBOL(public_6d15f90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61bf4);

#define public_6d1255b _public_6d1255b
#define public_6d12560 _public_6d12560
#define public_6d1257c _public_6d1257c
#define public_6d125b3 _public_6d125b3
#define public_6d125f9 _public_6d125f9
#define public_6d12621 _public_6d12621
#define public_6d1265f _public_6d1265f
#define public_6d12661 _public_6d12661
#define public_6d1269b _public_6d1269b
#define public_6d126a5 _public_6d126a5
#define public_6d126c4 _public_6d126c4
#define public_6d126ce _public_6d126ce
#define public_6d126d2 _public_6d126d2
#define public_6d126de _public_6d126de
#define public_6d126e0 _public_6d126e0
#define public_6d12703 _public_6d12703

PROC_DECLARE(0x6d12520, internal_6d12520, public_6d12520);
extern "C" NAKED register_t __cdecl internal_6d12520()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61bf4 @0x6d12522*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61bf4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x38
        mov eax, dword ptr ds : [public_6d8e118]
        push ebx
        push ebp
        push esi
        push edi
        or edi, 0xFFFFFFFF
        lea esi, ds:[eax+1]
        cmp esi, 0x1000
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x10], edi
        mov bl, 1
        jb public_6d1257c
        public_6d1255b : nop
        xor esi, esi
        lea ecx, ds:[ecx]
        public_6d12560 : nop
        cmp esi, 0x1000
        jb public_6d1257c
        mov ecx, offset public_6d8df18
        call public_6d15f90
        mov ecx, offset public_6d8df18
        call public_6d15f90
        public_6d1257c : nop
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov eax, esi
        shr eax, 5
        test dword ptr ds : [eax*4+public_6d8df18], edx
        je public_6d125b3
        test bl, bl
        je public_6d12621
        inc esi
        cmp esi, 0x1000
        jae public_6d1255b
        cmp esi, dword ptr ds : [public_6d8e118]
        jne public_6d12560
        xor bl, bl
        jmp public_6d12560
        public_6d125b3 : nop
        test bl, bl
        je public_6d12621
        cmp esi, 0x1000
        jb public_6d125f9
        lea ecx, ss:[esp+0x58]
        push ecx
/*FIXUP push offset public_6d683a0 @0x6d125c4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d683a0
        lea ecx, ss:[esp+0x24]
        call dword ptr ds : [public_6d64ac4]
        lea edx, ss:[esp+0x1C]
        push edx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x54], 0
        call dword ptr ds : [public_6d64abc]
/*FIXUP push offset public_6d727ac @0x6d125ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d727ac
        lea eax, ss:[esp+0x30]
        push eax
        call public_6d601a2
        public_6d125f9 : nop
        mov ecx, esi
        shr ecx, 5
        lea eax, ds : [ecx*4+public_6d8df18]
        mov ecx, esi
        and ecx, 0x1F
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_6d8e118], esi
        public_6d12621 : nop
        push 0x20
        call public_6d60012
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], esi
        test esi, esi
        mov dword ptr ss : [esp+0x50], 1
        je public_6d1265f
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_6d68384
        mov dword ptr ds : [esi+4], 0
        mov byte ptr ds : [esi+8], 0
        call dword ptr ds : [public_6d6476c]
        mov dword ptr ds : [esi], offset public_6d683c0
        jmp public_6d12661
        public_6d1265f : nop
        xor esi, esi
        public_6d12661 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x50], edi
        lea edi, ds:[esi+0xC]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_6d64768]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [esi+4], edx
        mov byte ptr ds : [esi+8], 1
        mov al, byte ptr ss : [ebp+0x4C]
        test al, al
        je public_6d1269b
        mov eax, dword ptr ss : [ebp+0x50]
        test eax, eax
        je public_6d1269b
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0x50], ecx
        jmp public_6d126a5
        public_6d1269b : nop
        push 0xC
        call public_6d60012
        add esp, 4
        public_6d126a5 : nop
        mov edx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], esi
        mov ecx, dword ptr ss : [ebp+0x48]
        test ecx, ecx
        je public_6d126c4
        mov dword ptr ds : [ecx], eax
        mov dword ptr ss : [ebp+0x48], eax
        xor edi, edi
        jmp public_6d126d2
        public_6d126c4 : nop
        mov dword ptr ss : [ebp+0x44], eax
        mov dword ptr ss : [ebp+0x48], eax
        xor edi, edi
        jmp public_6d126d2
        public_6d126ce : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d126d2 : nop
        test edi, edi
        jne public_6d126de
        mov eax, dword ptr ss : [ebp+0x3C]
        mov edi, dword ptr ds : [eax+4]
        jmp public_6d126e0
        public_6d126de : nop
        mov edi, dword ptr ds : [edi]
        public_6d126e0 : nop
        test edi, edi
        je public_6d12703
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [eax]
        push ecx
        push ebp
        call public_6d11b50
        add esp, 8
        test al, al
        je public_6d126ce
        mov edx, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [edx]
        jmp public_6d126ce
        public_6d12703 : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov byte ptr ds : [esi+8], 0
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x44
        ret 8
        UNREACHABLE_TRAP(0x6d12520)
    }
}

#undef public_6d1255b
#undef public_6d12560
#undef public_6d1257c
#undef public_6d125b3
#undef public_6d125f9
#undef public_6d12621
#undef public_6d1265f
#undef public_6d12661
#undef public_6d1269b
#undef public_6d126a5
#undef public_6d126c4
#undef public_6d126ce
#undef public_6d126d2
#undef public_6d126de
#undef public_6d126e0
#undef public_6d12703
