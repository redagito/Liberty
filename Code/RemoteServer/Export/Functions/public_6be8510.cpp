#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be8510);

PROC_DECLARE(0x6be8510, internal_6be8510, public_6be8510);
extern "C" NAKED register_t __cdecl internal_6be8510()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0d008
        mov dword ptr ds : [eax+0xC], 0x10011
        mov dword ptr ds : [eax+0x20], ecx
        mov byte ptr ds : [eax+0x28], cl
        ret 
        UNREACHABLE_TRAP(0x6be8510)
    }
}
