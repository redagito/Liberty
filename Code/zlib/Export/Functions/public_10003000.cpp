#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10002de0);
CLANG_FORWARD_PROC_SYMBOL(public_10003000);

PROC_DECLARE(0x10003000, internal_10003000, public_10003000);
extern "C" NAKED register_t __cdecl internal_10003000()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push ecx
        push 0
        push 8
        push 0xF
        push 8
        push edx
        push eax
        call public_10002de0
        ret 0x10
        UNREACHABLE_TRAP(0x10003000)
    }
}
