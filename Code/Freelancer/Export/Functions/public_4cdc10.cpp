#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cdc10);

PROC_DECLARE(0x4cdc10, internal_4cdc10, public_4cdc10);
extern "C" NAKED register_t __cdecl internal_4cdc10()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x30], ecx
        ret 
        UNREACHABLE_TRAP(0x4cdc10)
    }
}
