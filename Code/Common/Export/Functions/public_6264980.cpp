#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63924bb);

PROC_DECLARE(0x6264980, internal_6264980, public_6264980);
extern "C" NAKED register_t __cdecl internal_6264980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63924bb @0x6264982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63924bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        mov al, byte ptr ss : [esp+3]
        push ebx
        push esi
        mov esi, ecx
        mov cl, byte ptr ss : [esp+0xB]
        push edi
        xor ebx, ebx
        push 0x30
        mov dword ptr ss : [esp+0x14], esi
        mov byte ptr ds : [esi+0x10], al
        mov byte ptr ds : [esi+0x11], cl
        mov byte ptr ds : [esi+0x1C], bl
        call public_6391d9c
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x2D], bl
        mov cl, 1
        mov byte ptr ds : [eax+0x2C], cl
        mov dword ptr ds : [esi+0x18], eax
        mov byte ptr ds : [eax+0x2D], cl
        mov eax, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax], ebx
        mov edx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edx+8], ebx
        mov edi, dword ptr ds : [esi+0x18]
        push 0x30
        call public_6391d9c
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x2C], bl
        mov byte ptr ds : [eax+0x2D], bl
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+8], eax
        mov dword ptr ds : [esi+0x20], ebx
        mov al, byte ptr ss : [esp+0x17]
        push 0xC
        mov dword ptr ss : [esp+0x28], ebx
        mov byte ptr ds : [esi+0x24], al
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], ebx
        add esp, 0xC
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        pop edi
        mov dword ptr ds : [esi+0xC], 0x3EA8F5C3
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6264980)
    }
}
