@echo off

setlocal

c:
set v1=\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop

if not exist %v1%\tmp md %v1%\tmp
if not exist %v1%\exe md %v1%\exe

if exist %v1%\tmp\numa.obj del %v1%\tmp\numa.obj

wcc386 -d2 -dIFCdEBUG -dIFCdEVELOPMENT -zp1 -bt=NT -sg -od -zq -bm -wx -6r -fpi87 -fp5 -fo=%v1%\tmp\numa.obj -fr=%v1%\tmp\numa.err \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\numa\numa.c

wlink debug all op mang op map=%v1%\tmp\numa.map op q op el file %v1%\tmp\numa.obj name %v1%\exe\ideafarm.numa.ipdos

if exist %v1%\tmp\numa.obj del %v1%\tmp\numa.obj

if not %1z == dz goto :GO

 cd %v1%\exe
 wdw ideafarm.numa.ipdos
 goto :FIN

:GO
 cd %v1%\exe
 start /b /node 1 ideafarm.numa.ipdos

:FIN

