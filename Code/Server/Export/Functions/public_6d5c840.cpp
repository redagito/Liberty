#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5c840);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d5c852 _public_6d5c852
#define public_6d5c871 _public_6d5c871

PROC_DECLARE(0x6d5c840, internal_6d5c840, public_6d5c840);
extern "C" NAKED register_t __cdecl internal_6d5c840()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_6d5c871
        public_6d5c852 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6d5c840
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6d5c852
        public_6d5c871 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d5c840)
    }
}

#undef public_6d5c852
#undef public_6d5c871
