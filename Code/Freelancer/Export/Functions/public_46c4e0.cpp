#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c4e0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_46c502 _public_46c502
#define public_46c51f _public_46c51f
#define public_46c537 _public_46c537

PROC_DECLARE(0x46c4e0, internal_46c4e0, public_46c4e0);
extern "C" NAKED register_t __cdecl internal_46c4e0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        xor eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, eax
        mov dword ptr ds : [ebx+8], eax
        mov byte ptr ds : [ebx+0xC], al
        mov dword ptr ds : [ebx], offset public_5cb554
        mov dword ptr ds : [ebx+4], eax
        jne public_46c502
        mov byte ptr ds : [ebx+0xC], al
        jmp public_46c537
        public_46c502 : nop
        push ebp
        or ecx, 0xFFFFFFFF
        xor eax, eax
        push edi
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x20
        lea ebp, ds:[ebx+0xC]
        jb public_46c51f
        mov eax, 0x1F
        public_46c51f : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov edi, ebp
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        pop edi
        mov byte ptr ds : [eax+ebp], 0
        pop ebp
        public_46c537 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5d0088
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46c4e0)
    }
}

#undef public_46c502
#undef public_46c51f
#undef public_46c537
