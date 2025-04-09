#ifndef __INTELLISENSE__
#include "..\PCH.h"
// clang-format off

#pragma init_seg(lib)
#pragma section("Xrdata", read, write)
#define SECTION __declspec(allocate("Xrdata")) __declspec(align(1))

extern "C" {
SECTION void* _import_6F83000 = __imp("DACOM.dll", "DACOM_Acquire");
SECTION void* _import_6F83004 = __imp("DACOM.dll", "FDUMP");
SECTION char _data_6F83008[0x4] = { /* 0 [0x4] */ };
SECTION void* _import_6F8300C = __imp("MSVCRT.dll", "_vsnprintf");
SECTION void* _import_6F83010 = __imp("MSVCRT.dll", "_purecall");
SECTION void* _import_6F83014 = __imp("MSVCRT.dll", "free");
SECTION void* _import_6F83018 = __imp("MSVCRT.dll", "malloc");
SECTION void* _import_6F8301C = __imp("MSVCRT.dll", "??2@YAPAXI@Z");
SECTION void* _import_6F83020 = __imp("MSVCRT.dll", "_initterm");
SECTION void* _import_6F83024 = __imp("MSVCRT.dll", "??3@YAXPAX@Z");
SECTION void* _import_6F83028 = __imp("MSVCRT.dll", "_ftol");
SECTION void* _import_6F8302C = __imp("MSVCRT.dll", "_adjust_fdiv");
SECTION char _data_6F83030[0x4] = { /* 0 [0x4] */ };
SECTION void* _import_6F83034 = __imp("USER32.dll", "SetRect");
SECTION char _data_6F83038[0x4] = { /* 0 [0x4] */ };
SECTION char _noop_6F8303C[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F83040[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F83044[0x4] = { 0x24i8, 0x90i8, 0x39i8, 0x3Ei8 };
SECTION char _data_6F83048[0x2] = { /* 0 [0x2] */ };
SECTION char _data_6F8304A[0x2] = { /* 0 [0x2] */ };
SECTION char _data_6F8304C[0x4] = { 0x02i8, 0x00i8, 0x00i8, 0x00i8 };
SECTION char _data_6F83050[0x4] = { 0x66i8, 0x00i8, 0x00i8, 0x00i8 };
SECTION char _data_6F83054[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F83058[0x4] = { 0x00i8, 0x32i8, 0x00i8, 0x00i8 };
SECTION char _data_6F8305C[0x4] = { 0x00i8, 0x00i8, 0x80i8, 0x3Fi8 };
SECTION char _data_6F83060[0x4] = { /* 0 [0x4] */ };
SECTION char _noop_6F83064[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F83068[0x8] = { 0x00i8, 0x00i8, 0x00i8, 0x00i8, 0x00i8, 0x00i8, 0xE0i8, 0x3Fi8 };
SECTION void* _off_6F83070 = __ptr_func(0x6F82370, 0);
SECTION void* _off_6F83074 = __ptr_func(0x6F823B0, 0);
SECTION void* _off_6F83078 = __ptr_func(0x6F823C0, 0);
SECTION void* _off_6F8307C = __ptr_func(0x6F823F0, 0);
SECTION void* _off_6F83080 = __ptr_func(0x6F82986, 0);
SECTION void* _off_6F83084 = __ptr_func(0x6F82986, 0);
SECTION void* _off_6F83088 = __ptr_func(0x6F82986, 0);
SECTION void* _off_6F8308C = __ptr_func(0x6F82640, 0);
SECTION void* _off_6F83090 = __ptr_func(0x6F82060, 0);
SECTION void* _off_6F83094 = __ptr_func(0x6F82650, 0);
SECTION void* _off_6F83098 = __ptr_func(0x6F82670, 0);
SECTION void* _off_6F8309C = __ptr_func(0x6F82690, 0);
SECTION void* _off_6F830A0 = __ptr_func(0x6F826F0, 0);
SECTION void* _off_6F830A4 = __ptr_func(0x6F82700, 0);
SECTION void* _off_6F830A8 = __ptr_func(0x6F81A80, 0);
SECTION void* _off_6F830AC = __ptr_func(0x6F81DE0, 0);
SECTION void* _off_6F830B0 = __ptr_func(0x6F82760, 0);
SECTION void* _off_6F830B4 = __ptr_func(0x6F82810, 0);
SECTION void* _off_6F830B8 = __ptr_func(0x6F82820, 0);
SECTION void* _off_6F830BC = __ptr_func(0x6F82640, 0);
SECTION void* _off_6F830C0 = __ptr_func(0x6F82060, 0);
SECTION void* _off_6F830C4 = __ptr_func(0x6F82650, 0);
SECTION void* _off_6F830C8 = __ptr_func(0x6F82670, 0);
SECTION void* _off_6F830CC = __ptr_func(0x6F82690, 0);
SECTION void* _off_6F830D0 = __ptr_func(0x6F826F0, 0);
SECTION void* _off_6F830D4 = __ptr_func(0x6F82700, 0);
SECTION void* _off_6F830D8 = __ptr_func(0x6F81A80, 0);
SECTION void* _off_6F830DC = __ptr_func(0x6F81DE0, 0);
SECTION char _data_6F830E0[0x4] = { 0x00i8, 0x00i8, 0x7Fi8, 0x43i8 };
SECTION void* _off_6F830E4 = __ptr(0x6F8413C, 0);
SECTION char _data_6F830E8[0x4] = { /* 0 [0x4] */ };
SECTION void* _off_6F830EC = __ptr(0x6F8412C, 0);
SECTION char _data_6F830F0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830F9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830FA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F830FB[0x1] = { /* 0 [0x1] */ };
SECTION int _off_6F830FC = __rva(0x6F8314C, 0);
SECTION char _data_6F83100[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F83104[0x4] = { /* 0 [0x4] */ };
SECTION int _off_6F83108 = __rva(0x6F831A0, 0);
SECTION int _off_6F8310C = __rva(0x6F83000, 0);
SECTION int _off_6F83110 = __rva(0x6F83180, 0);
SECTION char _data_6F83114[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F83118[0x4] = { /* 0 [0x4] */ };
SECTION int _off_6F8311C = __rva(0x6F831B4, 0);
SECTION int _off_6F83120 = __rva(0x6F83034, 0);
SECTION int _off_6F83124 = __rva(0x6F83158, 0);
SECTION char _data_6F83128[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F8312C[0x4] = { /* 0 [0x4] */ };
SECTION int _off_6F83130 = __rva(0x6F83214, 0);
SECTION int _off_6F83134 = __rva(0x6F8300C, 0);
SECTION char _data_6F83138[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83139[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8313A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8313B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8313C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8313D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8313E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8313F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83140[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83141[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83142[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83143[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83144[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83145[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83146[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83147[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83148[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83149[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8314A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8314B[0x1] = { /* 0 [0x1] */ };
SECTION int _off_6F8314C = __rva(0x6F83190, 0);
SECTION int _off_6F83150 = __rva(0x6F83188, 0);
SECTION char _data_6F83154[0x4] = { /* 0 [0x4] */ };
SECTION int _off_6F83158 = __rva(0x6F831E2, 0);
SECTION int _off_6F8315C = __rva(0x6F83200, 0);
SECTION int _off_6F83160 = __rva(0x6F831C0, 0);
SECTION int _off_6F83164 = __rva(0x6F831C8, 0);
SECTION int _off_6F83168 = __rva(0x6F831D2, 0);
SECTION int _off_6F8316C = __rva(0x6F83220, 0);
SECTION int _off_6F83170 = __rva(0x6F831F0, 0);
SECTION int _off_6F83174 = __rva(0x6F8320C, 0);
SECTION int _off_6F83178 = __rva(0x6F8322C, 0);
SECTION char _data_6F8317C[0x4] = { /* 0 [0x4] */ };
SECTION int _off_6F83180 = __rva(0x6F831AA, 0);
SECTION char _data_6F83184[0x4] = { /* 0 [0x4] */ };
SECTION char _data_6F83188[0x2] = { 0x0Di8, 0x00i8 };
SECTION char _data_6F8318A[0x6] = { 0x46i8, 0x44i8, 0x55i8, 0x4Di8, 0x50i8, 0x00i8 };
SECTION char _data_6F83190[0x2] = { 0x0Ai8, 0x00i8 };
SECTION char _data_6F83192[0xE] = { 0x44i8, 0x41i8, 0x43i8, 0x4Fi8, 0x4Di8, 0x5Fi8, 0x41i8, 0x63i8, 0x71i8, 0x75i8, 0x69i8, 0x72i8, 0x65i8, 0x00i8 };
SECTION char _data_6F831A0[0xA] = { 0x44i8, 0x41i8, 0x43i8, 0x4Fi8, 0x4Di8, 0x2Ei8, 0x64i8, 0x6Ci8, 0x6Ci8, 0x00i8 };
SECTION char _data_6F831AA[0x2] = { 0x6Ci8, 0x02i8 };
SECTION char _data_6F831AC[0x8] = { 0x53i8, 0x65i8, 0x74i8, 0x52i8, 0x65i8, 0x63i8, 0x74i8, 0x00i8 };
SECTION char _data_6F831B4[0xB] = { 0x55i8, 0x53i8, 0x45i8, 0x52i8, 0x33i8, 0x32i8, 0x2Ei8, 0x64i8, 0x6Ci8, 0x6Ci8, 0x00i8 };
SECTION char _noop_6F831BF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F831C0[0x2] = { 0x5Ei8, 0x02i8 };
SECTION char _data_6F831C2[0x5] = { 0x66i8, 0x72i8, 0x65i8, 0x65i8, 0x00i8 };
SECTION char _noop_6F831C7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F831C8[0x2] = { 0x91i8, 0x02i8 };
SECTION char _data_6F831CA[0x7] = { 0x6Di8, 0x61i8, 0x6Ci8, 0x6Ci8, 0x6Fi8, 0x63i8, 0x00i8 };
SECTION char _noop_6F831D1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F831D2[0x2] = { 0x0Fi8, 0x00i8 };
SECTION char _data_6F831D4[0xD] = { 0x3Fi8, 0x3Fi8, 0x32i8, 0x40i8, 0x59i8, 0x41i8, 0x50i8, 0x41i8, 0x58i8, 0x49i8, 0x40i8, 0x5Ai8, 0x00i8 };
SECTION char _noop_6F831E1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F831E2[0x2] = { 0xE1i8, 0x01i8 };
SECTION char _data_6F831E4[0xB] = { 0x5Fi8, 0x76i8, 0x73i8, 0x6Ei8, 0x70i8, 0x72i8, 0x69i8, 0x6Ei8, 0x74i8, 0x66i8, 0x00i8 };
SECTION char _noop_6F831EF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F831F0[0x2] = { 0x10i8, 0x00i8 };
SECTION char _data_6F831F2[0xD] = { 0x3Fi8, 0x3Fi8, 0x33i8, 0x40i8, 0x59i8, 0x41i8, 0x58i8, 0x50i8, 0x41i8, 0x58i8, 0x40i8, 0x5Ai8, 0x00i8 };
SECTION char _noop_6F831FF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83200[0x2] = { 0x92i8, 0x01i8 };
SECTION char _data_6F83202[0xA] = { 0x5Fi8, 0x70i8, 0x75i8, 0x72i8, 0x65i8, 0x63i8, 0x61i8, 0x6Ci8, 0x6Ci8, 0x00i8 };
SECTION char _data_6F8320C[0x2] = { 0xF1i8, 0x00i8 };
SECTION char _data_6F8320E[0x6] = { 0x5Fi8, 0x66i8, 0x74i8, 0x6Fi8, 0x6Ci8, 0x00i8 };
SECTION char _data_6F83214[0xB] = { 0x4Di8, 0x53i8, 0x56i8, 0x43i8, 0x52i8, 0x54i8, 0x2Ei8, 0x64i8, 0x6Ci8, 0x6Ci8, 0x00i8 };
SECTION char _noop_6F8321F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83220[0x2] = { 0x0Fi8, 0x01i8 };
SECTION char _data_6F83222[0xA] = { 0x5Fi8, 0x69i8, 0x6Ei8, 0x69i8, 0x74i8, 0x74i8, 0x65i8, 0x72i8, 0x6Di8, 0x00i8 };
SECTION char _data_6F8322C[0x2] = { 0x9Di8, 0x00i8 };
SECTION char _data_6F8322E[0xD] = { 0x5Fi8, 0x61i8, 0x64i8, 0x6Ai8, 0x75i8, 0x73i8, 0x74i8, 0x5Fi8, 0x66i8, 0x64i8, 0x69i8, 0x76i8, 0x00i8 };
SECTION char _noop_6F8323B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8323C[0x5] = { 0x4Ei8, 0x42i8, 0x31i8, 0x30i8, 0x00i8 };
SECTION char _noop_6F83241[0x3] = { /* 0 [0x3] */ };
SECTION char _data_6F83244[0x1] = { 0x24i8 };
SECTION char _data_6F83245[0x1] = { 0x90i8 };
SECTION char _data_6F83246[0x1] = { 0x39i8 };
SECTION char _data_6F83247[0x1] = { 0x3Ei8 };
SECTION char _data_6F83248[0x1] = { 0x01i8 };
SECTION char _data_6F83249[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8324A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8324B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8324C[0x38] = { 0x43i8, 0x3Ai8, 0x5Ci8, 0x77i8, 0x6Fi8, 0x72i8, 0x6Bi8, 0x5Ci8, 0x62i8, 0x75i8, 0x69i8, 0x6Ci8, 0x64i8, 0x73i8, 0x5Ci8, 0x64i8, 0x61i8, 0x6Ci8, 0x69i8, 0x62i8, 0x73i8, 0x5Ci8, 0x64i8, 0x61i8, 0x6Ci8, 0x69i8, 0x62i8, 0x73i8, 0x2Di8, 0x62i8, 0x75i8, 0x69i8, 0x6Ci8, 0x64i8, 0x5Ci8, 0x62i8, 0x75i8, 0x69i8, 0x6Ci8, 0x64i8, 0x5Ci8, 0x4Ci8, 0x69i8, 0x62i8, 0x5Ci8, 0x78i8, 0x69i8, 0x6Di8, 0x61i8, 0x67i8, 0x65i8, 0x2Ei8, 0x70i8, 0x64i8, 0x62i8, 0x00i8 };
SECTION char _data_6F83284[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83285[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83286[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83287[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83288[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83289[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8328A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8328B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8328C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8328D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8328E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8328F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83290[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83291[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83292[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83293[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83294[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83295[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83296[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83297[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83298[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83299[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8329A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8329B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8329C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8329D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8329E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8329F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832A9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832AA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832AB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832AC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832AD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832AE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832AF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832B9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832BA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832BB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832BC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832BD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832BE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832BF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832C9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832CA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832CB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832CC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832CD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832CE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832CF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832D9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832DA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832DB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832DC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832DD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832DE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832DF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832E9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832EA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832EB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832EC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832ED[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832EE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832EF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832F9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832FA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832FB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832FC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832FD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832FE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F832FF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83300[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83301[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83302[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83303[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83304[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83305[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83306[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83307[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83308[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83309[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8330A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8330B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8330C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8330D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8330E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8330F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83310[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83311[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83312[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83313[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83314[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83315[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83316[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83317[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83318[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83319[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8331A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8331B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8331C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8331D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8331E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8331F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83320[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83321[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83322[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83323[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83324[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83325[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83326[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83327[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83328[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83329[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8332A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8332B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8332C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8332D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8332E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8332F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83330[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83331[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83332[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83333[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83334[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83335[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83336[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83337[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83338[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83339[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8333A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8333B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8333C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8333D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8333E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8333F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83340[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83341[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83342[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83343[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83344[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83345[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83346[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83347[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83348[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83349[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8334A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8334B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8334C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8334D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8334E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8334F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83350[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83351[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83352[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83353[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83354[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83355[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83356[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83357[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83358[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83359[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8335A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8335B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8335C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8335D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8335E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8335F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83360[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83361[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83362[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83363[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83364[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83365[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83366[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83367[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83368[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83369[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8336A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8336B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8336C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8336D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8336E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8336F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83370[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83371[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83372[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83373[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83374[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83375[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83376[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83377[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83378[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83379[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8337A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8337B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8337C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8337D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8337E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8337F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83380[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83381[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83382[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83383[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83384[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83385[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83386[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83387[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83388[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83389[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8338A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8338B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8338C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8338D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8338E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8338F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83390[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83391[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83392[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83393[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83394[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83395[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83396[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83397[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83398[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F83399[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8339A[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8339B[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8339C[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8339D[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8339E[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F8339F[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833A9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833AA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833AB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833AC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833AD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833AE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833AF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833B9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833BA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833BB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833BC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833BD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833BE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833BF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833C9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833CA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833CB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833CC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833CD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833CE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833CF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833D9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833DA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833DB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833DC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833DD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833DE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833DF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833E9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833EA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833EB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833EC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833ED[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833EE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833EF[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F0[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F1[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F2[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F3[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F4[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F5[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F6[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F7[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F8[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833F9[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833FA[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833FB[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833FC[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833FD[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833FE[0x1] = { /* 0 [0x1] */ };
SECTION char _data_6F833FF[0x1] = { /* 0 [0x1] */ };
SECTION char _noop_6F83400[0xC00] = { /* 0 [0x0]  ?? [0xC00] */ };
} // extern "C"

// clang-format on
#endif // __INTELLISENSE__
