#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27450);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c27502 _public_6c27502
#define public_6c2750f _public_6c2750f
#define public_6c27516 _public_6c27516

PROC_DECLARE(0x6c27450, internal_6c27450, public_6c27450);
extern "C" NAKED register_t __cdecl internal_6c27450()
{
    __asm
    {
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        push edi
        xor eax, eax
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], offset public_6c37310
        mov ecx, 0xB
        lea edi, ss:[esp+0x18]
        rep stosd
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [esi]
        push edx
        push esi
        xor ebp, ebp
        mov dword ptr ss : [esp+0x28], 0x80000000
        mov dword ptr ss : [esp+0x2C], 1
        mov dword ptr ss : [esp+0x34], 3
        mov dword ptr ss : [esp+0x38], 0x8000080
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x18], 0x34
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call dword ptr ds : [ecx+0x7C]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_6c27516
        mov eax, dword ptr ds : [esi]
        push ebp
        push ebx
        push esi
        call dword ptr ds : [eax+0x28]
        mov ebp, eax
        mov edi, ebp
        shr edi, 1
        lea ecx, ds:[edi+edi]
        push ecx
        call public_6c34eac
        mov edx, dword ptr ds : [esi]
        add esp, 4
        push 0
        lea ecx, ss:[esp+0x4C]
        push ecx
        push ebp
        push eax
        push ebx
        push esi
        mov dword ptr ss : [esp+0x64], eax
        call dword ptr ds : [edx+0x14]
        mov ebp, eax
        test ebp, ebp
        je public_6c27502
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [eax], ecx
        jmp public_6c2750f
        public_6c27502 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        push edx
        call public_6c34ea0
        add esp, 4
        public_6c2750f : nop
        mov eax, dword ptr ds : [esi]
        push ebx
        push esi
        call dword ptr ds : [eax+0x10]
        public_6c27516 : nop
        xor eax, eax
        test ebp, ebp
        setne al
        pop edi
        pop esi
        pop ebp
        pop ebx
        dec eax
        and eax, 0x80004005
        add esp, 0x34
        ret 
        UNREACHABLE_TRAP(0x6c27450)
    }
}

#undef public_6c27502
#undef public_6c2750f
#undef public_6c27516
