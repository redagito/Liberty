#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da05d0);

PROC_DECLARE(0x6da05d0, internal_6da05d0, public_6da05d0);
extern "C" NAKED register_t __cdecl internal_6da05d0()
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
        mov dword ptr ds : [eax+0x24], 0xFFFFFFFF
        mov dword ptr ds : [eax], offset public_6db5b14
        mov dword ptr ds : [eax+0xC], 0x30019
        ret 
        UNREACHABLE_TRAP(0x6da05d0)
    }
}
