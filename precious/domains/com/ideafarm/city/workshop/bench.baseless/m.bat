@echo off

wcc386 -d2 bench.c -ecc

wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\Ws2_32.lib library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\lib386\nt\wsock32.lib


