#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ffc20);

PROC_DECLARE(0x65ffc20, internal_65ffc20, public_65ffc20);
extern "C" NAKED register_t __cdecl internal_65ffc20()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov dword ptr ds : [eax+0x38], ecx
        mov dword ptr ds : [eax+0x3C], ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], ecx
        ret 
        UNREACHABLE_TRAP(0x65ffc20)
    }
}
