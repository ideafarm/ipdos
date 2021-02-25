@echo off

rem //
rem // Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
rem //
rem // This proprietary software was crafted at great expense and with great hardship by one man.  It took 25 years.
rem // Respecting the rights of other people is an important part of empowering one another.
rem //

set idrive=%~d0%
echo IdeaFarm (tm) drive is: %idrive%

set iworkshop=%idrive%\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop

rem COMMENT OUT THESE LINES IF YOU HAVE INSTALLED THE WiX Toolset:
set path=%path%;%iworkshop%\wix\WiX Toolset v3.11\bin
set wix=%iworkshop%\wix\WiX Toolset v3.11\

rem COMMENT OUT THESE LINES IF YOU HAVE INSTALLED Open Watcom V2:
set watcom=%iworkshop%/watcom
set include=%iworkshop%\watcom\H;%iworkshop%\watcom\H\NT;%iworkshop%\watcom\H\NT\DIRECTX;%iworkshop%\watcom\H\NT\DDK;%iworkshop%\openssl\include

set path=%iworkshop%\WinHelp;%path%;%iworkshop%\cmd;%iworkshop%\watcom\BINNT;%iworkshop%\rimstar\rimstar;%iworkshop%\infozip\unzip.exe;%iworkshop%\infozip\zip.exe;%iworkshop%\openssl\dll

rem THE NEXT LINE IS COMMENTED OUT FOR RELIABILITY (TO FORCE BUILD).  FOR SPEED, ENABLE THE NEXT LINE
rem if exist %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\exe\ideafarm.elves.ipdos goto :BUILD

call g el
call m

:BUILD
call e
