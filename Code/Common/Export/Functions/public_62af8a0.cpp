#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af8a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62af8c5 _public_62af8c5
#define public_62af8cf _public_62af8cf
#define public_62af8d9 _public_62af8d9
#define public_62af8f3 _public_62af8f3

PROC_DECLARE(0x62af8a0, internal_62af8a0, public_62af8a0);
extern "C" NAKED register_t __cdecl internal_62af8a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc434]
        test eax, eax
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, ecx
        je public_62af8c5
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc434], ecx
        dec dword ptr ds : [public_63fc440]
        jmp public_62af8cf
        public_62af8c5 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62af8cf : nop
        test edi, edi
        mov dword ptr ds : [eax], esi
        mov ecx, edi
        jne public_62af8d9
        mov ecx, eax
        public_62af8d9 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        lea ecx, ds:[eax+8]
        test ecx, ecx
        mov dword ptr ds : [edx], eax
        je public_62af8f3
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_62af8f3 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62af8a0)
    }
}

#undef public_62af8c5
#undef public_62af8cf
#undef public_62af8d9
#undef public_62af8f3
