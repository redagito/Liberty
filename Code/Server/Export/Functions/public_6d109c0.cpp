#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f6d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d109c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d109e0 _public_6d109e0
#define public_6d109f8 _public_6d109f8
#define public_6d10a26 _public_6d10a26

PROC_DECLARE(0x6d109c0, internal_6d109c0, public_6d109c0);
extern "C" NAKED register_t __cdecl internal_6d109c0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_6d10a26
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6d109e0 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x50
        lea ebp, ds:[esi+8]
        call public_6d60012
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6d109f8
        mov ebx, eax
        public_6d109f8 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_6d0f6d0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_6d109e0
        pop edi
        pop ebp
        pop ebx
        public_6d10a26 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d109c0)
    }
}

#undef public_6d109e0
#undef public_6d109f8
#undef public_6d10a26
