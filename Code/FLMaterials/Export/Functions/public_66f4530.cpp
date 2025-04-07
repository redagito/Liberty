#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f4552 _public_66f4552
#define public_66f4572 _public_66f4572
#define public_66f4576 _public_66f4576
#define public_66f457b _public_66f457b
#define public_66f4605 _public_66f4605
#define public_66f460e _public_66f460e
#define public_66f4610 _public_66f4610
#define public_66f4626 _public_66f4626
#define public_66f463d _public_66f463d
#define public_66f4655 _public_66f4655
#define public_66f4667 _public_66f4667

PROC_DECLARE(0x66f4530, internal_66f4530, public_66f4530);
extern "C" NAKED register_t __cdecl internal_66f4530()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        push esi
        xor ebx, ebx
        xor ecx, ecx
        cmp eax, 0x14
        push edi
        jne public_66f4655
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+8]
        mov esi, dword ptr ss : [ebp+4]
        public_66f4552 : nop
        mov dl, byte ptr ds : [esi]
        mov al, dl
        cmp dl, byte ptr ds : [edi]
        jne public_66f4576
        cmp al, bl
        je public_66f4572
        mov dl, byte ptr ds : [esi+1]
        mov al, dl
        cmp dl, byte ptr ds : [edi+1]
        jne public_66f4576
        add esi, 2
        add edi, 2
        cmp al, bl
        jne public_66f4552
        public_66f4572 : nop
        xor eax, eax
        jmp public_66f457b
        public_66f4576 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_66f457b : nop
        cmp eax, ebx
        jne public_66f4655
        push 0x80
        call public_6700810
        mov edx, eax
        add esp, 4
        cmp edx, ebx
        je public_66f460e
        mov dword ptr ds : [edx+0x10], ebx
        mov dword ptr ds : [edx+4], ebx
        mov dword ptr ds : [edx+8], ebx
        mov dword ptr ds : [edx+0xC], ebx
        mov dword ptr ds : [edx+0x14], ebx
        mov dword ptr ds : [edx+0x18], ebx
        mov dword ptr ds : [edx+0x1C], ebx
        mov byte ptr ds : [edx+0x64], bl
        mov byte ptr ds : [edx+0x65], bl
        lea esi, ds:[edx+0x20]
        xor eax, eax
        mov ecx, 0x11
        mov edi, esi
        rep stosd
        mov eax, 0x3F800000
        mov dword ptr ds : [edx+0x30], eax
        mov dword ptr ds : [edx+0x34], eax
        mov dword ptr ds : [edx+0x38], eax
        mov dword ptr ds : [edx+0x3C], eax
        mov dword ptr ds : [esi], eax
        mov dword ptr ds : [edx+0x24], eax
        mov dword ptr ds : [edx+0x28], eax
        mov dword ptr ds : [edx+0x2C], eax
        lea eax, ds:[edx+0x74]
        mov dword ptr ds : [eax], offset public_6701834
        mov dword ptr ds : [eax+4], 1
        mov dword ptr ds : [eax+8], edx
        mov dword ptr ds : [edx], offset public_67017c0
        mov ecx, dword ptr ss : [ebp+8]
        cmp ecx, ebx
        mov dword ptr ds : [edx+0x70], ecx
        jne public_66f4605
        mov dword ptr ds : [edx+0x70], eax
        mov esi, edx
        jmp public_66f4610
        public_66f4605 : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], eax
        mov esi, edx
        jmp public_66f4610
        public_66f460e : nop
        xor esi, esi
        public_66f4610 : nop
        cmp esi, ebx
        jne public_66f4626
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [edx], esi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 0xC
        public_66f4626 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        mov ecx, esi
        call dword ptr ds : [eax+0x58]
        mov edi, eax
        cmp edi, ebx
        je public_66f4667
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_66f463d
        mov dword ptr ds : [eax], ebx
        public_66f463d : nop
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ebx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_66f4655 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFD
        mov dword ptr ds : [edx], ecx
        pop ebx
        ret 0xC
        public_66f4667 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], esi
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x66f4530)
    }
}

#undef public_66f4552
#undef public_66f4572
#undef public_66f4576
#undef public_66f457b
#undef public_66f4605
#undef public_66f460e
#undef public_66f4610
#undef public_66f4626
#undef public_66f463d
#undef public_66f4655
#undef public_66f4667
