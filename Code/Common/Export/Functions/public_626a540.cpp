#include "Common-PCH.h"

PROC_DECLARE(0x626a540, internal_626a540, public_626a540);
extern "C" NAKED register_t __cdecl internal_626a540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], esi
        mov dword ptr ds : [eax+4], edx
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [eax+8], edx
        mov esi, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [ecx+0xC], esi
        mov dword ptr ds : [eax+0xC], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x626a540)
    }
}
