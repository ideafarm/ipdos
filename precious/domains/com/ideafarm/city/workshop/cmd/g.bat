@echo off

rem setlocal

if %idHomeG%z == z set idHomeG=1

rem ARG 1: THE DESIRED DIRECTORY
rem ARG 2: THE DESIRED DRIVE
rem ARG 3: MODE (TO SPECIFY MODE, DRIVE MUST BE SPECIFIED)

rem SET DEVICE
if %1z == z rw \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\cmd\g.bat
if %1z == z goto :FIN
if %2z == z goto :NOdRIVE
%2:
:NOdRIVE

if not %3z == az goto :NOTaDAM
if not exist \ideafarm.home.%idHomeG%\domains\com\ideafarm\51000%1\* goto :LOOKfORbUD
cd \ideafarm.home.%idHomeG%\domains\com\ideafarm\51000%1
dir
goto :FIN
pause
:LOOKfORbUD
if not exist \ideafarm.home.%idHomeG%\domains\com\ideafarm\51000%1\* goto :FIN
cd \ideafarm.home.%idHomeG%\ideafarm.work\domains\com\ideafarm\51000%1
dir
pause
goto :FIN
:NOTaDAM

if %1z == ewz cd \ideafarm.home.%idHomeG%\ephemeral\domains\com\ideafarm\city\workshop
if %1z == ewz goto :FIN
if %1z == wixz i:
if %1z == wixz cd \"Program Files"\MSBuild\Microsoft\WiX\v3.x
if %1z == wixz goto :FIN
if %1z == 101z  cd "\ideafarm.home.%idHomeG%01\IdeaFarm (tm)\SYSTEM\Drop Files Here To Archive"
if %1z == 101z  dir *.mp3 > \tmp\arc.ttt
if %1z == 101z  if exist \tmp\arc.unz.ttt del \tmp\arc.unz.ttt
if %1z == 101z  for %%f in (*.day.zip) do @unzip -l %%f *.mp3 >> \tmp\arc.unz.ttt
if %1z == 101z  rw \tmp\arc.ttt \tmp\arc.unz.ttt
if %1z == 101z  goto :FIN
if %1z == cmz  cd \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\cmd
if %1z == cmz  goto :FIN
if %1z == dz   cd\ideafarm.home.%idHomeG%\precious\domains\com\ideafarm\city\library\dictionary
if %1z == deadz  cd\ideafarm.work\bench\deadman
if %1z == deadz  goto :FIN
if %1z == elz  cd \ideafarm.home.%idHomeG%\precious\domains\com\ideafarm\city\workshop\elves
if %1z == elz  goto :FIN
if %1z == wwz  cd\ideafarm.work\bench\wowindow
if %1z == wwz  goto :FIN
rem if %1z == hwz cd \Program Files\Microsoft SDKs\Windows\v7.0\Include
if %1z == hwz %idrive%
if %1z == hwz cd \ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\watcom\h\nt
if %1z == hwz   goto :FIN
if %1z == mkz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\gen\osMakeF
if %1z == mkz   goto :FIN
if %1z == dbadz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\library.0002.bad\dictionary
if %1z == dbadz   goto :FIN
if %1z == 2az   cd\2archive
if %1z == 2az   goto :FIN
if %1z == az   cd\id*04\id*\s*\d*ar*
if %1z == az   goto :FIN
if %1z == tcz  cd\ideafarm.home.ffffff\domains\com\ideafarm\51000512
if %1z == tcz  goto :FIN
if %1z == 9z  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\51000449
if %1z == 9z  goto :FIN
if %1z == woz  cd \ideafarm.home.%idHomeG%\precious\domains\com\ideafarm\city\workshop
if %1z == woz  goto :FIN
if %1z == stz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\stateC
if %1z == stz  goto :FIN
if %1z == caz  cd\tmp\dail*
if %1z == caz  rw *abridg* all*
if %1z == caz  goto :FIN
if %1z == 1z if %idHomeG%z == ffffffz g:

