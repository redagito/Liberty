#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b180);

PROC_DECLARE(0x6b4b180, internal_6b4b180, public_6b4b180);
extern "C" NAKED register_t __cdecl internal_6b4b180()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6da44
        mov dword ptr ds : [eax+0xC], 0x2000B
        ret 
        UNREACHABLE_TRAP(0x6b4b180)
    }
}
