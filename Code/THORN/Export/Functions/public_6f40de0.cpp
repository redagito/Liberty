#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b970);
CLANG_FORWARD_PROC_SYMBOL(public_6f40380);
CLANG_FORWARD_PROC_SYMBOL(public_6f406e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f407e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40c40);
CLANG_FORWARD_PROC_SYMBOL(public_6f40c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f40de0);
CLANG_FORWARD_PROC_SYMBOL(public_6f40f80);
CLANG_FORWARD_PROC_SYMBOL(public_6f428b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f40e4a _public_6f40e4a
#define public_6f40ed5 _public_6f40ed5
#define public_6f40f13 _public_6f40f13
#define public_6f40f35 _public_6f40f35
#define public_6f40f64 _public_6f40f64
#define public_6f40f6f _public_6f40f6f

PROC_DECLARE(0x6f40de0, internal_6f40de0, public_6f40de0);
extern "C" NAKED register_t __cdecl internal_6f40de0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x78]
        push esi
        push edi
        mov ebx, ecx
        sub esp, 0x44
        lea eax, ds:[ebx+0x84]
        mov edi, esp
        mov ecx, 0x11
        mov esi, ebp
        push eax
        rep movsd
        call public_6f40380
        mov ecx, dword ptr ss : [ebp+0x38]
        add esp, 0x48
        push ecx
        mov ecx, ebx
        call public_6f406e0
        mov dword ptr ds : [ebx+0xBC], eax
        mov edx, dword ptr ss : [ebp+0x3C]
        push edx
        mov ecx, ebx
        call public_6f407e0
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        mov dword ptr ds : [ebx+0xC0], eax
        je public_6f40f35
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f40e4a
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f40e4a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x4C]
        call public_6f428b0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x54]
        call public_6f3b970
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f40ed5
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f40ed5 : nop
        mov edx, dword ptr ds : [eax]
        lea esi, ds:[ebx+0x8C]
        push esi
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f40f13
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f40f13 : nop
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[ebx+0x98]
        push edi
        lea ecx, ss:[esp+0x50]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0x28]
        rep movsd
        public_6f40f35 : nop
        lea edx, ds:[ebx+0x8C]
        push edx
        mov ecx, ebx
        call public_6f40c40
        lea eax, ds:[ebx+0x98]
        push eax
        mov ecx, ebx
        call public_6f40c60
        test byte ptr ss : [ebp+4], 1
        jne public_6f40f6f
        mov eax, dword ptr ss : [ebp]
        cmp eax, 2
        je public_6f40f64
        cmp eax, 1
        jne public_6f40f6f
        public_6f40f64 : nop
        add ebp, 0x44
        push ebp
        mov ecx, ebx
        call public_6f40f80
        public_6f40f6f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x6f40de0)
    }
}

#undef public_6f40e4a
#undef public_6f40ed5
#undef public_6f40f13
#undef public_6f40f35
#undef public_6f40f64
#undef public_6f40f6f
