#include "FLServer-PCH.h"

PROC_DECLARE(0x418774, internal_418774, public_418774);
extern "C" NAKED register_t __cdecl internal_418774()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba54]
        UNREACHABLE_TRAP(0x418774)
    }
}
