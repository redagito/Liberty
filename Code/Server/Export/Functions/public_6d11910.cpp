#include "Server-PCH.h"

PROC_DECLARE(0x6d11910, internal_6d11910, public_6d11910);
extern "C" NAKED register_t __cdecl internal_6d11910()
{
    __asm
    {
        push esi
        mov eax, ecx
        mov esi, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+0x14]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call dword ptr ds : [edx+0x74]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d11910)
    }
}
