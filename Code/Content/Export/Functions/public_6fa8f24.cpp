#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f24, internal_6fa8f24, public_6fa8f24);
extern "C" NAKED register_t __cdecl internal_6fa8f24()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30c4]
        UNREACHABLE_TRAP(0x6fa8f24)
    }
}
