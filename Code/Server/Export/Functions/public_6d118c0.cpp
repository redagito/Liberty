#include "Server-PCH.h"

PROC_DECLARE(0x6d118c0, internal_6d118c0, public_6d118c0);
extern "C" NAKED register_t __cdecl internal_6d118c0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d64730]
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_6d6472c]
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ds:[esi+0xC]
        call dword ptr ds : [public_6d64728]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call dword ptr ds : [edx+0x78]
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6d118c0)
    }
}
