#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2fdc0);

#define public_6c2fdd4 _public_6c2fdd4
#define public_6c2fdde _public_6c2fdde
#define public_6c2fde2 _public_6c2fde2
#define public_6c2fde7 _public_6c2fde7

PROC_DECLARE(0x6c2fdc0, internal_6c2fdc0, public_6c2fdc0);
extern "C" NAKED register_t __cdecl internal_6c2fdc0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_6c2fde7
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [esi]
        public_6c2fdd4 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jge public_6c2fdde
        mov eax, dword ptr ds : [eax+8]
        jmp public_6c2fde2
        public_6c2fdde : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6c2fde2 : nop
        cmp eax, ecx
        jne public_6c2fdd4
        pop esi
        public_6c2fde7 : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x6c2fdc0)
    }
}

#undef public_6c2fdd4
#undef public_6c2fdde
#undef public_6c2fde2
#undef public_6c2fde7
