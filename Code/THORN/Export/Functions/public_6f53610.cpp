#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53460);
CLANG_FORWARD_PROC_SYMBOL(public_6f53610);

#define public_6f5362d _public_6f5362d

PROC_DECLARE(0x6f53610, internal_6f53610, public_6f53610);
extern "C" NAKED register_t __cdecl internal_6f53610()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], 0x114
        push edi
        je public_6f5362d
/*FIXUP push offset public_6f612e0 @0x6f5361f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f612e0
        push esi
        call public_6f511c0
        add esp, 8
        public_6f5362d : nop
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_6f53460
        push esi
        mov edi, eax
        call public_6f52920
        add esp, 0xC
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53610)
    }
}

#undef public_6f5362d
