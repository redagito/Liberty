#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

PROC_DECLARE(0x6d40b30, internal_6d40b30, public_6d40b30);
extern "C" NAKED register_t __cdecl internal_6d40b30()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        xor ebx, ebx
        push 0x2C
        mov byte ptr ds : [esi], al
        mov byte ptr ds : [esi+1], cl
        mov byte ptr ds : [esi+0xC], bl
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x29], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x28], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x29], cl
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], ebx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ebx
        mov edi, dword ptr ds : [esi+8]
        push 0x2C
        call public_6d60012
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x28], bl
        mov byte ptr ds : [eax+0x29], bl
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
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d40b30)
    }
}
