#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc8);

PROC_DECLARE(0x631db20, internal_631db20, public_631db20);
extern "C" NAKED register_t __cdecl internal_631db20()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, dword ptr ds : [public_6399308]
        call esi
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fmul dword ptr ds : [public_63997d0]
        fld qword ptr ds : [public_639e0e8]
        call public_6391fc8
        fmul dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        call esi
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_63997d0]
        fadd st(0), st
        fsub qword ptr ds : [public_6399410]
        fst dword ptr ss : [esp+0x24]
        call public_6391fc2
        fsin 
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        call esi
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, eax
        pop esi
        fmul dword ptr ds : [public_63997d0]
        fmul qword ptr ds : [public_639c9e0]
        fld st(0)
        fsin 
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], edx
        fmul dword ptr ss : [esp]
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        fcos 
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+8], edx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x631db20)
    }
}
