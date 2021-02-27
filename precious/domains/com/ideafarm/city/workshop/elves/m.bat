@echo off

setlocal

%idrive%
set v1=\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop

if not exist %v1%\tmp md %v1%\tmp
if not exist %v1%\exe md %v1%\exe

if exist %v1%\tmp\elves.obj del %v1%\tmp\elves.obj

wpp386 -d2 -dIFCdEBUG -dIFCdEVELOPMENT -zp1 -bt=NT -sg -od -zq -bm -wx -6r -fpi87 -fp5 -fo=%v1%\tmp\elves.obj -fr=%v1%\tmp\elves.err \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\elves\elves.cpp

wlink debug all op mang op map=%v1%\tmp\elves.map op q op el file %v1%\tmp\elves.obj name %v1%\exe\ideafarm.elves.ipdos

if exist %v1%\tmp\elves.obj del %v1%\tmp\elves.obj

if not %1z == dz goto :FIN

 cd %v1%\exe
 wdw ideafarm.elves.ipdos

:FIN
rem if not %1z == bz pause
