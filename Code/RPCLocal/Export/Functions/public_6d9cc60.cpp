#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d931c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d9cc60);
CLANG_FORWARD_PROC_SYMBOL(public_6d9cda0);
CLANG_FORWARD_JUMP_SYMBOL(public_6db288a);

PROC_DECLARE(0x6d9cc60, internal_6d9cc60, public_6d9cc60);
extern "C" NAKED register_t __cdecl internal_6d9cc60()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6db288a @0x6d9cc62*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6db288a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], 1
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_6db4fbc
        lea ecx, ds:[esi+0x30]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov dword ptr ds : [esi+0x2C], ebx
        call public_6d9cda0
        mov dword ptr ds : [esi+0x48], ebx
        lea ecx, ds:[esi+0x58]
        mov byte ptr ss : [esp+0x18], 1
        mov dword ptr ds : [esi+0x4C], ebx
        mov dword ptr ds : [esi+0x50], ebx
        mov dword ptr ds : [esi+0x54], ebx
        call public_6d931c0
        mov dword ptr ds : [esi+0x68], ebx
        mov dword ptr ds : [esi+0x6C], ebx
        mov dword ptr ds : [esi+0x70], ebx
        lea eax, ss:[esp+0xB]
        push eax
        lea ecx, ds:[esi+0x74]
        mov byte ptr ss : [esp+0x1C], 2
        call dword ptr ds : [public_6db30b4]
        lea ecx, ds:[esi+0x80]
        mov byte ptr ss : [esp+0x18], 3
        call dword ptr ds : [public_6db310c]
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [esi+0x9C], bl
        mov dword ptr ds : [esi+0xA0], ebx
        mov dword ptr ds : [esi+0xA4], ebx
        mov dword ptr ds : [esi+0xA8], ebx
        mov dword ptr ds : [esi+0xAC], ebx
        mov dword ptr ds : [esi+0xB0], ebx
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xB8], ebx
        mov dword ptr ds : [esi+0xBC], ebx
        mov word ptr ds : [esi+0xC0], bx
        mov byte ptr ds : [esi+0xC2], bl
        mov word ptr ds : [esi+0xC4], bx
        mov dword ptr ds : [esi+0xC8], ebx
        mov dword ptr ds : [esi+0xCC], ebx
        mov dword ptr ds : [esi+0xD0], ebx
        mov dword ptr ds : [esi+0xD4], ebx
        mov dword ptr ds : [esi+0xD8], ebx
        mov dword ptr ds : [esi+0xDC], ebx
        mov dword ptr ds : [esi+0xE0], ebx
        mov dword ptr ds : [esi+0xE4], ebx
        mov byte ptr ds : [esi+0xE8], bl
        mov dword ptr ds : [esi], offset public_6db3fc4
        mov dword ptr ds : [esi+0xC], 0x20004
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d9cc60)
    }
}
