#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53aaa0);

PROC_DECLARE(0x4376e0, internal_4376e0, public_4376e0);
extern "C" NAKED register_t __cdecl internal_4376e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, offset public_668708
        call public_53aaa0
        ret 0xC
        UNREACHABLE_TRAP(0x4376e0)
    }
}
