#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66276b0);

PROC_DECLARE(0x66276b0, internal_66276b0, public_66276b0);
extern "C" NAKED register_t __cdecl internal_66276b0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], edx
        ret 8
        UNREACHABLE_TRAP(0x66276b0)
    }
}
