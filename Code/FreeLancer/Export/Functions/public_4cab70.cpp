#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_4cab70);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_JUMP_SYMBOL(public_5bdbfb);

#define public_4caba8 _public_4caba8

PROC_DECLARE(0x4cab70, internal_4cab70, public_4cab70);
extern "C" NAKED register_t __cdecl internal_4cab70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bdbfb @0x4cab72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bdbfb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov dword ptr ss : [esp+4], ecx
        lea esi, ds:[ecx+0x50]
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0
        call public_420d60
        test al, al
        je public_4caba8
        mov ecx, esi
        call public_59eee0
        public_4caba8 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        call public_59ef20
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4cab70)
    }
}

#undef public_4caba8
