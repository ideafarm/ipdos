@echo off

rem I COPY PORTIONS OF HOMES 1 AND 2 TO ALL OTHER FACTORIES TO FACILITATE TESTING

rem if not exist \\factory2\d\ideafarm.home.1\* goto :FIN
rem if not exist \\factory2\d\ideafarm.home.2\* goto :FIN
rem if not exist \\factory3\d\ideafarm.home.1\* goto :FIN
rem if not exist \\factory3\d\ideafarm.home.2\* goto :FIN
if not exist \\factory4\d\ideafarm.home.1\* goto :FIN
if not exist \\factory4\d\ideafarm.home.2\* goto :FIN
rem if not exist \\factory5\d\ideafarm.home.1\* goto :FIN
rem if not exist \\factory5\d\ideafarm.home.2\* goto :FIN
rem if not exist \\factory6\d\ideafarm.home.1\* goto :FIN
rem if not exist \\factory6\d\ideafarm.home.2\* goto :FIN
rem if not exist \\factory7\d\ideafarm.home.1\* goto :FIN
rem if not exist \\factory7\d\ideafarm.home.2\* goto :FIN
rem if not exist \\factory8\d\ideafarm.home.1\* goto :FIN
rem if not exist \\factory8\d\ideafarm.home.2\* goto :FIN
rem if not exist \\factory9\d\ideafarm.home.1\* goto :FIN
rem if not exist \\factory9\d\ideafarm.home.2\* goto :FIN

%idrive%

cd %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem del    \\factory2\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory3\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
del    \\factory4\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory5\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory6\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory7\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory8\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory9\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem copy * \\factory2\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory3\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
copy * \\factory4\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory5\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory6\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory7\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory8\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory9\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\master

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem del    \\factory2\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory3\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
del    \\factory4\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory5\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory6\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory7\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory8\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem del    \\factory9\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master\*/q
rem copy * \\factory2\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory3\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
copy * \\factory4\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory5\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory6\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory7\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory8\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master
rem copy * \\factory9\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\master

cd %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem del    \\factory2\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory3\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
del    \\factory4\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory5\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory6\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory7\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory8\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory9\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem copy * \\factory2\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory3\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
copy * \\factory4\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory5\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory6\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory7\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory8\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory9\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem del    \\factory2\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory3\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
del    \\factory4\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory5\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory6\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory7\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory8\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem del    \\factory9\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover\*/q
rem copy * \\factory2\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory3\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
copy * \\factory4\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory5\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory6\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory7\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory8\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover
rem copy * \\factory9\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\park\exedll\1\hover

cd %idrive%\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
rem del    \\factory2\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory3\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
del    \\factory4\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory5\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory6\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory7\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory8\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory9\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem copy * \\factory2\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory3\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
copy * \\factory4\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory5\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory6\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory7\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory8\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory9\d\ideafarm.home.1\ephemeral\domains\com\ideafarm\city\workshop\2source

cd %idrive%\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
rem del    \\factory2\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory3\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
del    \\factory4\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory5\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory6\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory7\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory8\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem del    \\factory9\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source\*/q
rem copy * \\factory2\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory3\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
copy * \\factory4\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory5\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory6\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory7\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory8\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source
rem copy * \\factory9\d\ideafarm.home.2\ephemeral\domains\com\ideafarm\city\workshop\2source

:FIN