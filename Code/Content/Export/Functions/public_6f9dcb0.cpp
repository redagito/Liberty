#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f9dcb0);

PROC_DECLARE(0x6f9dcb0, internal_6f9dcb0, public_6f9dcb0);
extern "C" NAKED register_t __cdecl internal_6f9dcb0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+4]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        ret 4
        UNREACHABLE_TRAP(0x6f9dcb0)
    }
}
