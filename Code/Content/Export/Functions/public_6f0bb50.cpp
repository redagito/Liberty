#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0bb50);

PROC_DECLARE(0x6f0bb50, internal_6f0bb50, public_6f0bb50);
extern "C" NAKED register_t __cdecl internal_6f0bb50()
{
    __asm
    {
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6f0bb50)
    }
}
