#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620d3d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);

#define public_620d42a _public_620d42a
#define public_620d45e _public_620d45e
#define public_620d47b _public_620d47b
#define public_620d48c _public_620d48c
#define public_620d492 _public_620d492

PROC_DECLARE(0x620d3d0, internal_620d3d0, public_620d3d0);
extern "C" NAKED register_t __cdecl internal_620d3d0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, ecx
        push esi
        push edi
        mov edi, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+0xC]
        mov esi, dword ptr ss : [esp+0x2C]
        sub ebp, edi
        sar ebp, 3
        mov ecx, eax
        mov dword ptr ss : [esp+0x18], edi
        sub ecx, ebp
        inc eax
        mov dword ptr ss : [esp+0x28], eax
        add eax, esi
        lea edx, ds:[ecx*8+8]
        mov ecx, dword ptr ds : [ebx+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x10], ecx
        jle public_620d492
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_624bdc0]
        call public_6246188
        cmp esi, eax
        jl public_620d42a
        mov eax, esi
        public_620d42a : nop
        mov ecx, dword ptr ss : [esp+0x28]
        add ecx, eax
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], ecx
        je public_620d492
        lea edx, ds:[ecx*8]
        xor eax, eax
        test edx, edx
        mov dword ptr ss : [esp+0x28], eax
        je public_620d45e
        push edx
        call public_624612c
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x28], eax
        public_620d45e : nop
        test edi, edi
        je public_620d48c
        test eax, eax
        je public_620d47b
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, edi
        mov edi, eax
        lea ecx, ds:[edx+edx]
        rep movsd
        mov edi, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x2C]
        public_620d47b : nop
        push edi
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 4
        public_620d48c : nop
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+0x10], ecx
        public_620d492 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        lea ebp, ds:[eax+ebp*8]
        push ebp
        lea edx, ss:[ebp+esi*8]
        push edx
        call dword ptr ds : [public_624b060]
        mov eax, dword ptr ds : [ebx+0xC]
        add esp, 0xC
        add eax, esi
        mov dword ptr ds : [ebx+0xC], eax
        mov eax, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x620d3d0)
    }
}

#undef public_620d42a
#undef public_620d45e
#undef public_620d47b
#undef public_620d48c
#undef public_620d492
