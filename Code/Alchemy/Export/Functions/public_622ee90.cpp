#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622bd80);
CLANG_FORWARD_PROC_SYMBOL(public_622ee90);

PROC_DECLARE(0x622ee90, internal_622ee90, public_622ee90);
extern "C" NAKED register_t __cdecl internal_622ee90()
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
        jmp public_622bd80
        UNREACHABLE_TRAP(0x622ee90)
    }
}
