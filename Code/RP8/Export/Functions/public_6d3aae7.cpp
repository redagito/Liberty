#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37e98);

#define public_6d3ab15 _public_6d3ab15
#define public_6d3ab3b _public_6d3ab3b
#define public_6d3ab53 _public_6d3ab53

PROC_DECLARE(0x6d3aae7, internal_6d3aae7, public_6d3aae7);
extern "C" NAKED register_t __cdecl internal_6d3aae7()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ds : [ecx+0x1050]
        imul eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x1054]
        imul edx, dword ptr ss : [ebp+0xC]
        add eax, edx
        add eax, dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [ecx+0x1058]
        push esi
        lea esi, ds:[eax+edx*2]
        cmp eax, esi
        mov edx, dword ptr ss : [ebp+0x10]
        jae public_6d3ab3b
        push edi
        public_6d3ab15 : nop
        movzx edi, word ptr ds : [eax]
        mov dword ptr ss : [ebp+0x10], edi
        inc eax
        inc eax
        fild dword ptr ss : [ebp+0x10]
        fmul dword ptr ds : [public_6d5f62c]
        fst dword ptr ds : [edx+8]
        fst dword ptr ds : [edx+4]
        fstp dword ptr ds : [edx]
        add edx, 0x10
        cmp eax, esi
        fld1 
        fstp dword ptr ds : [edx-4]
        jb public_6d3ab15
        pop edi
        public_6d3ab3b : nop
        cmp dword ptr ds : [ecx+0x10], 0
        pop esi
        je public_6d3ab53
        mov eax, dword ptr ds : [ecx+0x1058]
        shl eax, 4
        sub edx, eax
        push edx
        call public_6d37e98
        public_6d3ab53 : nop
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3aae7)
    }
}

#undef public_6d3ab15
#undef public_6d3ab3b
#undef public_6d3ab53