if exist \ideafarm.home.%idHomeG%\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover goto :EXISTShOVER
rem if %1z == 1z   md\ideafarm.home.%idHomeG%\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
:EXISTShOVER
if %1z == 1z   cd\ideafarm.home.%idHomeG%\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
if %1z == 1z   goto :FIN

if %1z == isz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\settings
if %1z == isz   goto :FIN
if %1z == ibz  cd\ideafarm.home.%idHomeG%\backed.up.daily
if %1z == ibz  goto :FIN

if %1z == mz   cd\ideafarm.home.%idHomeG%\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
if %1z == mz   goto :FIN

if %1z == mhz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\park\exedll\1\master.hide
if %1z == mhz   goto :FIN
rem    if %1z == maz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\5100043b\in\arc
       if %1z == maz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\5100043b\in\arc
rem U::if %1z == maz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\5100043c\in\1
if %1z == maz   goto :FIN
rem if %1z == m2z   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\masterC
rem if %1z == m2z   goto :FIN
if %1z == manz  cd\ideafarm.work\bench\man
if %1z == manz  goto :FIN
if %1z == naz  cd\ideafarm.work\bench\nullasm
if %1z == naz  goto :FIN
rem if %1z == moz  cd\ideafarm.work\bench\monitor
rem if %1z == moz  goto :FIN
if %1z == moz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\51000441\in
if %1z == moz  goto :FIN
if %1z == 7z   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\park\7use
if %1z == 7z   goto :FIN
if %1z == bz   cd \ideafarm.home.%idHomeG%\domains\com\ideafarm\gen\osMakeF
if %1z == bz   goto :FIN
if %1z == sz  cd\ideafarm.work\backed.up.never\software
if %1z == sz  goto :FIN
if %1z == ssz  cd\ideafarm.work\backed.up.never\software.setup
if %1z == ssz  goto :FIN
if %1z == bsz  cd\ideafarm.work\bench\scratch
if %1z == bsz  goto :FIN
if %1z == bez  cd\ideafarm.work\bench
if %1z == bez  goto :FIN
if %1z == beiz  cd\ideafarm.work\bench\2.1.ideafarm
if %1z == beiz  goto :FIN
if %1z == osb1z  cd\ideafarm.work\bench\osbug1
if %1z == osb1z  goto :FIN
if %1z == coz  cd\ideafarm.work\bench\console
if %1z == coz  goto :FIN
if %1z == exz  cd\ideafarm.work\bench\exe
if %1z == exz  goto :FIN
if %1z == ntz  cd\ideafarm.work\bench\nametime
if %1z == ntz  goto :FIN
if %1z == dtz  cd\ideafarm.work\bench\deletime
if %1z == dtz  goto :FIN
if %1z == gdz  cd\ideafarm.work\bench\guidriver
if %1z == gdz  goto :FIN
if %1z == bhz  cd\ideafarm.work\bench\hire
if %1z == bhz  goto :FIN
if %1z == 13z  cd\ideafarm.work\bench\0.0130001
if %1z == 13z  goto :FIN
if %1z == nz  cd\ideafarm.work\bench\null
if %1z == nz  goto :FIN
if %1z == slz  cd\ideafarm.work\bench\sleep
if %1z == slz  goto :FIN
if %1z == n2z  cd\ideafarm.work\bench\null2
if %1z == n2z  goto :FIN
if %1z == n3z  cd\ideafarm.work\bench\null3
if %1z == n3z  goto :FIN
if %1z == brz  cd\ideafarm.work\bench\bootroot
if %1z == brz  goto :FIN
if %1z == cz   cd \ideafarm.home.%idHomeG%\precious\domains\com\ideafarm\city\library\snip
if %1z == cz   goto :FIN
if %1z == ciz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city
if %1z == ciz  goto :FIN
if %1z == ci3z cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city
if %1z == ci3z goto :FIN
if %1z == 73z  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\park\7use
if %1z == 73z  goto :FIN
if %1z == datz cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\data
if %1z == dz   goto :FIN
if %1z == daz  cd\ideafarm.work\backed.up.daily
if %1z == daz  goto :FIN
if %1z == dayz cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\data\day
if %1z == dayz goto :FIN
if %1z == dbz cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\data\base
if %1z == dbz  goto :FIN
if %1z == dnz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\library\dictionary.not.ported.yet
if %1z == dnz  goto :FIN
if %1z == iz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm
if %1z == iz   goto :FIN
if %1z == ooz  cd\ideafarm.work\bench\oo
if %1z == ooz  goto :FIN
if %1z == oz  cd\ideafarm.work\bench\obj
if %1z == oz  goto :FIN
if %1z == ez   cd \ideafarm.home.%idHomeG%\ephemeral\domains\com\ideafarm\city\workshop\exe
if %1z == ez   goto :FIN
if %1z == e1z   cd\ideafarm.work\backed.up.never\gen\exe\released.i00001
if %1z == e1z   goto :FIN
if %1z == e2z   cd\ideafarm.work\backed.up.never\gen\exe\released.i00002
if %1z == e2z   goto :FIN
if %1z == e3z   cd\ideafarm.work\backed.up.never\gen\exe\released.i00003
if %1z == e3z   goto :FIN
if %1z == e5z   cd\ideafarm.work\backed.up.never\gen\exe\released.i00005
if %1z == e5z   goto :FIN
if %1z == fz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\ftp\public
if %1z == fz   goto :FIN
if %1z == gz   cd\ideafarm.work\bench\gorilla
if %1z == gz   goto :FIN
if %1z == hz   cd\ideafarm.work\html
if %1z == hz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\gen\lake
if %1z == hz   goto :FIN
if %1z == hdz  cd\ideafarm.work\html
if %1z == hdz  goto :FIN
if %1z == inz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\data\in
if %1z == inz  goto :FIN
if %1z == jz   cd\ideafarm.work\backed.up.never\software\jsdk20
if %1z == jz   goto :FIN
if %1z == kz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\gen\kt
if %1z == kz   goto :FIN
if %1z == lz   cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\library
if %1z == lz   goto :FIN
if %1z == lbz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\library\base
if %1z == lbz  goto :FIN
if %1z == odz  cd\ideafarm.work\backed.up.never\gen\obj.ipdos-wd
if %1z == odz  goto :FIN
if %1z == ouz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\data\out
if %1z == ouz  goto :FIN
if %1z == ou3z  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\city\data\out
if %1z == ou3z  goto :FIN
if %1z == oez  cd\ideafarm.work\backed.up.never\gen\obj.ipdos-we
if %1z == oez  goto :FIN
if %1z == prez  cd\ideafarm.work\bench\prepro
if %1z == prez  goto :FIN
if %1z == prz  cd\ideafarm.work\0.bench\packer
if %1z == prz  goto :FIN
if %1z == paz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\payment
if %1z == paz  goto :FIN
if %1z == pz  cd\ideafarm.work\bench\0.package
if %1z == pz  goto :FIN
if %1z == bunz cd\ideafarm.work\backed.up.never
if %1z == bunz goto :FIN
if %1z == rz  cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\5100043a
if %1z == rz  goto :FIN
if %1z == rez  goto :FIN
if %1z == tmpz cd\ideafarm.home.%idHomeG%\domains\com\ideafarm\tmp
if %1z == tmpz goto :FIN
if %1z == tnz  cd\ideafarm.work\backed.up.never\txt
if %1z == tnz  goto :FIN
if %1z == tdz  cd\ideafarm.work\txt
if %1z == tdz  goto :FIN
if %1z == tdtz  cd\ideafarm.work\txt\thesis
if %1z == tdtz  goto :FIN
if %1z == zz   cd\ideafarm.work\backed.up.never\gen\zip
if %1z == zz   goto :FIN

:FIN
