#include "RemoteServer-PCH.h"

static DLL_IMPORT_ENTRY const s_DLLImportEntries[] =
{
	{"DALib.dll", "?SetGUID@CDPClient@@QAEXAAU_GUID@@@Z", -1, _RelativeAddress(public_6c0b100, 0x6c0b100)},
	{"DALib.dll", "?DispatchMsgs@CDPClient@@QAEXK@Z", -1, _RelativeAddress(public_6c0b104, 0x6c0b104)},
	{"DALib.dll", "?Send@CDPClient@@QAE_NPAEK@Z", -1, _RelativeAddress(public_6c0b108, 0x6c0b108)},
	{"DALib.dll", "?AddConnectAttempt@CDPClient@@QAE_NPBGPAG@Z", -1, _RelativeAddress(public_6c0b10c, 0x6c0b10c)},
	{"DALib.dll", "?ProcessConnectAttempt@CDPClient@@QAE_NXZ", -1, _RelativeAddress(public_6c0b110, 0x6c0b110)},
	{"DALib.dll", "??1CDPClient@@UAE@XZ", -1, _RelativeAddress(public_6c0b114, 0x6c0b114)},
	{"DALib.dll", "??1CDPMsgList@@UAE@XZ", -1, _RelativeAddress(public_6c0b118, 0x6c0b118)},
	{"DALib.dll", "??0CDPClient@@QAE@XZ", -1, _RelativeAddress(public_6c0b11c, 0x6c0b11c)},
	{"FreeLancer.exe", "HandleConnectError", -1, _RelativeAddress(public_6c0b124, 0x6c0b124)},
	{"FreeLancer.exe", "Client", -1, _RelativeAddress(public_6c0b128, 0x6c0b128)},
	{"Common.dll", "?SmallIDToLargeID@Archetype@@YAIG@Z", -1, _RelativeAddress(public_6c0b000, 0x6c0b000)},
	{"Common.dll", "??0DamageList@@QAE@XZ", -1, _RelativeAddress(public_6c0b004, 0x6c0b004)},
	{"Common.dll", "??0?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE@ABV?$allocator@UDamageEntry@@@1@@Z", -1, _RelativeAddress(public_6c0b008, 0x6c0b008)},
	{"Common.dll", "?LargeIDToSmallID@Archetype@@YAGI@Z", -1, _RelativeAddress(public_6c0b00c, 0x6c0b00c)},
	{"Common.dll", "??0CostumeHint@@QAE@XZ", -1, _RelativeAddress(public_6c0b010, 0x6c0b010)},
	{"Common.dll", "?SUBOBJ_ID_NONE@@3GB", -1, _RelativeAddress(public_6c0b014, 0x6c0b014)},
	{"Common.dll", "?GiveServerRunPermission@@YAXXZ", -1, _RelativeAddress(public_6c0b018, 0x6c0b018)},
	{"Common.dll", "?IsMPServer@@YA_NXZ", -1, _RelativeAddress(public_6c0b01c, 0x6c0b01c)},
	{"Common.dll", "?is_internal@EquipDesc@@QBE_NXZ", -1, _RelativeAddress(public_6c0b020, 0x6c0b020)},
	{"Common.dll", "?GetArchMaxHitPts@Archetype@@YAHI@Z", -1, _RelativeAddress(public_6c0b024, 0x6c0b024)},
	{"Common.dll", "?insert@?$vector@GV?$allocator@G@std@@@std@@QAEXPAGIABG@Z", -1, _RelativeAddress(public_6c0b028, 0x6c0b028)},
	{"Common.dll", "?unflatten@FmtStr@@QAEHPAXI@Z", -1, _RelativeAddress(public_6c0b02c, 0x6c0b02c)},
	{"Common.dll", "?CleanUp@CostumeHint@@UAEXPAE@Z", -1, _RelativeAddress(public_6c0b030, 0x6c0b030)},
	{"Common.dll", "?UnSerialize@CostumeHint@@UAEXPAEI@Z", -1, _RelativeAddress(public_6c0b034, 0x6c0b034)},
	{"Common.dll", "?Serialize@CostumeHint@@UAEIPAPAE@Z", -1, _RelativeAddress(public_6c0b038, 0x6c0b038)},
	{"Common.dll", "??1?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE@XZ", -1, _RelativeAddress(public_6c0b03c, 0x6c0b03c)},
	{"Common.dll", "??1DamageList@@QAE@XZ", -1, _RelativeAddress(public_6c0b040, 0x6c0b040)},
	{"Common.dll", "??1EquipDescVector@@QAE@XZ", -1, _RelativeAddress(public_6c0b044, 0x6c0b044)},
	{"Common.dll", "??1?$vector@GV?$allocator@G@std@@@std@@QAE@XZ", -1, _RelativeAddress(public_6c0b048, 0x6c0b048)},
	{"Common.dll", "?_Ucopy@?$vector@GV?$allocator@G@std@@@std@@IAEPAGPBG0PAG@Z", -1, _RelativeAddress(public_6c0b04c, 0x6c0b04c)},
	{"Common.dll", "?capacity@?$vector@GV?$allocator@G@std@@@std@@QBEIXZ", -1, _RelativeAddress(public_6c0b050, 0x6c0b050)},
	{"Common.dll", "?size@?$vector@GV?$allocator@G@std@@@std@@QBEIXZ", -1, _RelativeAddress(public_6c0b054, 0x6c0b054)},
	{"Common.dll", "?_Destroy@?$vector@GV?$allocator@G@std@@@std@@IAEXPAG0@Z", -1, _RelativeAddress(public_6c0b058, 0x6c0b058)},
	{"Common.dll", "??0?$vector@GV?$allocator@G@std@@@std@@QAE@ABV?$allocator@G@1@@Z", -1, _RelativeAddress(public_6c0b05c, 0x6c0b05c)},
	{"Common.dll", "?clear@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAEXXZ", -1, _RelativeAddress(public_6c0b060, 0x6c0b060)},
	{"Common.dll", "?erase@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@V312@0@Z", -1, _RelativeAddress(public_6c0b064, 0x6c0b064)},
	{"Common.dll", "?begin@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@XZ", -1, _RelativeAddress(public_6c0b068, 0x6c0b068)},
	{"Common.dll", "?erase@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAEPAUEquipDesc@@PAU3@0@Z", -1, _RelativeAddress(public_6c0b06c, 0x6c0b06c)},
	{"Common.dll", "?SetAttitudeTowardsPlayer@Vibe@Reputation@@YAHHM@Z", -1, _RelativeAddress(public_6c0b070, 0x6c0b070)},
	{"Common.dll", "?SetAffiliation@Vibe@Reputation@@YAHABHI_N@Z", -1, _RelativeAddress(public_6c0b074, 0x6c0b074)},
	{"Common.dll", "?SetName@Vibe@Reputation@@YAHABHABUFmtStr@@1PBG@Z", -1, _RelativeAddress(public_6c0b078, 0x6c0b078)},
	{"Common.dll", "?EnsureExists@Vibe@Reputation@@YAHABH@Z", -1, _RelativeAddress(public_6c0b07c, 0x6c0b07c)},
	{"Common.dll", "?SinglePlayer@@YA_NXZ", -1, _RelativeAddress(public_6c0b080, 0x6c0b080)},
	{"Common.dll", "?erase@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@V312@0@Z", -1, _RelativeAddress(public_6c0b084, 0x6c0b084)},
	{"Common.dll", "?begin@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@XZ", -1, _RelativeAddress(public_6c0b088, 0x6c0b088)},
	{"Common.dll", "?erase@?$list@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAE?AViterator@12@V312@@Z", -1, _RelativeAddress(public_6c0b08c, 0x6c0b08c)},
	{"Common.dll", "?WaitForClientRunPermission@@YAXXZ", -1, _RelativeAddress(public_6c0b090, 0x6c0b090)},
	{"Common.dll", "?make_internal@EquipDesc@@QAEXXZ", -1, _RelativeAddress(public_6c0b094, 0x6c0b094)},
	{"Common.dll", "?set_hardpoint@EquipDesc@@QAEXABUCacheString@@@Z", -1, _RelativeAddress(public_6c0b098, 0x6c0b098)},
	{"Common.dll", "?StringAlloc@@YAPADPBD_N@Z", -1, _RelativeAddress(public_6c0b09c, 0x6c0b09c)},
	{"Common.dll", "?set_equipped@EquipDesc@@QAEX_N@Z", -1, _RelativeAddress(public_6c0b0a0, 0x6c0b0a0)},
	{"Common.dll", "?set_status@EquipDesc@@QAEXM@Z", -1, _RelativeAddress(public_6c0b0a4, 0x6c0b0a4)},
	{"Common.dll", "?set_count@EquipDesc@@QAEXH@Z", -1, _RelativeAddress(public_6c0b0a8, 0x6c0b0a8)},
	{"Common.dll", "?set_id@EquipDesc@@QAEXG@Z", -1, _RelativeAddress(public_6c0b0ac, 0x6c0b0ac)},
	{"Common.dll", "?set_arch_id@EquipDesc@@QAEXI@Z", -1, _RelativeAddress(public_6c0b0b0, 0x6c0b0b0)},
	{"Common.dll", "??0EquipDesc@@QAE@XZ", -1, _RelativeAddress(public_6c0b0b4, 0x6c0b0b4)},
	{"Common.dll", "?_Destroy@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@IAEXPAUEquipDesc@@0@Z", -1, _RelativeAddress(public_6c0b0b8, 0x6c0b0b8)},
	{"Common.dll", "??1FmtStr@@QAE@XZ", -1, _RelativeAddress(public_6c0b0bc, 0x6c0b0bc)},
	{"Common.dll", "??1CostumeHint@@UAE@XZ", -1, _RelativeAddress(public_6c0b0c0, 0x6c0b0c0)},
	{"Common.dll", "?erase@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE?AViterator@12@V312@@Z", -1, _RelativeAddress(public_6c0b0c4, 0x6c0b0c4)},
	{"Common.dll", "?erase@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAE?AViterator@12@V312@@Z", -1, _RelativeAddress(public_6c0b0c8, 0x6c0b0c8)},
	{"Common.dll", "??1EquipDescList@@QAE@XZ", -1, _RelativeAddress(public_6c0b0cc, 0x6c0b0cc)},
	{"Common.dll", "?insert@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAEXViterator@12@Vconst_iterator@12@1@Z", -1, _RelativeAddress(public_6c0b0d0, 0x6c0b0d0)},
	{"Common.dll", "?_Buynode@?$list@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@IAEPAU_Node@12@PAU312@0@Z", -1, _RelativeAddress(public_6c0b0d4, 0x6c0b0d4)},
	{"Common.dll", "??4CHARACTER_ID@@QAEABU0@ABU0@@Z", -1, _RelativeAddress(public_6c0b0d8, 0x6c0b0d8)},
	{"Common.dll", "??0?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@QAE@ABV?$allocator@UCollisionGroupDesc@@@1@@Z", -1, _RelativeAddress(public_6c0b0dc, 0x6c0b0dc)},
	{"Common.dll", "??0EquipDescList@@QAE@XZ", -1, _RelativeAddress(public_6c0b0e0, 0x6c0b0e0)},
	{"Common.dll", "??1?$list@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAE@XZ", -1, _RelativeAddress(public_6c0b0e4, 0x6c0b0e4)},
	{"Common.dll", "?insert@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QAEXPAUEquipDesc@@IABU3@@Z", -1, _RelativeAddress(public_6c0b0e8, 0x6c0b0e8)},
	{"Common.dll", "?size@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@QBEIXZ", -1, _RelativeAddress(public_6c0b0ec, 0x6c0b0ec)},
	{"Common.dll", "?_Ucopy@?$vector@UEquipDesc@@V?$allocator@UEquipDesc@@@std@@@std@@IAEPAUEquipDesc@@PBU3@0PAU3@@Z", -1, _RelativeAddress(public_6c0b0f0, 0x6c0b0f0)},
	{"Common.dll", "?insert@?$list@UDamageEntry@@V?$allocator@UDamageEntry@@@std@@@std@@QAEXViterator@12@Vconst_iterator@12@1@Z", -1, _RelativeAddress(public_6c0b0f4, 0x6c0b0f4)},
	{"Common.dll", "?_Buynode@?$list@UCollisionGroupDesc@@V?$allocator@UCollisionGroupDesc@@@std@@@std@@IAEPAU_Node@12@PAU312@0@Z", -1, _RelativeAddress(public_6c0b0f8, 0x6c0b0f8)},
	{"MSVCP60.dll", "??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z", -1, _RelativeAddress(public_6c0b154, 0x6c0b154)},
	{"MSVCP60.dll", "?_Xlen@std@@YAXXZ", -1, _RelativeAddress(public_6c0b158, 0x6c0b158)},
	{"MSVCP60.dll", "?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@II@Z", -1, _RelativeAddress(public_6c0b15c, 0x6c0b15c)},
	{"MSVCP60.dll", "?_C@?1??_Nullstr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@CAPBDXZ@4DB", -1, _RelativeAddress(public_6c0b160, 0x6c0b160)},
	{"MSVCP60.dll", "?_Eos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXI@Z", -1, _RelativeAddress(public_6c0b164, 0x6c0b164)},
	{"MSVCP60.dll", "?_Split@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEXXZ", -1, _RelativeAddress(public_6c0b168, 0x6c0b168)},
	{"MSVCP60.dll", "?_Xran@std@@YAXXZ", -1, _RelativeAddress(public_6c0b16c, 0x6c0b16c)},
	{"MSVCP60.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@I@Z", -1, _RelativeAddress(public_6c0b170, 0x6c0b170)},
	{"MSVCP60.dll", "?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAE_NI_N@Z", -1, _RelativeAddress(public_6c0b174, 0x6c0b174)},
	{"MSVCP60.dll", "?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAE_NI_N@Z", -1, _RelativeAddress(public_6c0b178, 0x6c0b178)},
	{"MSVCP60.dll", "?_C@?1??_Nullstr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAPBGXZ@4GB", -1, _RelativeAddress(public_6c0b17c, 0x6c0b17c)},
	{"MSVCP60.dll", "?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAEX_N@Z", -1, _RelativeAddress(public_6c0b180, 0x6c0b180)},
	{"MSVCP60.dll", "??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z", -1, _RelativeAddress(public_6c0b184, 0x6c0b184)},
	{"MSVCP60.dll", "??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z", -1, _RelativeAddress(public_6c0b188, 0x6c0b188)},
	{"MSVCP60.dll", "?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV12@PBDI@Z", -1, _RelativeAddress(public_6c0b18c, 0x6c0b18c)},
	{"MSVCP60.dll", "??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@E@Z", -1, _RelativeAddress(public_6c0b190, 0x6c0b190)},
	{"MSVCP60.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@M@Z", -1, _RelativeAddress(public_6c0b194, 0x6c0b194)},
	{"MSVCP60.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@N@Z", -1, _RelativeAddress(public_6c0b198, 0x6c0b198)},
	{"MSVCP60.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@H@Z", -1, _RelativeAddress(public_6c0b19c, 0x6c0b19c)},
	{"MSVCP60.dll", "?_Split@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXXZ", -1, _RelativeAddress(public_6c0b1a0, 0x6c0b1a0)},
	{"MSVCP60.dll", "??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@PBX@Z", -1, _RelativeAddress(public_6c0b1a4, 0x6c0b1a4)},
	{"MSVCP60.dll", "?_Eos@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEXI@Z", -1, _RelativeAddress(public_6c0b1a8, 0x6c0b1a8)},
	{"MSVCP60.dll", "?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AAEX_N@Z", -1, _RelativeAddress(public_6c0b1ac, 0x6c0b1ac)},
	{"MSVCP60.dll", "??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@XZ", -1, _RelativeAddress(public_6c0b1b0, 0x6c0b1b0)},
	{"MSVCP60.dll", "??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE@ABV?$allocator@G@1@@Z", -1, _RelativeAddress(public_6c0b1b4, 0x6c0b1b4)},
	{"MSVCP60.dll", "?npos@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@2IB", -1, _RelativeAddress(public_6c0b1b8, 0x6c0b1b8)},
	{"MSVCP60.dll", "?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@ABV12@II@Z", -1, _RelativeAddress(public_6c0b1bc, 0x6c0b1bc)},
	{"MSVCP60.dll", "??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z", -1, _RelativeAddress(public_6c0b1c0, 0x6c0b1c0)},
	{"MSVCP60.dll", "?npos@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2IB", -1, _RelativeAddress(public_6c0b1c4, 0x6c0b1c4)},
	{"MSVCP60.dll", "??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ", -1, _RelativeAddress(public_6c0b1c8, 0x6c0b1c8)},
	{"MSVCRT.dll", "_onexit", -1, _RelativeAddress(public_6c0b1d0, 0x6c0b1d0)},
	{"MSVCRT.dll", "strrchr", -1, _RelativeAddress(public_6c0b1d4, 0x6c0b1d4)},
	{"MSVCRT.dll", "fclose", -1, _RelativeAddress(public_6c0b1d8, 0x6c0b1d8)},
	{"MSVCRT.dll", "fprintf", -1, _RelativeAddress(public_6c0b1dc, 0x6c0b1dc)},
	{"MSVCRT.dll", "fopen", -1, _RelativeAddress(public_6c0b1e0, 0x6c0b1e0)},
	{"MSVCRT.dll", "memmove", -1, _RelativeAddress(public_6c0b1e4, 0x6c0b1e4)},
	{"MSVCRT.dll", "_ftol", -1, _RelativeAddress(public_6c0b1e8, 0x6c0b1e8)},
	{"MSVCRT.dll", "malloc", -1, _RelativeAddress(public_6c0b1ec, 0x6c0b1ec)},
	{"MSVCRT.dll", "_except_handler3", -1, _RelativeAddress(public_6c0b1f0, 0x6c0b1f0)},
	{"MSVCRT.dll", "?terminate@@YAXXZ", -1, _RelativeAddress(public_6c0b1f4, 0x6c0b1f4)},
	{"MSVCRT.dll", "__dllonexit", -1, _RelativeAddress(public_6c0b1f8, 0x6c0b1f8)},
	{"MSVCRT.dll", "atoi", -1, _RelativeAddress(public_6c0b1fc, 0x6c0b1fc)},
	{"MSVCRT.dll", "_initterm", -1, _RelativeAddress(public_6c0b200, 0x6c0b200)},
	{"MSVCRT.dll", "_adjust_fdiv", -1, _RelativeAddress(public_6c0b204, 0x6c0b204)},
	{"MSVCRT.dll", "swprintf", -1, _RelativeAddress(public_6c0b208, 0x6c0b208)},
	{"MSVCRT.dll", "free", -1, _RelativeAddress(public_6c0b20c, 0x6c0b20c)},
	{"MSVCRT.dll", "wcslen", -1, _RelativeAddress(public_6c0b210, 0x6c0b210)},
	{"MSVCRT.dll", "wcsncpy", -1, _RelativeAddress(public_6c0b214, 0x6c0b214)},
	{"MSVCRT.dll", "__CxxFrameHandler", -1, _RelativeAddress(public_6c0b218, 0x6c0b218)},
	{"MSVCRT.dll", "??2@YAPAXI@Z", -1, _RelativeAddress(public_6c0b21c, 0x6c0b21c)},
	{"MSVCRT.dll", "wcscpy", -1, _RelativeAddress(public_6c0b220, 0x6c0b220)},
	{"MSVCRT.dll", "_purecall", -1, _RelativeAddress(public_6c0b224, 0x6c0b224)},
	{"MSVCRT.dll", "strncpy", -1, _RelativeAddress(public_6c0b228, 0x6c0b228)},
	{"MSVCRT.dll", "_strdup", -1, _RelativeAddress(public_6c0b22c, 0x6c0b22c)},
	{"MSVCRT.dll", "_wcsdup", -1, _RelativeAddress(public_6c0b230, 0x6c0b230)},
	{"MSVCRT.dll", "_wcslwr", -1, _RelativeAddress(public_6c0b234, 0x6c0b234)},
	{"KERNEL32.dll", "LoadLibraryA", -1, _RelativeAddress(public_6c0b130, 0x6c0b130)},
	{"KERNEL32.dll", "GetProcAddress", -1, _RelativeAddress(public_6c0b134, 0x6c0b134)},
	{"KERNEL32.dll", "DeleteCriticalSection", -1, _RelativeAddress(public_6c0b138, 0x6c0b138)},
	{"KERNEL32.dll", "InitializeCriticalSection", -1, _RelativeAddress(public_6c0b13c, 0x6c0b13c)},
	{"KERNEL32.dll", "LeaveCriticalSection", -1, _RelativeAddress(public_6c0b140, 0x6c0b140)},
	{"KERNEL32.dll", "EnterCriticalSection", -1, _RelativeAddress(public_6c0b144, 0x6c0b144)},
	{"KERNEL32.dll", "DisableThreadLibraryCalls", -1, _RelativeAddress(public_6c0b148, 0x6c0b148)},
	{"KERNEL32.dll", "FreeLibrary", -1, _RelativeAddress(public_6c0b14c, 0x6c0b14c)},
};

void __ExecuteDLLImports()
{
	for (DLL_IMPORT_ENTRY const& dllImportEntry : s_DLLImportEntries)
	{
		__PatchDLLImport(dllImportEntry);
	}
}

