#include "FLServer-PCH.h"

PROC_DECLARE(0x418e28, internal_418e28, public_418e28);
extern "C" NAKED register_t __cdecl internal_418e28()
{
    __asm
    {
        jmp dword ptr ds : [public_41b618]
        UNREACHABLE_TRAP(0x418e28)
    }
}
