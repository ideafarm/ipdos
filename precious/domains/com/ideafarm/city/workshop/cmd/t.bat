@echo off

rem call g m
rem wdw ideafarm.41000002.ipdos-wm 51000620 !idHome 10000008 !debug !noSystemThreads

set idHomeG=1
call g m
start  ideafarm.41000002.ipdos-wm 51000511 !idHome %idHomeG%0000008

set idHomeG=2
call g m
start  ideafarm.41000002.ipdos-wm 51000511 !idHome %idHomeG%0000008

set idHomeG=1
