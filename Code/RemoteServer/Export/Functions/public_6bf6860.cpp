#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

PROC_DECLARE(0x6bf6860, internal_6bf6860, public_6bf6860);
extern "C" NAKED register_t __cdecl internal_6bf6860()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        push ebp
        mov ebx, ecx
        call public_6c09d26
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x24], eax
        mov ecx, ebp
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x20], ebp
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6bf6860)
    }
}
