#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b48bc0);

PROC_DECLARE(0x6b48bc0, internal_6b48bc0, public_6b48bc0);
extern "C" NAKED register_t __cdecl internal_6b48bc0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x1C], ecx
        mov dword ptr ds : [eax], offset public_6b6cca0
        mov dword ptr ds : [eax+0xC], 0x3000A
        ret 
        UNREACHABLE_TRAP(0x6b48bc0)
    }
}
