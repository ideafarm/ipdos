@echo off

rem I FRESHEN HOME 2 (SO THAT IT CAN BE USED FOR MULTIHOME TESTING)

if not exist d:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist d:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\* goto :FIN
if not exist d:\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\* goto :FIN
if not exist d:\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\* goto :FIN

d:

cd d:\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
del */q
copy d:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*

cd d:\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
del */q
copy d:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*

cd d:\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
del */q
copy d:\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*

:FIN