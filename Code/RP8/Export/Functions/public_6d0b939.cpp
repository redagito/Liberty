#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cd40);

#define public_6d0b9a5 _public_6d0b9a5
#define public_6d0bb05 _public_6d0bb05
#define public_6d0bb4e _public_6d0bb4e
#define public_6d0bb50 _public_6d0bb50

PROC_DECLARE(0x6d0b939, internal_6d0b939, public_6d0b939);
extern "C" NAKED register_t __cdecl internal_6d0b939()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xA8
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0b9a5
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-8]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-8], ecx
/*FIXUP push offset public_6d66758 @0x6d0b97b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66758
        push 0xABA
/*FIXUP push offset public_6d66790 @0x6d0b985*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66790
/*FIXUP push offset public_6d667dc @0x6d0b98a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d667dc
        mov edx, dword ptr ss : [ebp-8]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0bb50
        public_6d0b9a5 : nop
        mov byte ptr ss : [ebp-1], 1
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0xA4], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x21FC
        mov dword ptr ss : [ebp-0xA0], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [ecx+0x10], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x24]
        mov dword ptr ds : [ecx+0x14], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+0x18], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [ecx+0x1C], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x28]
        mov dword ptr ds : [ecx+0x20], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x30]
        mov dword ptr ds : [ecx+0x24], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x34]
        mov dword ptr ds : [ecx+0x28], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ss : [ebp-0xA0]
        mov eax, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [ecx+0x2C], eax
        movzx ecx, byte ptr ss : [ebp-1]
        test ecx, ecx
        je public_6d0bb4e
        mov dword ptr ss : [ebp-0x18], 0x3F800000
        mov dword ptr ss : [ebp-0x28], 0x3F800000
        mov dword ptr ss : [ebp-0x38], 0x3F800000
        mov dword ptr ss : [ebp-0x1C], 0
        mov dword ptr ss : [ebp-0x20], 0
        mov dword ptr ss : [ebp-0x24], 0
        mov dword ptr ss : [ebp-0x2C], 0
        mov dword ptr ss : [ebp-0x30], 0
        mov dword ptr ss : [ebp-0x34], 0
        lea edx, ss:[ebp-0x14]
        mov dword ptr ss : [ebp-0x6C], edx
        mov eax, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x6C]
        mov dword ptr ds : [edx], 0
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d5e484]
        fstp dword ptr ss : [ebp-0x18]
        cmp dword ptr ds : [public_6d70540], 0
        jne public_6d0bb05
        call public_6d5cd40
        mov dword ptr ds : [public_6d70540], eax
        public_6d0bb05 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        lea ecx, ss:[ebp-0x38]
        push ecx
        lea edx, ss:[ebp-0x9C]
        push edx
        mov eax, dword ptr ds : [public_6d70540]
        mov dword ptr ss : [ebp-0xA8], eax
        mov ecx, dword ptr ss : [ebp-0xA8]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp-0xA8]
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[ebp-0x9C]
        lea edi, ss:[ebp-0x68]
        rep movsd
        mov ecx, 0xC
        lea esi, ss:[ebp-0x68]
        mov edi, dword ptr ss : [ebp+0xC]
        rep movsd
        public_6d0bb4e : nop
        xor eax, eax
        public_6d0bb50 : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0b939)
    }
}

#undef public_6d0b9a5
#undef public_6d0bb05
#undef public_6d0bb4e
#undef public_6d0bb50
