#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be4920);

PROC_DECLARE(0x6be4920, internal_6be4920, public_6be4920);
extern "C" NAKED register_t __cdecl internal_6be4920()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov byte ptr ds : [eax+0x39], cl
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax], offset public_6c0c898
        mov dword ptr ds : [eax+0xC], 0x2002E
        ret 
        UNREACHABLE_TRAP(0x6be4920)
    }
}
