#include "Common-PCH.h"

PROC_DECLARE(0x62bf1d0, internal_62bf1d0, public_62bf1d0);
extern "C" NAKED register_t __cdecl internal_62bf1d0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [eax+0x58]
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bf1d0)
    }
}
