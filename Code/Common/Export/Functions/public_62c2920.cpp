#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c2920);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_JUMP_SYMBOL(public_6394a08);

#define public_62c295f _public_62c295f

PROC_DECLARE(0x62c2920, internal_62c2920, public_62c2920);
extern "C" NAKED register_t __cdecl internal_62c2920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394a08 @0x62c2922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394a08
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [esi+4], ecx
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], ecx
        je public_62c295f
        add eax, 8
        cmp eax, ecx
        je public_62c295f
        push eax
        mov ecx, esi
        call public_6341610
        public_62c295f : nop
        mov ecx, dword ptr ss : [esp+8]
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x62c2920)
    }
}

#undef public_62c295f
