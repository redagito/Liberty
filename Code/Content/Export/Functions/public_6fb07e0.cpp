#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea8cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb07e8 _public_6fb07e8
#define public_6fb07f3 _public_6fb07f3
#define public_6fb07fe _public_6fb07fe

PROC_DECLARE(0x6fb07e0, internal_6fb07e0, public_6fb07e0);
/* CHUNK of public_6f81c20 */
extern "C" NAKED register_t __cdecl internal_6fb07e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6ea8cc0
        public_6fb07e8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x1C
        jmp public_6f15350
        public_6fb07f3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_6f15350
        public_6fb07fe : nop
        mov eax, offset public_6fc5ac4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb07e0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb07e8, public_6fb07e8)
        ASM_EXPORT_ENTRY(0x6fb07f3, public_6fb07f3)
        ASM_EXPORT_ENTRY_LAST(0x6fb07fe, public_6fb07fe)
    }
}

#undef public_6fb07e8
#undef public_6fb07f3
#undef public_6fb07fe

#pragma init_seg(compiler)
extern "C" void const* const public_6fb07e8 = __AsmFindLabelExport(&internal_6fb07e0, 0x6fb07e8);
extern "C" void const* const public_6fb07f3 = __AsmFindLabelExport(&internal_6fb07e0, 0x6fb07f3);
extern "C" void const* const public_6fb07fe = __AsmFindLabelExport(&internal_6fb07e0, 0x6fb07fe);
