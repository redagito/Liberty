#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44c4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x44c4b0, internal_44c4b0, public_44c4b0);
extern "C" NAKED register_t __cdecl internal_44c4b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ds : [eax]
        mov byte ptr ds : [esi], cl
        mov al, byte ptr ds : [edx]
        mov cl, byte ptr ss : [esp+0x10]
        push edi
        push 0x10
        mov byte ptr ds : [esi+1], al
        mov byte ptr ds : [esi+0xC], cl
        call public_5b7e84
        xor ebx, ebx
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0xE], bl
        mov cl, 1
        mov byte ptr ds : [eax+0xD], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0xE], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x10
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0xD], bl
        mov byte ptr ds : [eax+0xE], bl
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        mov dword ptr ds : [eax+8], eax
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        mov eax, esi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x44c4b0)
    }
}
