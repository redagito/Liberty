#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fe480);

PROC_DECLARE(0x66fe480, internal_66fe480, public_66fe480);
extern "C" NAKED register_t __cdecl internal_66fe480()
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
        UNREACHABLE_TRAP(0x66fe480)
    }
}
