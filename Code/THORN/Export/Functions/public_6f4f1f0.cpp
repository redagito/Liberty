#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

PROC_DECLARE(0x6f4f1f0, internal_6f4f1f0, public_6f4f1f0);
extern "C" NAKED register_t __cdecl internal_6f4f1f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        push esi
        push edi
        lea eax, ds:[ebx+0x30]
        push eax
        push 0
        call public_6f4fe10
        mov esi, dword ptr ss : [esp+0x1C]
        mov ebp, eax
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[ebp+0x28]
        rep movsd
        mov ecx, edx
        mov eax, ebx
        cdq 
        and ecx, 3
        rep movsb
        mov byte ptr ds : [ebx+ebp+0x28], 0
        and edx, 0x3F
        add eax, edx
        xor esi, esi
        mov dword ptr ss : [ebp+0x20], ebx
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [ebp+0x10], 0xFFFFFFFA
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx+0x78]
        add esp, 8
        sar eax, 6
        inc eax
        add edx, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+0x78], edx
        pop edi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], eax
        pop esi
        mov dword ptr ss : [ebp], ebp
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4f1f0)
    }
}
