@echo off
wpp386 -d2 bench.cpp
wlink.exe system nt op q op map=bench.map op mangle debug all name bench.exe file *.obj library D:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\ideafarm.81000001.ipdos-wl op map=d:\tmp\based.map
