#include "Common-PCH.h"

PROC_DECLARE(0x62b4ec0, internal_62b4ec0, public_62b4ec0);
extern "C" NAKED register_t __cdecl internal_62b4ec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x1E8
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x62b4ec0)
    }
}
