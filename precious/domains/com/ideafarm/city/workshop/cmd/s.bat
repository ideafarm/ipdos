@echo off

echo i search files in a directory tree for text

if %1z == z goto :FIN

echo searching for "%1"

call g m
ideafarm.41000002.ipdos-wm 5100074e !idHome 10000008 !root ///d/ideafarm.home.1/precious/ !find "%1" !ignoreCase 

:FIN

