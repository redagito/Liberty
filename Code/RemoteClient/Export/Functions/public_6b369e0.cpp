#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b36a0c _public_6b36a0c

PROC_DECLARE(0x6b369e0, internal_6b369e0, public_6b369e0);
extern "C" NAKED register_t __cdecl internal_6b369e0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x4C
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36a0c
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b36a0c : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6b369e0)
    }
}

#undef public_6b36a0c
