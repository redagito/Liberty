#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f1ac0);
CLANG_FORWARD_PROC_SYMBOL(public_67008a2);

#define public_6700ac8 _public_6700ac8

PROC_DECLARE(0x6700ac0, internal_6700ac0, public_6700ac0);
/* CHUNK of public_66f1fc0 */
extern "C" NAKED register_t __cdecl internal_6700ac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x54]
        jmp public_66f1ac0
        public_6700ac8 : nop
        mov eax, offset public_670327c
        jmp public_67008a2
        UNREACHABLE_TRAP(0x6700ac0)
        ASM_EXPORT_ENTRY_SINGLE(0x6700ac8, public_6700ac8)
    }
}

#undef public_6700ac8

#pragma init_seg(compiler)
extern "C" void const* const public_6700ac8 = __AsmFindLabelExport(&internal_6700ac0, 0x6700ac8);
