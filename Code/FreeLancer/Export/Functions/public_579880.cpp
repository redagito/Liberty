#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579880);

PROC_DECLARE(0x579880, internal_579880, public_579880);
extern "C" NAKED register_t __cdecl internal_579880()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x471], al
        ret 4
        UNREACHABLE_TRAP(0x579880)
    }
}
