#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802040);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805ee0);

#define public_6805f09 _public_6805f09

PROC_DECLARE(0x6805ee0, internal_6805ee0, public_6805ee0);
extern "C" NAKED register_t __cdecl internal_6805ee0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        call public_6801cf0
        mov esi, eax
        push esi
        call public_6802040
        add esp, 8
        test eax, eax
        jne public_6805f09
/*FIXUP push offset public_680d8b8 @0x6805efb*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d8b8
        push edi
        call public_6805d80
        add esp, 8
        public_6805f09 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6805ee0)
    }
}

#undef public_6805f09
