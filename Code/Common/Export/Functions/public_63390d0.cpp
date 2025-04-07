#include "Common-PCH.h"

PROC_DECLARE(0x63390d0, internal_63390d0, public_63390d0);
extern "C" NAKED register_t __cdecl internal_63390d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x44
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63390d0)
    }
}
