#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45fb20);

PROC_DECLARE(0x45fb20, internal_45fb20, public_45fb20);
extern "C" NAKED register_t __cdecl internal_45fb20()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x45fb20)
    }
}
