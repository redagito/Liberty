#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219390);
CLANG_FORWARD_PROC_SYMBOL(public_6240f50);

PROC_DECLARE(0x6219390, internal_6219390, public_6219390);
extern "C" NAKED register_t __cdecl internal_6219390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        push 4
        mov ecx, offset public_62579dc
        call public_6240f50
        neg al
        sbb eax, eax
        neg eax
        dec eax
        ret 0xC
        UNREACHABLE_TRAP(0x6219390)
    }
}
