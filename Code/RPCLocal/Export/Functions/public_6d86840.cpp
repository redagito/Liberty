#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d86840);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d86894 _public_6d86894

PROC_DECLARE(0x6d86840, internal_6d86840, public_6d86840);
extern "C" NAKED register_t __cdecl internal_6d86840()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        lea ecx, ds:[eax+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov edx, dword ptr ds : [eax]
        push edi
        push edx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+0x2C]
        add esp, 4
        test eax, eax
        jne public_6d86894
        push ebx
        xor eax, eax
        lea ebx, ds:[esi+4]
        mov dword ptr ds : [ebx], eax
        xor ecx, ecx
        mov dword ptr ds : [ebx+4], ecx
        xor edx, edx
        mov dword ptr ds : [ebx+8], edx
        xor edi, edi
        mov dword ptr ds : [ebx+0xC], edi
        lea ebx, ds:[esi+0x14]
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ds : [ebx+8], edx
        push eax
        mov dword ptr ds : [ebx+0xC], edi
        call public_6db1dc2
        add esp, 4
        pop ebx
        pop edi
        pop esi
        ret 
        public_6d86894 : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        mov dword ptr ds : [esi], ecx
        lea edx, ds:[ecx+0x1000]
        mov dword ptr ds : [esi+4], edx
        mov edi, ecx
        mov dword ptr ds : [esi+8], edi
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d86840)
    }
}

#undef public_6d86894
