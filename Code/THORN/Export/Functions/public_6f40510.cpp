#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c570);
CLANG_FORWARD_PROC_SYMBOL(public_6f40510);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a970);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aab0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ae90);
CLANG_FORWARD_PROC_SYMBOL(public_6f4af30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f40540 _public_6f40540
#define public_6f40568 _public_6f40568
#define public_6f4058d _public_6f4058d
#define public_6f40591 _public_6f40591
#define public_6f405b1 _public_6f405b1

PROC_DECLARE(0x6f40510, internal_6f40510, public_6f40510);
extern "C" NAKED register_t __cdecl internal_6f40510()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6f4058d
        mov ecx, eax
        cmp eax, ecx
        jne public_6f4058d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f40568
        nop 
        lea esp, ss:[esp]
        public_6f40540 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f4ae90
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f4af30
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f40540
        public_6f40568 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f4a970
        jmp public_6f405b1
        public_6f4058d : nop
        cmp eax, edi
        je public_6f405b1
        public_6f40591 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f3c570
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f4aab0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f40591
        public_6f405b1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6f57e26
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f40510)
    }
}

#undef public_6f40540
#undef public_6f40568
#undef public_6f4058d
#undef public_6f40591
#undef public_6f405b1
