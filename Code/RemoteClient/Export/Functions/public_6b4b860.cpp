#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4b860);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4b873 _public_6b4b873

PROC_DECLARE(0x6b4b860, internal_6b4b860, public_6b4b860);
extern "C" NAKED register_t __cdecl internal_6b4b860()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        je public_6b4b873
        push eax
        call public_6b6a092
        add esp, 4
        public_6b4b873 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4b860)
    }
}

#undef public_6b4b873
