#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9e220);

PROC_DECLARE(0x6d9e220, internal_6d9e220, public_6d9e220);
extern "C" NAKED register_t __cdecl internal_6d9e220()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x20], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax], offset public_6db3f94
        mov dword ptr ds : [eax+0xC], 0x2001E
        ret 
        UNREACHABLE_TRAP(0x6d9e220)
    }
}
