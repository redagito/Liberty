#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f576f0);

PROC_DECLARE(0x6f576f0, internal_6f576f0, public_6f576f0);
extern "C" NAKED register_t __cdecl internal_6f576f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x120], edx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x124], edx
        ret 8
        UNREACHABLE_TRAP(0x6f576f0)
    }
}
