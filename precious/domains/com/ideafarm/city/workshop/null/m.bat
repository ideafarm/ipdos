@echo off

wcc386 -d2 null.c -ecc

wlink.exe system nt op q op map=null.map op mangle debug all name d:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\exe\null.exe file *.obj
