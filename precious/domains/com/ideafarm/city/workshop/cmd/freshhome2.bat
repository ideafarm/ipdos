@echo off

rem I FRESHEN HOME 2 (SO THAT IT CAN BE USED FOR MULTIHOME TESTING)

if not exist %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\* goto :FIN
if not exist %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\* goto :FIN

%idrive%

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
del */q
copy %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
del */q
copy %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
del */q
copy %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*

:FIN