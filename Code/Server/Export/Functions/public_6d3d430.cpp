#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3d3c0);

PROC_DECLARE(0x6d3d430, internal_6d3d430, public_6d3d430);
extern "C" NAKED register_t __cdecl internal_6d3d430()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3d3c0
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3d430)
    }
}
