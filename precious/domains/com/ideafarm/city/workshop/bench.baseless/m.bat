@echo off
cls

wcc386 -d2 bench.c

wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj
