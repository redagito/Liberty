#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6293160);
CLANG_FORWARD_PROC_SYMBOL(public_629ed10);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393688 _public_6393688
#define public_6393690 _public_6393690

PROC_DECLARE(0x6393680, internal_6393680, public_6393680);
/* CHUNK of public_6294520 */
extern "C" NAKED register_t __cdecl internal_6393680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6293160
        public_6393688 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_629ed10
        public_6393690 : nop
        mov eax, offset public_63ac820
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393680)
        ASM_EXPORT_ENTRY_FIRST(0x6393688, public_6393688)
        ASM_EXPORT_ENTRY_LAST(0x6393690, public_6393690)
    }
}

#undef public_6393688
#undef public_6393690

#pragma init_seg(compiler)
extern "C" void const* const public_6393688 = __AsmFindLabelExport(&internal_6393680, 0x6393688);
extern "C" void const* const public_6393690 = __AsmFindLabelExport(&internal_6393680, 0x6393690);
