#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be6720);

PROC_DECLARE(0x6be6720, internal_6be6720, public_6be6720);
extern "C" NAKED register_t __cdecl internal_6be6720()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6c0cac8
        mov dword ptr ds : [eax+0xC], 0x20010
        ret 
        UNREACHABLE_TRAP(0x6be6720)
    }
}
