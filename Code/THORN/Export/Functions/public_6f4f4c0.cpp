#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f4c0);

#define public_6f4f4d2 _public_6f4f4d2
#define public_6f4f4e5 _public_6f4f4e5
#define public_6f4f4ea _public_6f4f4ea

PROC_DECLARE(0x6f4f4c0, internal_6f4f4c0, public_6f4f4c0);
extern "C" NAKED register_t __cdecl internal_6f4f4c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        push esi
        mov esi, dword ptr ds : [eax+0x58]
        test esi, esi
        push edi
        je public_6f4f4e5
        mov edi, dword ptr ss : [esp+0xC]
        public_6f4f4d2 : nop
        lea ecx, ds:[esi+0x10]
        push ecx
        call edi
        add esp, 4
        test eax, eax
        jne public_6f4f4ea
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6f4f4d2
        public_6f4f4e5 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 
        public_6f4f4ea : nop
        pop edi
        lea eax, ds:[esi+0x28]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4f4c0)
    }
}

#undef public_6f4f4d2
#undef public_6f4f4e5
#undef public_6f4f4ea
