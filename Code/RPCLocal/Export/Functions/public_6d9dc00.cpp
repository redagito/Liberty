#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9dc00);

PROC_DECLARE(0x6d9dc00, internal_6d9dc00, public_6d9dc00);
extern "C" NAKED register_t __cdecl internal_6d9dc00()
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
        mov dword ptr ds : [eax], offset public_6db3f04
        mov dword ptr ds : [eax+0xC], 0x20026
        ret 
        UNREACHABLE_TRAP(0x6d9dc00)
    }
}
