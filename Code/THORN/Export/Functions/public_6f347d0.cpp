#include "THORN-PCH.h"

PROC_DECLARE(0x6f347d0, internal_6f347d0, public_6f347d0);
extern "C" NAKED register_t __cdecl internal_6f347d0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 0xC
        UNREACHABLE_TRAP(0x6f347d0)
    }
}
