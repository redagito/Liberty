#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22410);

#define public_6c22430 _public_6c22430
#define public_6c2243d _public_6c2243d

PROC_DECLARE(0x6c22410, internal_6c22410, public_6c22410);
extern "C" NAKED register_t __cdecl internal_6c22410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        dec eax
        js public_6c2243d
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        lea edi, ds:[eax+1]
        lea ebx, ds:[ebx]
        public_6c22430 : nop
        mov ecx, esi
        call ebx
        add esi, ebp
        dec edi
        jne public_6c22430
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6c2243d : nop
        ret 0x10
        UNREACHABLE_TRAP(0x6c22410)
    }
}

#undef public_6c22430
#undef public_6c2243d
