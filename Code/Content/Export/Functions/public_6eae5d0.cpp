#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb15b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eae606 _public_6eae606
#define public_6eae61b _public_6eae61b
#define public_6eae648 _public_6eae648

PROC_DECLARE(0x6eae5d0, internal_6eae5d0, public_6eae5d0);
extern "C" NAKED register_t __cdecl internal_6eae5d0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        push 0x64
        mov byte ptr ds : [edi], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp esi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_6eae648
        push ebp
        public_6eae606 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0x64
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6eae61b
        mov ebp, eax
        public_6eae61b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_6eb15b0
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jne public_6eae606
        pop ebp
        public_6eae648 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eae5d0)
    }
}

#undef public_6eae606
#undef public_6eae61b
#undef public_6eae648
