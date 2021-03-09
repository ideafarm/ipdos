@echo off

rem I FRESHEN HOME 2 (SO THAT IT CAN BE USED FOR MULTIHOME TESTING)

if not exist %idrive%\ideafarm.home.1\*                                                          goto :FIN
if not exist %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*  goto :FIN

if     exist %idrive%\ideafarm.home.2\* goto :FRESH2

robocopy %idrive%\ideafarm.home.1 %idrive%\ideafarm.home.2 /s
goto :FIN


:FRESH2

%idrive%

if not exist %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*  goto :FIN

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
if exist * del */q
copy %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
if exist * del */q
copy %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
if exist * del */q
copy %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*

:FIN