#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1e5c4 _public_6f1e5c4
#define public_6f1e5d4 _public_6f1e5d4

PROC_DECLARE(0x6f1e5b0, internal_6f1e5b0, public_6f1e5b0);
extern "C" NAKED register_t __cdecl internal_6f1e5b0()
{
    __asm
    {
        push 0x74
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6f1e5c4
        mov ecx, eax
        public_6f1e5c4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6f1e5d4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6f1e5d4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6f1e5b0)
    }
}

#undef public_6f1e5c4
#undef public_6f1e5d4
