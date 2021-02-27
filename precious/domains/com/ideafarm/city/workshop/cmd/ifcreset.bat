@echo off

%idrive%
cd\

for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\SOIL (tm) Text Being Eaten\production.*"        move "\%%d\IdeaFarm (tm)\WoIdeafarm\SOIL (tm) Text Being Eaten\production.*" "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here"
for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\SOIL (tm) Text Being Eaten\dut.*"               move "\%%d\IdeaFarm (tm)\WoIdeafarm\SOIL (tm) Text Being Eaten\dut.*"        "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here"

for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here\production.*" move "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here\production.*" "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here"
for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here\dut.*"        move "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here\dut.*"        "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here"

rem ENABLE IN PRODUCTION AFTER DEBUGGING THIS BAT FILE:
rem for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\SOIL (tm) Text Being Eaten\*"                   del  "\%%d\IdeaFarm (tm)\WoIdeafarm\SOIL (tm) Text Being Eaten\*"              /q
rem for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here\*"            del  "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here\*"       /q
rem for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up Rejected Files Here\*"                  del  "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up Rejected Files Here\*"             /q
