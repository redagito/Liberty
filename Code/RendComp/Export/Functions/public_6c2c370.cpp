#include "RendComp-PCH.h"

PROC_DECLARE(0x6c2c370, internal_6c2c370, public_6c2c370);
extern "C" NAKED register_t __cdecl internal_6c2c370()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x34]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6c2c370)
    }
}
