@echo off

%idrive%
cd\

for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here\production.*" move "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here\production.*" "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here"

for /d %%d in (ideafarm.home.*) do @if exist "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here\dut.*"        move "\%%d\IdeaFarm (tm)\WoIdeafarm\Drop a Copy of SOIL (tm) Text Here\dut.*"        "\%%d\IdeaFarm (tm)\WoIdeafarm\Pick Up SOIL (tm) Reply Text Here"
