#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6218c60);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_6218c7a _public_6218c7a

PROC_DECLARE(0x6218c60, internal_6218c60, public_6218c60);
extern "C" NAKED register_t __cdecl internal_6218c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_6218c7a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_6218c7a : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6218c60)
    }
}

#undef public_6218c7a
