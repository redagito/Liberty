#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebf720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faddc1 _public_6faddc1

PROC_DECLARE(0x6faddb0, internal_6faddb0, public_6faddb0);
/* CHUNK of public_6f219c0 */
extern "C" NAKED register_t __cdecl internal_6faddb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp+4]
        push eax
        mov ecx, dword ptr ss : [ebp-0x10]
        push ecx
        call public_6ebf720
        add esp, 8
        ret 
        public_6faddc1 : nop
        mov eax, offset public_6fc2d00
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faddb0)
        ASM_EXPORT_ENTRY_SINGLE(0x6faddc1, public_6faddc1)
    }
}

#undef public_6faddc1

#pragma init_seg(compiler)
extern "C" void const* const public_6faddc1 = __AsmFindLabelExport(&internal_6faddb0, 0x6faddc1);
