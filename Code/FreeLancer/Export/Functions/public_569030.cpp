#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46b6a0);

PROC_DECLARE(0x569030, internal_569030, public_569030);
extern "C" NAKED register_t __cdecl internal_569030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x260]
        push 0
        push edx
        call public_46b6a0
        add esp, 4
        push eax
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+0x260]
        push edx
        call public_46b6a0
        add esp, 4
        push eax
        call dword ptr ds : [public_5c62fc]
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x569030)
    }
}
