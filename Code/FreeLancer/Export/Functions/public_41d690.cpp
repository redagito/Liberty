#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d690);
CLANG_FORWARD_PROC_SYMBOL(public_41d750);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41d6b0 _public_41d6b0
#define public_41d6c8 _public_41d6c8
#define public_41d6f6 _public_41d6f6

PROC_DECLARE(0x41d690, internal_41d690, public_41d690);
extern "C" NAKED register_t __cdecl internal_41d690()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_41d6f6
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_41d6b0 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        lea ebp, ds:[esi+8]
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_41d6c8
        mov ebx, eax
        public_41d6c8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_41d750
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_41d6b0
        pop edi
        pop ebp
        pop ebx
        public_41d6f6 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x41d690)
    }
}

#undef public_41d6b0
#undef public_41d6c8
#undef public_41d6f6
