#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46f52);

PROC_DECLARE(0x6d46f52, internal_6d46f52, public_6d46f52);
extern "C" NAKED register_t __cdecl internal_6d46f52()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        push 0x82
        push 0
        push eax
        call dword ptr ds : [ecx]
        and byte ptr ds : [eax+0x80], 0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d46f52)
    }
}
