#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f690);

#define public_6d4f6a1 _public_6d4f6a1
#define public_6d4f6ff _public_6d4f6ff

PROC_DECLARE(0x6d4f690, internal_6d4f690, public_6d4f690);
extern "C" NAKED register_t __cdecl internal_6d4f690()
{
    __asm
    {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0xFFFFFFF0
        add esp, 8
        jmp public_6d4f6a1
        push ebx
        mov ebx, esp
        public_6d4f6a1 : nop
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ds : [ebx+8]
        sub esp, 0x18
        movss xmm0, dword ptr ds : [edx]
        movss xmm6, dword ptr ds : [edx+4]
        movss xmm5, dword ptr ds : [edx+8]
        movss xmm1, dword ptr ds : [public_6d75000]
        movaps xmm2, xmm0
        mulss xmm2, xmm2
        movaps xmm3, xmm6
        mulss xmm3, xmm3
        addss xmm2, xmm3
        movaps xmm3, xmm5
        mulss xmm3, xmm3
        movaps xmm4, xmm3
        movaps xmm3, xmm2
        addss xmm3, xmm4
        comiss xmm1, xmm3
        jbe public_6d4f6ff
        xorps xmm0, xmm0
        movss dword ptr ds : [eax], xmm0
        movss dword ptr ds : [eax+4], xmm0
        movss dword ptr ds : [eax+8], xmm0
        mov esp, ebx
        pop ebx
        ret 8
        public_6d4f6ff : nop
        movss xmm1, dword ptr ds : [public_6d75008]
        movss xmm2, dword ptr ds : [public_6d75004]
        movaps xmm4, xmm3
        rsqrtss xmm3, xmm3
        mulss xmm4, xmm3
        mulss xmm2, xmm3
        mulss xmm4, xmm3
        subss xmm1, xmm4
        movaps xmm3, xmm0
        movaps xmm0, xmm2
        mulss xmm0, xmm1
        movaps xmm1, xmm0
        mulss xmm1, xmm3
        movss dword ptr ds : [eax], xmm1
        movaps xmm1, xmm0
        mulss xmm1, xmm6
        movss dword ptr ds : [eax+4], xmm1
        mulss xmm0, xmm5
        movss dword ptr ds : [eax+8], xmm0
        mov esp, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d4f690)
    }
}

#undef public_6d4f6a1
#undef public_6d4f6ff
