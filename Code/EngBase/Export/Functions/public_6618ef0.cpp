#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66172c0);
CLANG_FORWARD_PROC_SYMBOL(public_6618ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6618ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6619d80);
CLANG_FORWARD_PROC_SYMBOL(public_661a140);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6618f1b _public_6618f1b
#define public_6618f42 _public_6618f42
#define public_6618f6e _public_6618f6e
#define public_6618f72 _public_6618f72
#define public_6618f92 _public_6618f92

PROC_DECLARE(0x6618ef0, internal_6618ef0, public_6618ef0);
extern "C" NAKED register_t __cdecl internal_6618ef0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_6618f6e
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6618f6e
        cmp ebx, eax
        jne public_6618f6e
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_6618f42
        public_6618f1b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_6619d80
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0x1C]
        call public_66172c0
        push ebx
        call public_66281d0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6618f1b
        public_6618f42 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 0xC
        public_6618f6e : nop
        cmp ecx, ebx
        je public_6618f92
        public_6618f72 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_661a140
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov ecx, esi
        call public_6618ad0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6618f72
        public_6618f92 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6618ef0)
    }
}

#undef public_6618f1b
#undef public_6618f42
#undef public_6618f6e
#undef public_6618f72
#undef public_6618f92
