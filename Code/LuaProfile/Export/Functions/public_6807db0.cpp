#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806e90);
CLANG_FORWARD_PROC_SYMBOL(public_6806fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_6807770);
CLANG_FORWARD_PROC_SYMBOL(public_6807b80);
CLANG_FORWARD_PROC_SYMBOL(public_6807db0);
CLANG_FORWARD_PROC_SYMBOL(public_6807ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6808010);
CLANG_FORWARD_PROC_SYMBOL(public_6808140);
CLANG_FORWARD_PROC_SYMBOL(public_6808a30);
CLANG_FORWARD_PROC_SYMBOL(public_680a850);

#define public_6807de1 _public_6807de1
#define public_6807e1e _public_6807e1e
#define public_6807e33 _public_6807e33
#define public_6807e48 _public_6807e48
#define public_6807e5b _public_6807e5b
#define public_6807e66 _public_6807e66
#define public_6807e7b _public_6807e7b
#define public_6807e91 _public_6807e91
#define public_6807eb2 _public_6807eb2
#define public_6807ec5 _public_6807ec5

PROC_DECLARE(0x6807db0, internal_6807db0, public_6807db0);
extern "C" NAKED register_t __cdecl internal_6807db0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 8
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        call public_6806e90
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xFFFFFFDB
        add esp, 4
        cmp eax, 0xF7
        ja public_6807ec5
/*FIXUP xor ecx, ecx @0x6807dd2*/
/*FIXUP mov cl, byte ptr ds : [eax+public_6807ef8] @0x6807dd4*/
/*FIXUP jmp dword ptr ds : [ecx*4+public_6807ed8] @0x6807dda*/
  JMPTB cmp eax, 0
  JMPTB mov ecx, 0
  JMPTB je public_6807eb2
  JMPTB cmp eax, 1
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 2
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 3
  JMPTB mov ecx, 1
  JMPTB je public_6807e91
  JMPTB cmp eax, 4
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 5
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 6
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 7
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 8
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 9
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xF
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x10
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x11
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x12
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x13
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x14
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x15
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x16
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x17
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x18
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x19
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x1A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x1B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x1C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x1D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x1E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x1F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x20
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x21
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x22
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x23
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x24
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x25
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x26
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x27
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x28
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x29
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x2A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x2B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x2C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x2D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x2E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x2F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x30
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x31
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x32
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x33
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x34
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x35
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x36
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x37
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x38
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x39
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x3A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x3B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x3C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x3D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x3E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x3F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x40
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x41
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x42
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x43
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x44
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x45
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x46
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x47
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x48
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x49
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x4A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x4B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x4C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x4D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x4E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x4F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x50
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x51
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x52
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x53
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x54
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x55
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x56
  JMPTB mov ecx, 2
  JMPTB je public_6807e5b
  JMPTB cmp eax, 0x57
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x58
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x59
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x5A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x5B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x5C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x5D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x5E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x5F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x60
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x61
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x62
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x63
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x64
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x65
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x66
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x67
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x68
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x69
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x6A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x6B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x6C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x6D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x6E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x6F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x70
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x71
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x72
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x73
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x74
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x75
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x76
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x77
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x78
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x79
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x7A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x7B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x7C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x7D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x7E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x7F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x80
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x81
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x82
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x83
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x84
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x85
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x86
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x87
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x88
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x89
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x8A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x8B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x8C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x8D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x8E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x8F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x90
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x91
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x92
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x93
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x94
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x95
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x96
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x97
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x98
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x99
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x9A
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x9B
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x9C
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x9D
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x9E
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0x9F
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA0
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA1
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA2
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA3
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA4
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA5
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA6
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA7
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA8
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xA9
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xAA
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xAB
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xAC
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xAD
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xAE
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xAF
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB0
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB1
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB2
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB3
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB4
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB5
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB6
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB7
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB8
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xB9
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xBA
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xBB
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xBC
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xBD
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xBE
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xBF
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC0
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC1
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC2
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC3
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC4
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC5
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC6
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC7
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC8
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xC9
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xCA
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xCB
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xCC
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xCD
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xCE
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xCF
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD0
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD1
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD2
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD3
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD4
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD5
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD6
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD7
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD8
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xD9
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xDA
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xDB
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xDC
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xDD
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xDE
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xDF
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE0
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE1
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE2
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE3
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE4
  JMPTB mov ecx, 3
  JMPTB je public_6807e66
  JMPTB cmp eax, 0xE5
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE6
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE7
  JMPTB mov ecx, 4
  JMPTB je public_6807e48
  JMPTB cmp eax, 0xE8
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xE9
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xEA
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xEB
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xEC
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xED
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xEE
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xEF
  JMPTB mov ecx, 0
  JMPTB je public_6807eb2
  JMPTB cmp eax, 0xF0
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xF1
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xF2
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xF3
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xF4
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xF5
  JMPTB mov ecx, 7
  JMPTB je public_6807ec5
  JMPTB cmp eax, 0xF6
  JMPTB mov ecx, 5
  JMPTB je public_6807de1
  JMPTB cmp eax, 0xF7
  JMPTB mov ecx, 6
  JMPTB je public_6807e33
  JMPTB int 3
        public_6807de1 : nop
        mov edx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x14]
        push esi
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], eax
        call public_6806a20
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0x50]
        add esp, 4
        test eax, eax
        jle public_6807e1e
        cmp dword ptr ds : [ecx+eax*4-4], 1
        jne public_6807e1e
        cmp dword ptr ds : [esi+4], 0x5E
        je public_6807e1e
        fld qword ptr ss : [esp+4]
        dec eax
        fchs 
        mov dword ptr ds : [ecx+0x50], eax
        fstp qword ptr ss : [esp+4]
        public_6807e1e : nop
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+4]
        push ecx
        push edx
        push esi
        call public_6808010
        add esp, 0xC
        jmp public_6807e7b
        public_6807e33 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        push esi
        call public_6807ff0
        push esi
        call public_6806a20
        add esp, 0xC
        jmp public_6807e7b
        public_6807e48 : nop
        push 0xFFFFFFFF
        push esi
        call public_6806fe0
        push esi
        call public_6806a20
        add esp, 0xC
        jmp public_6807e7b
        public_6807e5b : nop
        push esi
        call public_6808a30
        add esp, 4
        jmp public_6807e7b
        public_6807e66 : nop
        push esi
        call public_6806a20
        mov ecx, dword ptr ds : [esi+0x1C]
        push ecx
        push 0
        push esi
        call public_6807770
        add esp, 0x10
        public_6807e7b : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], 4
        mov dword ptr ds : [eax+4], 0
        pop esi
        add esp, 8
        ret 
        public_6807e91 : nop
        push esi
        call public_6806a20
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        push esi
        call public_6807b80
        push 0x29
        push esi
        call public_6807230
        add esp, 0x14
        pop esi
        add esp, 8
        ret 
        public_6807eb2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call public_6808140
        add esp, 8
        pop esi
        add esp, 8
        ret 
