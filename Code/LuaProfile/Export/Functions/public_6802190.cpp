#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802190);
CLANG_FORWARD_PROC_SYMBOL(public_6803ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6803bf0);

#define public_68021c1 _public_68021c1
#define public_68021d3 _public_68021d3

PROC_DECLARE(0x6802190, internal_6802190, public_6802190);
extern "C" NAKED register_t __cdecl internal_6802190()
{
    __asm
    {
        push esi
        call public_6803ab0
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_68021d3
        shl eax, 4
        mov esi, eax
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+4]
        lea eax, ds:[ecx+esi-0x10]
        cmp dword ptr ds : [eax], 0xFFFFFFFE
        je public_68021c1
        push eax
        call public_6803bf0
        add esp, 4
        test eax, eax
        jne public_68021d3
        public_68021c1 : nop
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [eax+esi-8]
        mov eax, dword ptr ds : [ecx+0x20]
        pop esi
        ret 
        public_68021d3 : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6802190)
    }
}

#undef public_68021c1
#undef public_68021d3
