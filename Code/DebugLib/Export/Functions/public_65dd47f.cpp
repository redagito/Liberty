#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65dd47f);
CLANG_FORWARD_PROC_SYMBOL(public_65dd4e4);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);
CLANG_FORWARD_PROC_SYMBOL(public_65de95d);
CLANG_FORWARD_PROC_SYMBOL(public_65de9bc);

#define public_65dd4cc _public_65dd4cc

PROC_DECLARE(0x65dd47f, internal_65dd47f, public_65dd47f);
extern "C" NAKED register_t __cdecl internal_65dd47f()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp esi, dword ptr ds : [public_65e7a40]
        jae public_65dd4cc
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 0x1F
        mov ecx, dword ptr ds : [ecx*4+public_65e7940]
        lea eax, ds:[eax+eax*8]
        test byte ptr ds : [ecx+eax*4+4], 1
        je public_65dd4cc
        push edi
        push esi
        call public_65de95d
        push dword ptr ss : [esp+0x18]
        push dword ptr ss : [esp+0x18]
        push esi
        call public_65dd4e4
        push esi
        mov edi, eax
        call public_65de9bc
        add esp, 0x14
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_65dd4cc : nop
        call public_65de88a
        mov dword ptr ds : [eax], 9
        call public_65de893
        and dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65dd47f)
    }
}

#undef public_65dd4cc
