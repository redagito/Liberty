#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd56, internal_6d5fd56, public_6d5fd56);
extern "C" NAKED register_t __cdecl internal_6d5fd56()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64070]
        UNREACHABLE_TRAP(0x6d5fd56)
    }
}
