#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beb910);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);

#define public_6beb908 _public_6beb908

PROC_DECLARE(0x6beb8f0, internal_6beb8f0, public_6beb8f0);
extern "C" NAKED register_t __cdecl internal_6beb8f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6beb910
        test byte ptr ss : [esp+8], 1
        je public_6beb908
        push esi
        call public_6c09aaa
        add esp, 4
        public_6beb908 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6beb8f0)
    }
}

#undef public_6beb908
