#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_6213fc9 _public_6213fc9

PROC_DECLARE(0x6213fa0, internal_6213fa0, public_6213fa0);
extern "C" NAKED register_t __cdecl internal_6213fa0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebx
        call public_623f960
        test eax, eax
        jne public_6213fc9
        push esi
        push edi
/*FIXUP push offset public_6255af4 @0x6213fbd*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255af4
        mov ecx, ebx
        call public_623f920
        public_6213fc9 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6213fa0)
    }
}

#undef public_6213fc9
