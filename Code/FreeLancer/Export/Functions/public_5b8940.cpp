#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8951 _public_5b8951

PROC_DECLARE(0x5b8940, internal_5b8940, public_5b8940);
/* CHUNK of public_418cd0 */
extern "C" NAKED register_t __cdecl internal_5b8940()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_401e90
        add esp, 8
        ret 
        public_5b8951 : nop
        mov eax, offset public_5f27b4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8940)
        ASM_EXPORT_ENTRY_SINGLE(0x5b8951, public_5b8951)
    }
}

#undef public_5b8951

#pragma init_seg(compiler)
extern "C" void const* const public_5b8951 = __AsmFindLabelExport(&internal_5b8940, 0x5b8951);
