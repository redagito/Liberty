#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4df40);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e730);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4df67 _public_6b4df67

PROC_DECLARE(0x6b4df40, internal_6b4df40, public_6b4df40);
extern "C" NAKED register_t __cdecl internal_6b4df40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        mov dword ptr ds : [esi], offset public_6b6e044
        je public_6b4df67
        mov eax, dword ptr ds : [esi+0x20]
        test eax, eax
        je public_6b4df67
        push eax
        call public_6b6a092
        add esp, 4
        mov dword ptr ds : [esi+0x20], 0
        public_6b4df67 : nop
        mov ecx, esi
        pop esi
        jmp public_6b4e730
        UNREACHABLE_TRAP(0x6b4df40)
    }
}

#undef public_6b4df67
