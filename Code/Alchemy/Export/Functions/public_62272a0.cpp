#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62272a0);
CLANG_FORWARD_PROC_SYMBOL(public_62445c0);

PROC_DECLARE(0x62272a0, internal_62272a0, public_62272a0);
extern "C" NAKED register_t __cdecl internal_62272a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+4], eax
        jmp public_62445c0
        UNREACHABLE_TRAP(0x62272a0)
    }
}
