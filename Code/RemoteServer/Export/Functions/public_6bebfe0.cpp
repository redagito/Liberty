#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebfe0);

#define public_6bec00b _public_6bec00b
#define public_6bec03c _public_6bec03c

PROC_DECLARE(0x6bebfe0, internal_6bebfe0, public_6bebfe0);
extern "C" NAKED register_t __cdecl internal_6bebfe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ds : [eax]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [edi]
        add edx, 2
        mov eax, edx
        cmp eax, esi
        mov dword ptr ds : [edi], edx
        jb public_6bec00b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0x10
        public_6bec00b : nop
        mov ebp, dword ptr ss : [esp+0x18]
        push ebp
        call dword ptr ds : [public_6c0b210]
        mov word ptr ds : [ebx], ax
        mov edx, dword ptr ds : [edi]
        movzx eax, ax
        shl eax, 1
        add edx, eax
        mov ecx, edx
        add esp, 4
        add ebx, 2
        cmp ecx, esi
        mov dword ptr ds : [edi], edx
        jb public_6bec03c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0x10
        public_6bec03c : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, ebp
        mov edi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        add eax, ebx
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6bebfe0)
    }
}

#undef public_6bec00b
#undef public_6bec03c
