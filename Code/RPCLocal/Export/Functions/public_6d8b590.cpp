#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d8b5ff _public_6d8b5ff

PROC_DECLARE(0x6d8b590, internal_6d8b590, public_6d8b590);
extern "C" NAKED register_t __cdecl internal_6d8b590()
{
    __asm
    {
        push ecx
        push ebp
        lea eax, ss:[esp+4]
        push eax
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        push 0x16
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8b5ff
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push esi
        push edi
        push ebx
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx+0x20], eax
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx+0x20]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x24], ebx
        mov edx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [ebp]
        add esp, 4
        push ecx
        push edx
        mov ecx, ebp
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        pop ebx
        public_6d8b5ff : nop
        pop ebp
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8b590)
    }
}

#undef public_6d8b5ff
