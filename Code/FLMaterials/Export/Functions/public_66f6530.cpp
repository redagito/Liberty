#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f6530);
CLANG_FORWARD_PROC_SYMBOL(public_6700810);

#define public_66f655c _public_66f655c
#define public_66f6585 _public_66f6585

PROC_DECLARE(0x66f6530, internal_66f6530, public_66f6530);
extern "C" NAKED register_t __cdecl internal_66f6530()
{
    __asm
    {
        push esi
        push 0xC
        call public_6700810
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_66f6585
        mov eax, dword ptr ds : [public_6704028]
        test eax, eax
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], eax
        jne public_66f655c
        mov eax, dword ptr ds : [public_6701c68]
        mov dword ptr ds : [esi+8], eax
        public_66f655c : nop
        mov dword ptr ds : [esi], offset public_6701c58
        call dword ptr ds : [public_6701008]
        mov edx, dword ptr ds : [public_6704028]
        mov ecx, dword ptr ds : [eax]
        push 0x80000000
        push edx
        push esi
        push eax
        call dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+8]
        mov al, 1
        pop esi
        ret 
        public_66f6585 : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x66f6530)
    }
}

#undef public_66f655c
#undef public_66f6585
