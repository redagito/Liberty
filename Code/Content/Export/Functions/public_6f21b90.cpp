#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21b90);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6faddc1);

#define public_6f21c00 _public_6f21c00
#define public_6f21c15 _public_6f21c15
#define public_6f21c2c _public_6f21c2c
#define public_6f21c3e _public_6f21c3e

PROC_DECLARE(0x6f21b90, internal_6f21b90, public_6f21b90);
extern "C" NAKED register_t __cdecl internal_6f21b90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faddc1 @0x6f21b92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faddc1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor ebx, ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f21c3e
        mov edi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov al, byte ptr ds : [edi+0xC]
        push 0xC
        mov byte ptr ds : [esi+0xC], al
        call public_6fa912a
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x14], ebx
        mov ecx, dword ptr ds : [edi+0x10]
        mov edi, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        add esp, 4
        cmp edi, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6f21c3e
        push ebp
        mov edi, edi
        public_6f21c00 : nop
        mov ebp, dword ptr ds : [ebx+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ebx
        jne public_6f21c15
        mov ebp, eax
        public_6f21c15 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f21c2c
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], edx
        public_6f21c2c : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        inc ecx
        mov dword ptr ds : [esi+0x14], ecx
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6f21c00
        pop ebp
        public_6f21c3e : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f21b90)
    }
}

#undef public_6f21c00
#undef public_6f21c15
#undef public_6f21c2c
#undef public_6f21c3e
