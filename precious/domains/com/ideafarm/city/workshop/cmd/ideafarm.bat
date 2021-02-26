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

if not exist %idrive%\tmp.ideafarm\* md %idrive%\tmp.ideafarm
if exist %idrive%\tmp.ideafarm\vc.installed.txt goto :VCINSTALLED

copy %iworkshop%\visualstudio\vc.installed.txt %idrive%\tmp.ideafarm

echo .
echo I am about to install the Visual Studio runtimes.
echo If they are both (64-bit and 32-bit) are already installed, an error message will be displayed.
echo Click the "Install" and then the "Close" button for each of these two programs.
echo .
pause

%iworkshop%\visualstudio\VC_redist.x64.exe
%iworkshop%\visualstudio\VC_redist.x86.exe

echo .
echo I am about to install the Rimstar Programmers Editor into c:\rimstar
echo .
pause

c:
if exist c:\rimstar\* goto :SKIPRIMSTAR
md c:\rimstar
cd c:\rimstar
%iworkshop%\infozip\unzip.exe\unzip %iworkshop%\rimstar\rimstar.zip
%idrive%

goto :VCINSTALLED

:SKIPRIMSTAR

echo .
echo I did not install Rimstar because c:\rimstar already exists.
echo .
pause

:VCINSTALLED

echo .
echo Looking for IdeaFarm (tm) home folders on all drives...
echo .

if exist a:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive a.
if exist b:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive b.
if exist c:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive c.
if exist d:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive d.
if exist e:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive e.
if exist f:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive f.
if exist g:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive g.
if exist h:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive h.
if exist i:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive i.
if exist j:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive j.
if exist k:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive k.
if exist l:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive l.
if exist m:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive m.
if exist n:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive n.
if exist o:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive o.
if exist p:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive p.
if exist q:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive q.
if exist r:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive r.
if exist s:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive s.
if exist t:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive t.
if exist u:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive u.
if exist v:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive v.
if exist w:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive w.
if exist x:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive x.
if exist y:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive y.
if exist z:\ideafarm.home.* echo WARNING: ideafarm.home.* exists on drive z.

echo .
echo All ideafarm.home.* folders must be in the root folder of the same local drive.
echo If execution fails, this is the first thing to check for.
echo .
pause

set path=%path%;c:\rimstar

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
