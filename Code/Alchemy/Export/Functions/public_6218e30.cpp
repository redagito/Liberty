#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218e30);

PROC_DECLARE(0x6218e30, internal_6218e30, public_6218e30);
extern "C" NAKED register_t __cdecl internal_6218e30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x10], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6218e30)
    }
}
