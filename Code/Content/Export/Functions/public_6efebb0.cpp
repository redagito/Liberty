#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efe870);
CLANG_FORWARD_PROC_SYMBOL(public_6efebb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faca18);

#define public_6efebf1 _public_6efebf1

PROC_DECLARE(0x6efebb0, internal_6efebb0, public_6efebb0);
extern "C" NAKED register_t __cdecl internal_6efebb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faca18 @0x6efebb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faca18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_6fb7d74
        mov dword ptr ss : [esp+0x10], 0
        call public_6efe870
        mov ecx, dword ptr ds : [public_6fcf254]
        test ecx, ecx
        je public_6efebf1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        public_6efebf1 : nop
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi], offset public_6fb385c
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6efebb0)
    }
}

#undef public_6efebf1
