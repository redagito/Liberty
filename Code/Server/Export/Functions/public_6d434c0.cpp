#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43500);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

PROC_DECLARE(0x6d434c0, internal_6d434c0, public_6d434c0);
extern "C" NAKED register_t __cdecl internal_6d434c0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0x20
        mov byte ptr ds : [public_6d8f634], al
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_6d43500 @0x6d434d6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d43500
        mov dword ptr ds : [public_6d8f638], eax
        mov dword ptr ds : [public_6d8f63c], 0
        call public_6d6013e
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6d434c0)
    }
}
