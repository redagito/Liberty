#include "Server-PCH.h"

PROC_DECLARE(0x6cffc80, internal_6cffc80, public_6cffc80);
extern "C" NAKED register_t __cdecl internal_6cffc80()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call dword ptr ds : [public_6d64514]
        mov eax, dword ptr ds : [edi+0x28]
        pop edi
        mov dword ptr ds : [esi+0x28], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cffc80)
    }
}
