#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ccc0);
CLANG_FORWARD_PROC_SYMBOL(public_6230790);
CLANG_FORWARD_PROC_SYMBOL(public_62307b0);
CLANG_FORWARD_PROC_SYMBOL(public_6230f30);
CLANG_FORWARD_PROC_SYMBOL(public_6244360);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);
CLANG_FORWARD_JUMP_SYMBOL(public_62499eb);

#define public_6230d19 _public_6230d19
#define public_6230d39 _public_6230d39
#define public_6230d3d _public_6230d3d
#define public_6230d42 _public_6230d42
#define public_6230dbd _public_6230dbd
#define public_6230dc3 _public_6230dc3
#define public_6230ddf _public_6230ddf
#define public_6230e4f _public_6230e4f
#define public_6230e5e _public_6230e5e
#define public_6230e7b _public_6230e7b
#define public_6230e8b _public_6230e8b
#define public_6230ec4 _public_6230ec4
#define public_6230edd _public_6230edd
#define public_6230eea _public_6230eea
#define public_6230ef0 _public_6230ef0

PROC_DECLARE(0x6230ce0, internal_6230ce0, public_6230ce0);
extern "C" NAKED register_t __cdecl internal_6230ce0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62499eb @0x6230ce8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62499eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        push esi
        push edi
        xor ebx, ebx
        xor edi, edi
        cmp ecx, 8
        jne public_6230edd
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [ecx+8]
        public_6230d19 : nop
        mov dl, byte ptr ds : [eax]
        mov cl, dl
        cmp dl, byte ptr ds : [esi]
        jne public_6230d3d
        cmp cl, bl
        je public_6230d39
        mov dl, byte ptr ds : [eax+1]
        mov cl, dl
        cmp dl, byte ptr ds : [esi+1]
        jne public_6230d3d
        add eax, 2
        add esi, 2
        cmp cl, bl
        jne public_6230d19
        public_6230d39 : nop
        xor eax, eax
        jmp public_6230d42
        public_6230d3d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6230d42 : nop
        cmp eax, ebx
        jne public_6230edd
        push 0xD4
        call public_624612c
        mov esi, eax
        add esp, 4
        mov dword ptr ss : [esp+0x34], esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov ebp, 1
        je public_6230dbd
        lea edi, ds:[esi+0xC]
        mov dword ptr ds : [esi], offset public_624b8b0
        mov ecx, edi
        call public_6244360
        mov dword ptr ds : [edi+0xB4], ebx
        mov dword ptr ds : [edi+0xB8], ebx
        mov dword ptr ds : [edi+0xBC], ebx
        mov dword ptr ds : [edi], offset public_624e530
        mov dword ptr ds : [edi+0xBC], offset public_6257ac4
        mov dword ptr ds : [esi+0xB8], esi
        mov dword ptr ds : [esi+0x24], esi
        mov dword ptr ds : [esi], offset public_624e650
        mov dword ptr ds : [edi], offset public_624e5c0
        mov dword ptr ds : [esi+0xD0], ebp
        mov dword ptr ss : [esp+0x34], esi
        jmp public_6230dc3
        public_6230dbd : nop
        mov dword ptr ss : [esp+0x34], ebx
        mov esi, ebx
        public_6230dc3 : nop
        cmp esi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        jne public_6230ddf
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFC
        mov dword ptr ds : [ecx], esi
        jmp public_6230ef0
        public_6230ddf : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [esi+0xC]
        lea edi, ds:[esi+0xC]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], eax
        je public_6230eea
        mov dword ptr ss : [esp+0x14], edi
        lea esi, ds:[edi+0xB4]
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x18], esi
        push ecx
        mov byte ptr ss : [esp+0x30], 2
        mov ecx, esp
        mov dword ptr ss : [esp+0x20], esp
        push ecx
        mov ecx, esi
        call public_62307b0
        push ecx
        mov ecx, esi
        mov edx, esp
        mov dword ptr ss : [esp+0x28], esp
        push edx
        mov byte ptr ss : [esp+0x38], 3
        call public_6230790
        lea eax, ss:[esp+0x40]
        mov ecx, esi
        push eax
        mov byte ptr ss : [esp+0x38], 2
        call public_6230f30
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x38], ebx
        cmp eax, ebx
        je public_6230e5e
        public_6230e4f : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        jne public_6230e4f
        public_6230e5e : nop
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov ebp, dword ptr ds : [edi+0xA0]
        mov esi, dword ptr ds : [edi+0x9C]
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C], 4
        je public_6230e8b
        public_6230e7b : nop
        push esi
        call public_620ccc0
        add esi, 4
        add esp, 4
        cmp esi, ebp
        jne public_6230e7b
        public_6230e8b : nop
        mov eax, dword ptr ds : [edi+0x9C]
        push eax
        call public_62460e0
        mov dword ptr ds : [edi+0x9C], ebx
        mov dword ptr ds : [edi+0xA0], ebx
        mov dword ptr ds : [edi+0xA4], ebx
        mov eax, dword ptr ds : [edi+0x7C]
        add esp, 4
        cmp eax, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_6230ec4
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+0x7C], ebx
        public_6230ec4 : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x40]
        add esp, 4
        mov dword ptr ds : [eax], ebx
        mov eax, dword ptr ss : [esp+0x10]
        jmp public_6230ef0
        public_6230edd : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [ecx], edi
        jmp public_6230ef0
        public_6230eea : nop
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [edx], esi
        public_6230ef0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x20
        ret 0xC
        UNREACHABLE_TRAP(0x6230ce0)
    }
}

#undef public_6230d19
#undef public_6230d39
#undef public_6230d3d
#undef public_6230d42
#undef public_6230dbd
#undef public_6230dc3
#undef public_6230ddf
#undef public_6230e4f
#undef public_6230e5e
#undef public_6230e7b
#undef public_6230e8b
#undef public_6230ec4
#undef public_6230edd
#undef public_6230eea
#undef public_6230ef0
