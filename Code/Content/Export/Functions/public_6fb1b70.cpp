#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb1b78 _public_6fb1b78

PROC_DECLARE(0x6fb1b70, internal_6fb1b70, public_6fb1b70);
/* CHUNK of public_6f9e9b0 */
extern "C" NAKED register_t __cdecl internal_6fb1b70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_6fa0330
        public_6fb1b78 : nop
        mov eax, offset public_6fc71f0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb1b70)
        ASM_EXPORT_ENTRY_SINGLE(0x6fb1b78, public_6fb1b78)
    }
}

#undef public_6fb1b78

#pragma init_seg(compiler)
extern "C" void const* const public_6fb1b78 = __AsmFindLabelExport(&internal_6fb1b70, 0x6fb1b78);
