#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d852c0);

PROC_DECLARE(0x6d852c0, internal_6d852c0, public_6d852c0);
extern "C" NAKED register_t __cdecl internal_6d852c0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+4], ecx
        mov cl, byte ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_6db3758
        mov byte ptr ds : [eax+0xC], cl
        ret 4
        UNREACHABLE_TRAP(0x6d852c0)
    }
}
