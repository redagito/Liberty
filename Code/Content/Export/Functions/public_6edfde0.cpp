#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6edfde0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab44b);

#define public_6edfebd _public_6edfebd
#define public_6edfee0 _public_6edfee0
#define public_6edfef8 _public_6edfef8
#define public_6edff1e _public_6edff1e
#define public_6edff3e _public_6edff3e
#define public_6edffae _public_6edffae
#define public_6edffb1 _public_6edffb1

PROC_DECLARE(0x6edfde0, internal_6edfde0, public_6edfde0);
extern "C" NAKED register_t __cdecl internal_6edfde0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab44b @0x6edfde2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab44b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        mov eax, dword ptr ss : [esp+0xF0]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0xF8]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0xF8]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x100]
        push esi
        push ecx
        mov dword ptr ss : [esp+0xFC], edi
        mov dword ptr ds : [ebx], offset public_6fb703c
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edffae
        push 0x400
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edffae
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edffb1
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6edfebd
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edff1e
        public_6edfebd : nop
        push 4
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6edfef8
        nop 
        lea esp, ss:[esp]
        public_6edfee0 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6edfee0
        public_6edfef8 : nop
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea eax, ds:[esi+4]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_6fa3db0
        lea ecx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], ecx
        mov dword ptr ss : [ebp+4], esi
        public_6edff1e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb7024
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        mov byte ptr ss : [esp+0x24], 0
        jb public_6edff3e
        mov eax, 0x3F
        public_6edff3e : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb7024
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x24], 0
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6edff64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x78]
        mov ecx, 0x11
        lea edi, ss:[esp+0x74]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6edffb1
        public_6edffae : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edffb1 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 0xC
        UNREACHABLE_TRAP(0x6edfde0)
    }
}

#undef public_6edfebd
#undef public_6edfee0
#undef public_6edfef8
#undef public_6edff1e
#undef public_6edff3e
#undef public_6edffae
#undef public_6edffb1
