#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_62ef820);
CLANG_FORWARD_PROC_SYMBOL(public_62fce70);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ef830 _public_62ef830
#define public_62ef860 _public_62ef860
#define public_62ef87f _public_62ef87f
#define public_62ef8a4 _public_62ef8a4
#define public_62ef8a8 _public_62ef8a8
#define public_62ef8c8 _public_62ef8c8

PROC_DECLARE(0x62ef820, internal_62ef820, public_62ef820);
extern "C" NAKED register_t __cdecl internal_62ef820()
{
    __asm
    {
        mov ecx, offset public_63fca98
        jmp public_62ef830
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_62ef830 : nop
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_62ef8a4
        mov ecx, eax
        cmp eax, ecx
        jne public_62ef8a4
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62ef87f
        nop 
        lea esp, ss:[esp]
        public_62ef860 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62fce70
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62ef860
        public_62ef87f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_632c410
        jmp public_62ef8c8
        public_62ef8a4 : nop
        cmp eax, edi
        je public_62ef8c8
        public_62ef8a8 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62ef8a8
        public_62ef8c8 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62ef820)
    }
}

#undef public_62ef830
#undef public_62ef860
#undef public_62ef87f
#undef public_62ef8a4
#undef public_62ef8a8
#undef public_62ef8c8
