#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5e0);
CLANG_FORWARD_PROC_SYMBOL(public_626b560);
CLANG_FORWARD_PROC_SYMBOL(public_628f050);
CLANG_FORWARD_PROC_SYMBOL(public_62bee40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62665d4 _public_62665d4
#define public_62665e8 _public_62665e8
#define public_626660a _public_626660a
#define public_6266618 _public_6266618
#define public_6266623 _public_6266623
#define public_626662b _public_626662b
#define public_6266637 _public_6266637
#define public_6266658 _public_6266658
#define public_626666c _public_626666c
#define public_626669b _public_626669b
#define public_62666a3 _public_62666a3
#define public_62666cc _public_62666cc

PROC_DECLARE(0x62665c0, internal_62665c0, public_62665c0);
extern "C" NAKED register_t __cdecl internal_62665c0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        cmp eax, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        je public_62665e8
        public_62665d4 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+4], edx
        add eax, 8
        add edi, 8
        cmp eax, ecx
        jne public_62665d4
        public_62665e8 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        push edi
        mov ecx, esi
        call public_628f050
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [ebx+4]
        test ecx, ecx
        jne public_626660a
        xor edx, edx
        mov dword ptr ss : [esp+0xC], edx
        jmp public_6266618
        public_626660a : nop
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ecx
        sar eax, 3
        mov dword ptr ss : [esp+0xC], eax
        mov edx, eax
        public_6266618 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6266623
        xor eax, eax
        jmp public_626662b
        public_6266623 : nop
        mov eax, dword ptr ds : [esi+0xC]
        sub eax, ecx
        sar eax, 3
        public_626662b : nop
        cmp eax, edx
        jae public_626669b
        test edx, edx
        mov eax, edx
        jge public_6266637
        xor eax, eax
        public_6266637 : nop
        lea ecx, ds:[eax*8]
        push ebp
        push ecx
        call public_6391d9c
        mov ebp, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [esi+4]
        add esp, 4
        cmp edi, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, eax
        je public_626666c
        public_6266658 : nop
        push edi
        push ebx
        call public_62bee40
        add edi, 8
        add esp, 8
        add ebx, 8
        cmp edi, ebp
        jne public_6266658
        public_626666c : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_626a5e0
        mov ebx, dword ptr ss : [esp+0x20]
        lea edx, ds:[edi+eax*8]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+4], edi
        pop ebp
        public_626669b : nop
        mov edi, dword ptr ds : [ebx+4]
        cmp edi, dword ptr ds : [ebx+8]
        je public_62666cc
        public_62666a3 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+8]
        push 1
        mov dword ptr ss : [esp+0x1C], ecx
        push eax
        mov ecx, esi
        call public_626b560
        mov eax, dword ptr ds : [ebx+8]
        add edi, 8
        cmp edi, eax
        jne public_62666a3
        public_62666cc : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62665c0)
    }
}

#undef public_62665d4
#undef public_62665e8
#undef public_626660a
#undef public_6266618
#undef public_6266623
#undef public_626662b
#undef public_6266637
#undef public_6266658
#undef public_626666c
#undef public_626669b
#undef public_62666a3
#undef public_62666cc
