#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51a0c0);

PROC_DECLARE(0x51a0c0, internal_51a0c0, public_51a0c0);
extern "C" NAKED register_t __cdecl internal_51a0c0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ecx]
        fsubp 
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+4]
        fsubp 
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+8]
        ret 
        UNREACHABLE_TRAP(0x51a0c0)
    }
}
