@echo off

rem I FRESHEN HOME 2 (SO THAT IT CAN BE USED FOR MULTIHOME TESTING)

if not exist \ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist \ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\* goto :FIN
if not exist \ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist \ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\* goto :FIN

cd \ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
del */q
copy \ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*

cd \ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
del */q
copy \ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*

cd \ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
del */q
copy \ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*

:FIN