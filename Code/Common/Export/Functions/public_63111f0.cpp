#include "Common-PCH.h"

PROC_DECLARE(0x63111f0, internal_63111f0, public_63111f0);
extern "C" NAKED register_t __cdecl internal_63111f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax], offset public_63a3700
        ret 4
        UNREACHABLE_TRAP(0x63111f0)
    }
}
