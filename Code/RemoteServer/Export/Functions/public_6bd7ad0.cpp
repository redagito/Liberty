#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be1750);

#define public_6bd7b1b _public_6bd7b1b

PROC_DECLARE(0x6bd7ad0, internal_6bd7ad0, public_6bd7ad0);
extern "C" NAKED register_t __cdecl internal_6bd7ad0()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x3D
        push 3
        call public_6be1750
        test eax, eax
        jne public_6bd7b1b
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ax, word ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x24], ax
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x170]
        public_6bd7b1b : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bd7ad0)
    }
}

#undef public_6bd7b1b
