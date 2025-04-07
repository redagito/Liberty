#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d33b52 _public_6d33b52
#define public_6d33b6a _public_6d33b6a
#define public_6d33b7a _public_6d33b7a
#define public_6d33b96 _public_6d33b96
#define public_6d33bb0 _public_6d33bb0
#define public_6d33bb5 _public_6d33bb5
#define public_6d33bdf _public_6d33bdf
#define public_6d33c42 _public_6d33c42
#define public_6d33c44 _public_6d33c44

PROC_DECLARE(0x6d33af0, internal_6d33af0, public_6d33af0);
extern "C" NAKED register_t __cdecl internal_6d33af0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x14]
        mov ebp, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [ecx+0x10]
        sub ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_6d33bdf
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [edi+0x10]
        mov bx, word ptr ds : [edx]
        test bx, bx
        je public_6d33bdf
        cmp bx, 0xFF
        mov esi, dword ptr ds : [eax+0xC]
        ja public_6d33b7a
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d33b52
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d33b52 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d33bb0
        public_6d33b6a : nop
        push ebx
        mov ecx, esi
        call public_6d3ea70
        test al, al
        jne public_6d33bb0
        xor eax, eax
        jmp public_6d33bb5
        public_6d33b7a : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d33b96
        push ebx
        mov ecx, esi
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x1C]
        jne public_6d33bb0
        public_6d33b96 : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d33b6a
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d33b6a
        public_6d33bb0 : nop
        mov eax, 1
        public_6d33bb5 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d33bdf
        mov ecx, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        add ecx, 2
        mov dword ptr ds : [edi+0x10], ecx
        inc dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d33bdf : nop
        mov eax, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [eax+0x1008]
        mov edx, dword ptr ds : [eax+0x1004]
        add esi, 0xFFFFFFF8
        mov ecx, esi
        cmp ecx, edx
        mov dword ptr ds : [eax+0x1008], esi
        jne public_6d33c42
        mov edx, dword ptr ds : [eax+0x1000]
        mov dword ptr ds : [edx+8], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+0x1000], ecx
        add ecx, 0x10
        mov dword ptr ds : [eax+0x1004], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+0x1008], ecx
        mov ecx, dword ptr ds : [eax+0x1000]
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0x100C], ecx
        mov eax, edx
        jmp public_6d33c44
        public_6d33c42 : nop
        mov eax, ecx
        public_6d33c44 : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        mov dword ptr ss : [esp+8], edx
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d33af0)
    }
}

#undef public_6d33b52
#undef public_6d33b6a
#undef public_6d33b7a
#undef public_6d33b96
#undef public_6d33bb0
#undef public_6d33bb5
#undef public_6d33bdf
#undef public_6d33c42
#undef public_6d33c44
