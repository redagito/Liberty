#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8a170 _public_6d8a170

PROC_DECLARE(0x6d8a130, internal_6d8a130, public_6d8a130);
extern "C" NAKED register_t __cdecl internal_6d8a130()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x27
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8a170
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+0x24], edx
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], cl
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6d8a170 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8a130)
    }
}

#undef public_6d8a170
