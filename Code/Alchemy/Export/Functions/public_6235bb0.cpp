#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235bb0);

PROC_DECLARE(0x6235bb0, internal_6235bb0, public_6235bb0);
extern "C" NAKED register_t __cdecl internal_6235bb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [eax+0xF0]
        lea ecx, ds:[eax+eax*2]
        xor eax, eax
        add ecx, ecx
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6235bb0)
    }
}
