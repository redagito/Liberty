#include "Common-PCH.h"

PROC_DECLARE(0x62d4330, internal_62d4330, public_62d4330);
extern "C" NAKED register_t __cdecl internal_62d4330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x140
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x62d4330)
    }
}
