#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5533f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

PROC_DECLARE(0x5533b0, internal_5533b0, public_5533b0);
extern "C" NAKED register_t __cdecl internal_5533b0()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push 0xC
        mov byte ptr ds : [public_679894], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
/*FIXUP push offset _public_5533f0 @0x5533c6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5533f0
        mov dword ptr ds : [public_679898], eax
        mov dword ptr ds : [public_67989c], 0
        call public_5b7e6c
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x5533b0)
    }
}
