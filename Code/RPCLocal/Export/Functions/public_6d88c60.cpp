#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d88cb9 _public_6d88cb9

PROC_DECLARE(0x6d88c60, internal_6d88c60, public_6d88c60);
extern "C" NAKED register_t __cdecl internal_6d88c60()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x38
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d88cb9
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov cx, word ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x28], cx
        mov ax, word ptr ds : [eax+0xA]
        mov ecx, dword ptr ss : [esp+4]
        mov word ptr ds : [ecx+0x2A], ax
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d88cb9 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d88c60)
    }
}

#undef public_6d88cb9
