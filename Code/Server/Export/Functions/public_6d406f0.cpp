#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d406f0);

#define public_6d40703 _public_6d40703
#define public_6d4071a _public_6d4071a

PROC_DECLARE(0x6d406f0, internal_6d406f0, public_6d406f0);
extern "C" NAKED register_t __cdecl internal_6d406f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp edx, ebx
        je public_6d4071a
        push esi
        push edi
        public_6d40703 : nop
        mov esi, edx
        mov edi, eax
        add edx, 0x20
        mov ecx, 8
        add eax, 0x20
        cmp edx, ebx
        rep movsd
        jne public_6d40703
        pop edi
        pop esi
        public_6d4071a : nop
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6d406f0)
    }
}

#undef public_6d40703
#undef public_6d4071a
