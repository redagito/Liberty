#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3def9, internal_6d3def9, public_6d3def9);
extern "C" NAKED register_t __cdecl internal_6d3def9()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 1
        call public_6d404a2
        pop ebp
        jmp dword ptr ds : [public_6d6cadc]
        UNREACHABLE_TRAP(0x6d3def9)
    }
}
