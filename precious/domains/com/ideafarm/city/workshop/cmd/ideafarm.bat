@echo off

rem //
rem // Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
rem //
rem // This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
rem // Respecting the rights of other people is an important part of empowering one another.
rem //

rem Run me at a command prompt to set environment variables so that IdeaFarm (tm) Bundle can be built and "released" using included tools

set iworkshop=D:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop

rem COMMENT OUT THESE LINES IF YOU HAVE INSTALLED THE WiX Toolset:
set path=%path%;%iworkshop%\wix\WiX Toolset v3.11
set wix=%iworkshop%\wix\WiX Toolset v3.11\

rem COMMENT OUT THESE LINES IF YOU HAVE INSTALLED Open Watcom V2:
set watcom=t:\watcom
set include=t:\WATCOM\H;t:\WATCOM\H\NT;t:\WATCOM\H\NT\DIRECTX;t:\WATCOM\H\NT\DDK;%iworkshop%\openssl\include
set path=%iworkshop%\WinHelp;%path%;t:\WATCOM\BINNT;%iworkshop%\rimstar\rimstar;%iworkshop%\infozip\unzip.exe;%iworkshop%\infozip\zip.exe;%iworkshop%\openssl\dll