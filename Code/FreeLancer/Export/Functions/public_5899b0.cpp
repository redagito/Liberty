#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5899b0);
CLANG_FORWARD_PROC_SYMBOL(public_59dab0);

#define public_5899d2 _public_5899d2
#define public_5899ef _public_5899ef
#define public_589a07 _public_589a07

PROC_DECLARE(0x5899b0, internal_5899b0, public_5899b0);
extern "C" NAKED register_t __cdecl internal_5899b0()
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
        jne public_5899d2
        mov byte ptr ds : [ebx+0xC], al
        jmp public_589a07
        public_5899d2 : nop
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
        jb public_5899ef
        mov eax, 0x1F
        public_5899ef : nop
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
        public_589a07 : nop
        push ebx
        mov dword ptr ds : [ebx+8], eax
        call public_59dab0
        add esp, 4
        pop esi
        mov dword ptr ds : [ebx], offset public_5e4efc
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5899b0)
    }
}

#undef public_5899d2
#undef public_5899ef
#undef public_589a07
