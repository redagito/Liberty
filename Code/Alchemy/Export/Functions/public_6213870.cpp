#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213870, internal_6213870, public_6213870);
extern "C" NAKED register_t __cdecl internal_6213870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x6213870)
    }
}
