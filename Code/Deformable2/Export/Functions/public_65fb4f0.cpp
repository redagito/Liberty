#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fb4f0);

PROC_DECLARE(0x65fb4f0, internal_65fb4f0, public_65fb4f0);
extern "C" NAKED register_t __cdecl internal_65fb4f0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x18], ecx
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x10], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+0x14], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x20], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x65fb4f0)
    }
}
