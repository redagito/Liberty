#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218e10);

PROC_DECLARE(0x6218e10, internal_6218e10, public_6218e10);
extern "C" NAKED register_t __cdecl internal_6218e10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+0x10]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 8
        UNREACHABLE_TRAP(0x6218e10)
    }
}
