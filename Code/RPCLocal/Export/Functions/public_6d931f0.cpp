#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d931f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d93280);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d93211 _public_6d93211

PROC_DECLARE(0x6d931f0, internal_6d931f0, public_6d931f0);
extern "C" NAKED register_t __cdecl internal_6d931f0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        push esi
        push edi
        push 0x50
        mov edi, ecx
        call public_6db1f8a
        add esp, 4
        test ebp, ebp
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        jne public_6d93211
        mov ebp, esi
        public_6d93211 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [ebx+4], esi
        mov eax, dword ptr ds : [esi+4]
        push ecx
        lea edx, ds:[esi+8]
        push edx
        mov dword ptr ds : [eax], esi
        call public_6d93280
        mov eax, dword ptr ds : [edi+8]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d931f0)
    }
}

#undef public_6d93211
