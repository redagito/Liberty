#include "FLServer-PCH.h"

PROC_DECLARE(0x415a10, internal_415a10, public_415a10);
extern "C" NAKED register_t __cdecl internal_415a10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x415a10)
    }
}
