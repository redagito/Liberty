#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d540);

PROC_DECLARE(0x44d540, internal_44d540, public_44d540);
extern "C" NAKED register_t __cdecl internal_44d540()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax], offset public_5cc0a4
        ret 
        UNREACHABLE_TRAP(0x44d540)
    }
}
