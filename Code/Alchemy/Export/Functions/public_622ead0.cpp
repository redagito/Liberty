#include "Alchemy-PCH.h"

PROC_DECLARE(0x622ead0, internal_622ead0, public_622ead0);
extern "C" NAKED register_t __cdecl internal_622ead0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x14], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x622ead0)
    }
}
