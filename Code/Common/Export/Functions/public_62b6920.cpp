#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b6920);
CLANG_FORWARD_PROC_SYMBOL(public_62b9cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6394774);

#define public_62b69f5 _public_62b69f5
#define public_62b6a10 _public_62b6a10

PROC_DECLARE(0x62b6920, internal_62b6920, public_62b6920);
extern "C" NAKED register_t __cdecl internal_62b6920()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6394774 @0x62b6922*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394774
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov dl, byte ptr ds : [esi+4]
        lea eax, ds:[esi+4]
        lea ecx, ds:[edi+4]
        xor ebx, ebx
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [edx]
        push edx
        push ebx
        push eax
        mov dword ptr ss : [esp+0x1C], edi
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x14]
        lea ecx, ds:[edi+0x14]
        lea ebp, ds:[esi+0x14]
        mov byte ptr ds : [ecx], al
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov edx, dword ptr ds : [public_63991c0]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        push ebp
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_63991a8]
        mov dl, byte ptr ds : [esi+0x24]
        lea ecx, ds:[edi+0x24]
        lea ebp, ds:[esi+0x24]
        mov byte ptr ds : [ecx], dl
        mov dword ptr ds : [ecx+4], ebx
        mov dword ptr ds : [ecx+8], ebx
        mov dword ptr ds : [ecx+0xC], ebx
        mov eax, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [eax]
        push edx
        push ebx
        push ebp
        mov byte ptr ss : [esp+0x2C], 1
        call dword ptr ds : [public_63991a8]
        mov al, byte ptr ds : [esi+0x34]
        lea ebp, ds:[edi+0x34]
        push 0x18
        mov byte ptr ss : [esp+0x24], 2
        mov byte ptr ss : [ebp], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ss : [ebp+4], eax
        mov dword ptr ss : [ebp+8], ebx
        mov esi, dword ptr ds : [esi+0x38]
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x28], ecx
        je public_62b6a10
        public_62b69f5 : nop
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ds:[ebx+8]
        push edx
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebp
        call public_62b9cf0
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, esi
        jne public_62b69f5
        public_62b6a10 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x62b6920)
    }
}

#undef public_62b69f5
#undef public_62b6a10
