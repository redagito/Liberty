#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db24f8 _public_6db24f8

PROC_DECLARE(0x6db24f0, internal_6db24f0, public_6db24f0);
/* CHUNK of public_6d884a0 */
extern "C" NAKED register_t __cdecl internal_6db24f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x14]
        jmp public_6d91340
        public_6db24f8 : nop
        mov eax, offset public_6db6c6c
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db24f0)
        ASM_EXPORT_ENTRY_SINGLE(0x6db24f8, public_6db24f8)
    }
}

#undef public_6db24f8

#pragma init_seg(compiler)
extern "C" void const* const public_6db24f8 = __AsmFindLabelExport(&internal_6db24f0, 0x6db24f8);
