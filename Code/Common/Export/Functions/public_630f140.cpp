#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630f140);

PROC_DECLARE(0x630f140, internal_630f140, public_630f140);
extern "C" NAKED register_t __cdecl internal_630f140()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, ecx
        push edi
        mov ecx, 9
        mov edi, eax
        rep movsd
        mov esi, dword ptr ds : [edx]
        lea ecx, ds:[eax+0x24]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov edx, dword ptr ds : [edx+8]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x630f140)
    }
}
