#ifndef __INTELLISENSE__

extern "C" size_t __base_address = 0x10000000;
extern "C" void _sub_1000A5E0();
extern "C" void* __entry_ptr = reinterpret_cast<void*>(&_sub_1000A5E0);
#pragma comment(linker, "/export:adler32=_sub_10001710,@1")
#pragma comment(linker, "/export:compress=_sub_100018F0,@2")
#pragma comment(linker, "/export:compress2=_sub_10001A80,@39")
#pragma comment(linker, "/export:crc32=_sub_10001D60,@3")
#pragma comment(linker, "/export:deflate=_sub_100020A0,@4")
#pragma comment(linker, "/export:deflateCopy=_sub_10001FF0,@5")
#pragma comment(linker, "/export:deflateEnd=_sub_10002DE0,@6")
#pragma comment(linker, "/export:deflateInit2_=_sub_10003000,@7")
#pragma comment(linker, "/export:deflateInit_=_sub_10002D20,@8")
#pragma comment(linker, "/export:deflateParams=_sub_10002CA0,@9")
#pragma comment(linker, "/export:deflateReset=_sub_10001BC0,@10")
#pragma comment(linker, "/export:deflateSetDictionary=_sub_100037F0,@11")
#pragma comment(linker, "/export:get_crc_table=_sub_10003B90,@38")
#pragma comment(linker, "/export:gzclose=_sub_10003840,@12")
#pragma comment(linker, "/export:gzdopen=_sub_100036A0,@13")
#pragma comment(linker, "/export:gzeof=_sub_10003B70,@34")
#pragma comment(linker, "/export:gzerror=_sub_10003BD0,@14")
#pragma comment(linker, "/export:gzflush=_sub_10003490,@15")
#pragma comment(linker, "/export:gzgetc=_sub_10005A00,@30")
#pragma comment(linker, "/export:gzgets=_sub_10005890,@41")
#pragma comment(linker, "/export:gzopen=_sub_100058E0,@16")
#pragma comment(linker, "/export:gzprintf=_sub_100059E0,@28")
#pragma comment(linker, "/export:gzputc=_sub_10005840,@29")
#pragma comment(linker, "/export:gzputs=_sub_10005E00,@40")
#pragma comment(linker, "/export:gzread=_sub_10005E90,@17")
#pragma comment(linker, "/export:gzrewind=_sub_10008330,@32")
#pragma comment(linker, "/export:gzseek=_sub_1000A3A0,@31")
#pragma comment(linker, "/export:gzsetparams=_sub_10003520,@35")
#pragma comment(linker, "/export:gztell=_sub_10003580,@33")
#pragma comment(linker, "/export:gzwrite=_sub_10003E00,@18")
#pragma comment(linker, "/export:inflate=_sub_10003E90,@19")
#pragma comment(linker, "/export:inflateEnd=_sub_100036E0,@20")
#pragma comment(linker, "/export:inflateInit2_=_sub_10003FF0,@21")
#pragma comment(linker, "/export:inflateInit_=_sub_10003760,@22")
#pragma comment(linker, "/export:inflateReset=_sub_100031F0,@23")
#pragma comment(linker, "/export:inflateSetDictionary=_sub_1000A3B0,@24")
#pragma comment(linker, "/export:inflateSync=_sub_10005F60,@25")
#pragma comment(linker, "/export:inflateSyncPoint=_sub_10001A60,@37")
#pragma comment(linker, "/export:uncompress=_sub_10001840,@26")
#pragma comment(linker, "/export:unzClose=_sub_100035B0,@62")
#pragma comment(linker, "/export:unzCloseCurrentFile=_sub_10003E30,@72")
#pragma comment(linker, "/export:unzGetCurrentFileInfo=_sub_100094C0,@64")
#pragma comment(linker, "/export:unzGetGlobalComment=_sub_100094D0,@73")
#pragma comment(linker, "/export:unzGetGlobalInfo=_sub_100086E0,@63")
#pragma comment(linker, "/export:unzGetLocalExtrafield=_sub_10008AC0,@76")
#pragma comment(linker, "/export:unzGoToFirstFile=_sub_10008B00,@65")
#pragma comment(linker, "/export:unzGoToNextFile=_sub_10008B50,@66")
#pragma comment(linker, "/export:unzLocateFile=_sub_100096B0,@75")
#pragma comment(linker, "/export:unzOpen=_sub_10008EB0,@61")
#pragma comment(linker, "/export:unzOpen2=_sub_100090B0,@77")
#pragma comment(linker, "/export:unzOpenCurrentFile=_sub_100090D0,@67")
#pragma comment(linker, "/export:unzOpenCurrentFile2=_sub_100091A0,@78")
#pragma comment(linker, "/export:unzReadCurrentFile=_sub_10009240,@68")
#pragma comment(linker, "/export:unzStringFileNameCompare=_sub_10008540,@74")
#pragma comment(linker, "/export:unzeof=_sub_10008BD0,@71")
#pragma comment(linker, "/export:unztell=_sub_10009100,@70")
#pragma comment(linker, "/export:zError=_sub_100092C0,@36")
#pragma comment(linker, "/export:zipClose=_sub_10009510,@84")
#pragma comment(linker, "/export:zipCloseFileInZip=_sub_10009960,@83")
#pragma comment(linker, "/export:zipCloseFileInZipRaw=_sub_1000A360,@87")
#pragma comment(linker, "/export:zipOpen=_sub_10009980,@80")
#pragma comment(linker, "/export:zipOpenNewFileInZip=_sub_10009CC0,@81")
#pragma comment(linker, "/export:zipOpenNewFileInZip2=_sub_10009CE0,@86")
#pragma comment(linker, "/export:zipWriteInFileInZip=_sub_10009ED0,@82")
#pragma comment(linker, "/export:zlibVersion=_sub_10009AA0,@27")

#endif // __INTELLISENSE__
