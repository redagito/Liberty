#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6344c30);
CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_JUMP_SYMBOL(public_6397aa3);

#define public_6344c66 _public_6344c66
#define public_6344c75 _public_6344c75
#define public_6344c92 _public_6344c92
#define public_6344c99 _public_6344c99

PROC_DECLARE(0x6344c30, internal_6344c30, public_6344c30);
extern "C" NAKED register_t __cdecl internal_6344c30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397aa3 @0x6344c32*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397aa3
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov dword ptr ds : [esi], offset public_63a5418
        xor edi, edi
        mov di, word ptr ds : [esi+0x12]
        mov dword ptr ss : [esp+0x18], 1
        dec edi
        js public_6344c75
        public_6344c66 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        dec edi
        jns public_6344c66
        public_6344c75 : nop
        mov eax, dword ptr ds : [esi+0x14]
        xor ebx, ebx
        lea ecx, ds:[esi+0x18]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x18], bl
        je public_6344c99
        cmp eax, ebx
        je public_6344c92
        push eax
        call public_6343fb0
        add esp, 4
        public_6344c92 : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov word ptr ds : [esi+0x10], bx
        public_6344c99 : nop
        mov word ptr ds : [esi+0x12], bx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_63a5420
        call public_63522f0
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6344c30)
    }
}

#undef public_6344c66
#undef public_6344c75
#undef public_6344c92
#undef public_6344c99
