#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71f30);

PROC_DECLARE(0x6f71f30, internal_6f71f30, public_6f71f30);
extern "C" NAKED register_t __cdecl internal_6f71f30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ds : [eax]
        fmul dword ptr ds : [ecx]
        faddp 
        fadd dword ptr ds : [eax+4]
        ret 4
        UNREACHABLE_TRAP(0x6f71f30)
    }
}
