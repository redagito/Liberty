#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b42c30);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

PROC_DECLARE(0x6b42c30, internal_6b42c30, public_6b42c30);
extern "C" NAKED register_t __cdecl internal_6b42c30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6b6a092
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], edi
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6b42c30)
    }
}
