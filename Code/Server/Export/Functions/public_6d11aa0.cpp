#include "Server-PCH.h"

PROC_DECLARE(0x6d11aa0, internal_6d11aa0, public_6d11aa0);
extern "C" NAKED register_t __cdecl internal_6d11aa0()
{
    __asm
    {
        push esi
        mov eax, ecx
        mov esi, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call dword ptr ds : [edx+0x98]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d11aa0)
    }
}
