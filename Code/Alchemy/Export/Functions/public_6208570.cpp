#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208570);
CLANG_FORWARD_PROC_SYMBOL(public_620a110);

PROC_DECLARE(0x6208570, internal_6208570, public_6208570);
extern "C" NAKED register_t __cdecl internal_6208570()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_620a110
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6208570)
    }
}
