#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fac788 _public_6fac788

PROC_DECLARE(0x6fac780, internal_6fac780, public_6fac780);
/* CHUNK of public_6efb230 */
extern "C" NAKED register_t __cdecl internal_6fac780()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6eec8d0
        public_6fac788 : nop
        mov eax, offset public_6fc141c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fac780)
        ASM_EXPORT_ENTRY_SINGLE(0x6fac788, public_6fac788)
    }
}

#undef public_6fac788

#pragma init_seg(compiler)
extern "C" void const* const public_6fac788 = __AsmFindLabelExport(&internal_6fac780, 0x6fac788);
