#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37ae9);
CLANG_FORWARD_PROC_SYMBOL(public_6d3b0c6);

PROC_DECLARE(0x6d3b0c6, internal_6d3b0c6, public_6d3b0c6);
extern "C" NAKED register_t __cdecl internal_6d3b0c6()
{
    __asm
    {
        push esi
        push 1
        push 0x10
        push dword ptr ss : [esp+0x10]
        mov esi, ecx
        call public_6d37ae9
        mov dword ptr ds : [esi], offset public_6d5f6c8
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3b0c6)
    }
}