/*FIXUP public_6807ec5 : nop
        push offset public_680dc80 @0x6807ec5*/
  FIXUP public_6807ec5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680dc80
        push esi
        call public_680a850
        UNREACHABLE_TRAP(0x6807db0)
        ASM_EXPORT_ENTRY_FIRST(0x6807de1, public_6807de1)
        ASM_EXPORT_ENTRY(0x6807e33, public_6807e33)
        ASM_EXPORT_ENTRY(0x6807e48, public_6807e48)
        ASM_EXPORT_ENTRY(0x6807e5b, public_6807e5b)
        ASM_EXPORT_ENTRY(0x6807e66, public_6807e66)
        ASM_EXPORT_ENTRY(0x6807e91, public_6807e91)
        ASM_EXPORT_ENTRY(0x6807eb2, public_6807eb2)
        ASM_EXPORT_ENTRY_LAST(0x6807ec5, public_6807ec5)
    }
}

#undef public_6807de1
#undef public_6807e1e
#undef public_6807e33
#undef public_6807e48
#undef public_6807e5b
#undef public_6807e66
#undef public_6807e7b
#undef public_6807e91
#undef public_6807eb2
#undef public_6807ec5

#pragma init_seg(compiler)
extern "C" void const* const public_6807de1 = __AsmFindLabelExport(&internal_6807db0, 0x6807de1);
extern "C" void const* const public_6807e33 = __AsmFindLabelExport(&internal_6807db0, 0x6807e33);
extern "C" void const* const public_6807e48 = __AsmFindLabelExport(&internal_6807db0, 0x6807e48);
extern "C" void const* const public_6807e5b = __AsmFindLabelExport(&internal_6807db0, 0x6807e5b);
extern "C" void const* const public_6807e66 = __AsmFindLabelExport(&internal_6807db0, 0x6807e66);
extern "C" void const* const public_6807e91 = __AsmFindLabelExport(&internal_6807db0, 0x6807e91);
extern "C" void const* const public_6807eb2 = __AsmFindLabelExport(&internal_6807db0, 0x6807eb2);
extern "C" void const* const public_6807ec5 = __AsmFindLabelExport(&internal_6807db0, 0x6807ec5);
