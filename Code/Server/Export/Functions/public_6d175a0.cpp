#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4f480);

#define public_6d175c6 _public_6d175c6
#define public_6d175dd _public_6d175dd

PROC_DECLARE(0x6d175a0, internal_6d175a0, public_6d175a0);
extern "C" NAKED register_t __cdecl internal_6d175a0()
{
    __asm
    {
        call dword ptr ds : [public_6d641c0]
        mov ecx, dword ptr ds : [public_6d90260]
        test al, al
        mov eax, dword ptr ss : [esp+8]
        jne public_6d175c6
        mov edx, eax
        imul edx, 0x418
        push esi
        mov esi, dword ptr ds : [edx+ecx-0x24]
        test esi, esi
        pop esi
        je public_6d175dd
        public_6d175c6 : nop
        mov edx, dword ptr ss : [esp+4]
        imul eax, 0x418
        push edx
        lea ecx, ds:[eax+ecx-0x418]
        call public_6d4f480
        public_6d175dd : nop
        ret 8
        UNREACHABLE_TRAP(0x6d175a0)
    }
}

#undef public_6d175c6
#undef public_6d175dd
