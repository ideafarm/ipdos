@echo off

wcc386 -d2 bench.c -ecc

wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\lib\libssl.lib library \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\openssl\lib\libcrypto.lib

