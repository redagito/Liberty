#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428ec0);

#define public_428ee7 _public_428ee7

PROC_DECLARE(0x428ec0, internal_428ec0, public_428ec0);
extern "C" NAKED register_t __cdecl internal_428ec0()
{
    __asm
    {
        fld dword ptr ds : [public_5ca16c]
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5ca168]
        fnstsw ax
        test ah, 0x41
        jne public_428ee7
        fstp st(0)
        fldln2 
        fld dword ptr ss : [esp+4]
        fyl2x 
        fmul qword ptr ds : [public_5ca160]
        public_428ee7 : nop
        fstp dword ptr ds : [public_667c78]
        ret 
        UNREACHABLE_TRAP(0x428ec0)
    }
}

#undef public_428ee7
