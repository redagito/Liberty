#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);

#define public_6b37ca7 _public_6b37ca7

PROC_DECLARE(0x6b37c30, internal_6b37c30, public_6b37c30);
extern "C" NAKED register_t __cdecl internal_6b37c30()
{
    __asm
    {
        push ecx
        push esi
        lea eax, ss:[esp+4]
        push eax
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+8]
        push 0x41
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b37ca7
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x20], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x24], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x28], ecx
        mov cx, word ptr ds : [eax+0xC]
        mov edx, dword ptr ss : [esp+4]
        mov word ptr ds : [edx+0x2C], cx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x30], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x34], ecx
        mov al, byte ptr ds : [eax+0x18]
        mov ecx, dword ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x38], al
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x24]
        public_6b37ca7 : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b37c30)
    }
}

#undef public_6b37ca7
