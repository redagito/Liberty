#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6222da0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

PROC_DECLARE(0x6222da0, internal_6222da0, public_6222da0);
extern "C" NAKED register_t __cdecl internal_6222da0()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_624612c
        xor ebx, ebx
        mov cl, 1
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x1C], cl
        mov byte ptr ds : [eax+0x1D], bl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x1D], cl
        mov eax, dword ptr ds : [esi+8]
        push 0x20
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov edi, dword ptr ds : [esi+8]
        call public_624612c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x1C], bl
        mov byte ptr ds : [eax+0x1D], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x10], ebx
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6222da0)
    }
}
