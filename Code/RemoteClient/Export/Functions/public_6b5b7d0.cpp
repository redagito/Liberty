#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b5b7d0);

PROC_DECLARE(0x6b5b7d0, internal_6b5b7d0, public_6b5b7d0);
extern "C" NAKED register_t __cdecl internal_6b5b7d0()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_6b6d924
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b5b7d0)
    }
}
