#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62c5af0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6394fdb);

#define public_62d17b1 _public_62d17b1

PROC_DECLARE(0x62d1760, internal_62d1760, public_62d1760);
extern "C" NAKED register_t __cdecl internal_62d1760()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394fdb @0x62d1762*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394fdb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        push 0x354
        mov esi, ecx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_62d17b1
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, eax
        call public_62c5af0
        pop esi
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_62d17b1 : nop
        mov ecx, dword ptr ss : [esp+8]
        xor eax, eax
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x62d1760)
    }
}

#undef public_62d17b1
