#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

PROC_DECLARE(0x6f36ee0, internal_6f36ee0, public_6f36ee0);
extern "C" NAKED register_t __cdecl internal_6f36ee0()
{
    __asm
    {
        push 0x20
        call public_6f57e9c
        mov ecx, dword ptr ss : [esp+8]
        mov dl, byte ptr ss : [esp+0xC]
        add esp, 4
        mov dword ptr ds : [eax+4], ecx
        mov byte ptr ds : [eax+0x1C], dl
        mov byte ptr ds : [eax+0x1D], 0
        ret 8
        UNREACHABLE_TRAP(0x6f36ee0)
    }
}
