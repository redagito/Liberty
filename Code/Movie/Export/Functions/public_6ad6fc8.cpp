#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad6de9);

#define public_6ad6fdf _public_6ad6fdf

PROC_DECLARE(0x6ad6fc8, internal_6ad6fc8, public_6ad6fc8);
extern "C" NAKED register_t __cdecl internal_6ad6fc8()
{
    __asm
    {
        push eax
        fnstsw ax
        and eax, 0x3800
        je public_6ad6fdf
        fild dword ptr ss : [esp+8]
        call public_6ad6de9
        pop eax
        ret 4
        public_6ad6fdf : nop
        fxch 
        sub esp, 0xC
        fstp tbyte ptr ss : [esp]
        fild dword ptr ss : [esp+0x14]
        call public_6ad6de9
        fld tbyte ptr ss : [esp]
        fxch 
        add esp, 0xC
        pop eax
        ret 4
        UNREACHABLE_TRAP(0x6ad6fc8)
    }
}

#undef public_6ad6fdf
