@echo off
cls

wcc386 -d2 bench.c

wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj library D:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\zlib\unzipped.zlib123dll\dll32\zlibwapi.lib


rem wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj library d:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\zlib\zlib-1.2.11\contrib\vstudio\vc14\x86\ZlibDllDebug\zlibwapi.lib
