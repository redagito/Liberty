#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eda790);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab376);

#define public_6eda87e _public_6eda87e
#define public_6eda8cb _public_6eda8cb
#define public_6eda963 _public_6eda963
#define public_6edaa83 _public_6edaa83
#define public_6edaa91 _public_6edaa91
#define public_6edaa9f _public_6edaa9f
#define public_6edaad8 _public_6edaad8
#define public_6edaadb _public_6edaadb

PROC_DECLARE(0x6eda790, internal_6eda790, public_6eda790);
extern "C" NAKED register_t __cdecl internal_6eda790()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab376 @0x6eda792*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab376
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x198
        mov eax, dword ptr ss : [esp+0x1AC]
        mov dl, byte ptr ss : [esp+3]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x1B4]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x1B4]
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
        mov dword ptr ss : [esp+0x50], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x1BC]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x1B8], edi
        mov dword ptr ds : [ebx], offset public_6fb685c
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edaad8
        push 0x10
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edaad8
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x1B8]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edaadb
        mov dword ptr ds : [ebx+0x28], 0x4A3A
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6eda87e
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 2
        jae public_6eda8cb
        public_6eda87e : nop
        push 8
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+8]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], esi
        public_6eda8cb : nop
        lea eax, ss:[esp+0x1F]
        push eax
        lea ecx, ss:[esp+0x38]
        call public_6ead6a0
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0x154]
        push eax
        lea edx, ss:[esp+0x38]
        push edx
        mov byte ptr ss : [esp+0x1B8], 1
        call public_6f66220
        add esp, 8
        lea ecx, ss:[esp+0x34]
        call public_6fa3db0
        cmp eax, 1
        lea ecx, ss:[esp+0x34]
        seta byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x1B0], 0
        call public_6eec8d0
/*FIXUP push offset public_6fb6848 @0x6eda91b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6848
        lea eax, ss:[esp+0xA0]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0xA4], edi
        mov byte ptr ss : [esp+0xA8], 0
        call public_6ea9f40
        mov dword ptr ss : [esp+0xA4], eax
        mov al, byte ptr ss : [esp+0x1F]
        add esp, 0xC
        test al, al
        mov dword ptr ss : [esp+0x54], edi
        mov byte ptr ss : [esp+0x58], 0
        mov eax, offset public_6fb6844
        jne public_6eda963
        mov eax, offset public_6fb6840
/*FIXUP public_6eda963 : nop
        push offset public_6fb572c @0x6eda963*/
  FIXUP public_6eda963 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push eax
        lea ecx, ss:[esp+0xA4]
        push ecx
        lea edx, ss:[esp+0x60]
/*FIXUP push offset public_6fb6838 @0x6eda975*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6838
        push edx
        call public_6eec2b0
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, 0x11
        lea esi, ss:[esp+0x6C]
        lea edi, ss:[esp+0x138]
        rep movsd
/*FIXUP push offset public_6fb62ec @0x6eda996*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea ecx, ss:[esp+0x140]
        push ecx
        lea edx, ss:[esp+0x184]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x104]
        mov ecx, 0x11
        lea edi, ss:[esp+0x100]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x28
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6f937c0
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x34]
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x5C], 0
        mov byte ptr ss : [esp+0x60], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        test eax, eax
        jne public_6edaa83
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 8
        test eax, 0xC40
        je public_6edaa9f
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x60]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6edaa91
        public_6edaa83 : nop
        lea ecx, ss:[esp+0x54]
        push ecx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6edaa91 : nop
        push offset public_6fb6064 @0x6edaa91*/
  FIXUP public_6edaa91 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x58]
        call public_6eec250
        public_6edaa9f : nop
        lea edx, ss:[esp+0xE0]
        mov ecx, 0x11
        lea esi, ss:[esp+0x54]
        lea edi, ss:[esp+0xDC]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x2C]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        jmp public_6edaadb
        public_6edaad8 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edaadb : nop
        mov ecx, dword ptr ss : [esp+0x1A8]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1A4
        ret 0xC
        UNREACHABLE_TRAP(0x6eda790)
    }
}

#undef public_6eda87e
#undef public_6eda8cb
#undef public_6eda963
#undef public_6edaa83
#undef public_6edaa91
#undef public_6edaa9f
#undef public_6edaad8
#undef public_6edaadb
