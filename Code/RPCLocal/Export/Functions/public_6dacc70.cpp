#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dacc70, internal_6dacc70, public_6dacc70);
extern "C" NAKED register_t __cdecl internal_6dacc70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6518]
        mov dword ptr ds : [public_6dbc330], eax
        ret 
        UNREACHABLE_TRAP(0x6dacc70)
    }
}
