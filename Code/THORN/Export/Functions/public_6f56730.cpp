#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);

PROC_DECLARE(0x6f56730, internal_6f56730, public_6f56730);
extern "C" NAKED register_t __cdecl internal_6f56730()
{
    __asm
    {
        push 1
        call public_6f4f660
        fmul qword ptr ds : [public_6f5b468]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f56730)
    }
}
