#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ae5f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5ae5f0, internal_5ae5f0, public_5ae5f0);
extern "C" NAKED register_t __cdecl internal_5ae5f0()
{
    __asm
    {
        push 0x38
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x34], dl
        mov byte ptr ds : [eax+0x35], 0
        ret 8
        UNREACHABLE_TRAP(0x5ae5f0)
    }
}
