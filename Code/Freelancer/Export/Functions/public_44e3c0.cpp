#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44e3c0);
CLANG_FORWARD_PROC_SYMBOL(public_4540c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9d4b);

#define public_44e413 _public_44e413

PROC_DECLARE(0x44e3c0, internal_44e3c0, public_44e3c0);
extern "C" NAKED register_t __cdecl internal_44e3c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b9d4b @0x44e3c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9d4b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x70
        mov esi, ecx
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_44e413
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        push esi
        push esi
        mov ecx, eax
        call public_4540c0
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        public_44e413 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x44e3c0)
    }
}

#undef public_44e413
