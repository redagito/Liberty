#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9d8a0);

PROC_DECLARE(0x6d9d8a0, internal_6d9d8a0, public_6d9d8a0);
extern "C" NAKED register_t __cdecl internal_6d9d8a0()
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
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x2C], 0x3F800000
        mov dword ptr ds : [eax+0x30], ecx
        mov dword ptr ds : [eax+0x34], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax], offset public_6db514c
        mov dword ptr ds : [eax+0xC], 0x2004B
        ret 
        UNREACHABLE_TRAP(0x6d9d8a0)
    }
}
