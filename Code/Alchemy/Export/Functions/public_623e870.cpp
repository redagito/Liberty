#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e870, internal_623e870, public_623e870);
extern "C" NAKED register_t __cdecl internal_623e870()
{
    __asm
    {
        jmp dword ptr ds : [public_624b008]
        UNREACHABLE_TRAP(0x623e870)
    }
}
