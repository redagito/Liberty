#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209f40);
CLANG_FORWARD_PROC_SYMBOL(public_6209f80);
CLANG_FORWARD_PROC_SYMBOL(public_6209f90);
CLANG_FORWARD_PROC_SYMBOL(public_6209fa0);
CLANG_FORWARD_PROC_SYMBOL(public_620a1d0);
CLANG_FORWARD_PROC_SYMBOL(public_620a710);
CLANG_FORWARD_PROC_SYMBOL(public_620cbb0);
CLANG_FORWARD_JUMP_SYMBOL(public_62474e0);

#define public_6207194 _public_6207194
#define public_62071b4 _public_62071b4
#define public_6207267 _public_6207267
#define public_62072a5 _public_62072a5
#define public_62072c3 _public_62072c3
#define public_62072c7 _public_62072c7
#define public_62072e0 _public_62072e0
#define public_6207315 _public_6207315
#define public_6207357 _public_6207357
#define public_620738c _public_620738c
#define public_6207390 _public_6207390
#define public_62073ac _public_62073ac

PROC_DECLARE(0x6207110, internal_6207110, public_6207110);
extern "C" NAKED register_t __cdecl internal_6207110()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_62474e0 @0x6207112*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62474e0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        mov esi, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [esi+0xC]
        push edi
        mov dword ptr ss : [esp+0xC], ebp
        lea edi, ds:[edx+ebp*8]
        mov dword ptr ss : [esp+0x2C], edi
        fcomp dword ptr ds : [edi]
        fnstsw ax
        and eax, 0x4100
        jne public_6207267
        mov ecx, dword ptr ds : [esi+0x14]
        lea eax, ss:[ebp+1]
        inc ecx
        cmp eax, ecx
        je public_62073ac
        fld dword ptr ds : [edx+eax*8]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        and eax, 0x100
        je public_62073ac
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0xC]
        add esi, 8
        lea ecx, ds:[edi+8]
        lea edx, ds:[eax+edx*8+8]
        mov dword ptr ss : [esp+0x2C], ecx
        cmp ecx, edx
        setne al
        test al, al
        je public_62071b4
        public_6207194 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        and eax, 0x4100
        je public_62071b4
        add ecx, 8
        inc ebp
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        setne al
        test al, al
        jne public_6207194
        public_62071b4 : nop
        mov ecx, dword ptr ds : [edi]
        add edi, 4
        mov dword ptr ss : [esp+0x14], ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        call public_6209f40
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x18], edx
        call public_6209f80
        mov edi, eax
        push 0
        mov ecx, edi
        call public_620a1d0
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, edi
        sub ecx, eax
        lea eax, ds:[edi+8]
        sar ecx, 3
        sub edx, ecx
        shl edx, 3
        push edx
        push eax
        push edi
        call dword ptr ds : [public_624b060]
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec ecx
        mov eax, esp
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x3C], esp
        mov dword ptr ds : [eax], ecx
        push edx
        lea ecx, ds:[eax+4]
        call public_6209f40
        push ecx
        lea ecx, ss:[esp+0x38]
        mov eax, esp
        mov dword ptr ss : [esp+0x3C], esp
        push eax
        mov byte ptr ss : [esp+0x34], 0
        call public_6209fa0
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        call public_620cbb0
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        call public_620a710
        jmp public_6207390
        public_6207267 : nop
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [edi]
        fnstsw ax
        test ah, 5
        jp public_6207390
        test ebp, ebp
        je public_62073ac
        fld dword ptr ds : [edi-8]
        fcomp dword ptr ss : [esp+0x34]
        lea ecx, ds:[edi-8]
        fnstsw ax
        test ah, 0x41
        jnp public_62073ac
        add edx, 0xFFFFFFF8
        mov dword ptr ss : [esp+0x2C], ecx
        cmp ecx, edx
        setne al
        test al, al
        je public_62072c7
        public_62072a5 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [esp+0x34]
        fnstsw ax
        test ah, 5
        jnp public_62072c3
        sub ecx, 8
        dec ebp
        cmp ecx, edx
        mov dword ptr ss : [esp+0x2C], ecx
        setne al
        test al, al
        jne public_62072a5
        public_62072c3 : nop
        mov dword ptr ss : [esp+0xC], ebp
        public_62072c7 : nop
        add ecx, 8
        mov dword ptr ss : [esp+0x2C], ecx
        mov ebp, dword ptr ds : [edi+4]
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], ebp
        je public_62072e0
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+4]
        public_62072e0 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x30]
        add esi, 8
        mov dword ptr ss : [esp+0x14], ecx
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x28], 2
        call public_6209f80
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6207315
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [edi+4], 0
        public_6207315 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0xC]
        mov edx, edi
        sub edx, ecx
        lea ecx, ds:[edi+8]
        sar edx, 3
        sub eax, edx
        shl eax, 3
        push eax
        push ecx
        push edi
        call dword ptr ds : [public_624b060]
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 4
        dec edx
        mov eax, esp
        mov dword ptr ds : [esi+0xC], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [eax], edx
        mov dword ptr ss : [esp+0x38], esp
        test ebp, ebp
        mov dword ptr ds : [eax+4], ebp
        je public_6207357
        mov eax, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [eax+4]
        public_6207357 : nop
        push ecx
        lea edx, ss:[esp+0x38]
        mov ecx, esp
        mov dword ptr ss : [esp+0x40], esp
        push edx
        mov byte ptr ss : [esp+0x34], 2
        call public_6209f90
        lea eax, ss:[esp+0x1C]
        mov ecx, esi
        push eax
        call public_620cbb0
        test ebp, ebp
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_620738c
        mov ecx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [ecx+8]
        public_620738c : nop
        mov ebp, dword ptr ss : [esp+0xC]
        public_6207390 : nop
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ebp
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebp
        add esp, 0x1C
        ret 0x10
        public_62073ac : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edi], edx
        jmp public_6207390
        UNREACHABLE_TRAP(0x6207110)
    }
}

#undef public_6207194
#undef public_62071b4
#undef public_6207267
#undef public_62072a5
#undef public_62072c3
#undef public_62072c7
#undef public_62072e0
#undef public_6207315
#undef public_6207357
#undef public_620738c
#undef public_6207390
#undef public_62073ac
