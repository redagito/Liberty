#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efabdf);

PROC_DECLARE(0x6efabdf, internal_6efabdf, public_6efabdf);
extern "C" NAKED register_t __cdecl internal_6efabdf()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+4]
        mov esi, edx
        mov edi, ecx
        shl esi, 0x1F
        shr ecx, 1
        or ecx, esi
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [eax]
        shl edi, 0x1F
        shr ecx, 1
        shr edx, 1
        or ecx, edi
        pop edi
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [eax], ecx
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6efabdf)
    }
}
