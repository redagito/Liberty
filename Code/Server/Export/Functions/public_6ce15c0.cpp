#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ff60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d6001e);

#define public_6ce15f3 _public_6ce15f3
#define public_6ce15fb _public_6ce15fb
#define public_6ce1610 _public_6ce1610

PROC_DECLARE(0x6ce15c0, internal_6ce15c0, public_6ce15c0);
extern "C" NAKED register_t __cdecl internal_6ce15c0()
{
    __asm
    {
        push ebx
        mov bl, byte ptr ss : [esp+8]
        test bl, 2
        push esi
        mov esi, ecx
        je public_6ce15fb
        mov eax, dword ptr ds : [esi-4]
        push edi
/*FIXUP push offset _public_6d5ff60 @0x6ce15d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d5ff60
        lea edi, ds:[esi-4]
        push eax
        push 0xDC
        push esi
        call public_6d6001e
        test bl, 1
        je public_6ce15f3
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6ce15f3 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6ce15fb : nop
        mov ecx, esi
        call public_6d5ff60
        test bl, 1
        je public_6ce1610
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce1610 : nop
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ce15c0)
    }
}

#undef public_6ce15f3
#undef public_6ce15fb
#undef public_6ce1610
