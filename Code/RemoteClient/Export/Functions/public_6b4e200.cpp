#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e200);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);

PROC_DECLARE(0x6b4e200, internal_6b4e200, public_6b4e200);
extern "C" NAKED register_t __cdecl internal_6b4e200()
{
    __asm
    {
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4e200)
    }
}
