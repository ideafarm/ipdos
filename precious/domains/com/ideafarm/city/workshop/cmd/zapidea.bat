@echo off
setlocal

if not %2z == z goto :DOmEMORYsPACE
if not %1z == z goto :DOhOME

d:
cd\
if exist ideafarm.home.1\* goto :GOTdRIVE
if exist ideafarm.home.101\* goto :GOTdRIVE

echo can't find ideafarm.home.1\*
echo nothing done
goto :FIN1

:GOTdRIVE

for /d %%d in (ideafarm.home.*) do @call zapidea %%d

goto :FIN1




:DOhOME

rem echo will zap some ephemeral directories within %1

rem set xx=SYSTEM
rem if %1z == ideafarm.home.1z set xx=WoIdeafarm
                               set xx=WoIdeafarm
rem echo zapping for user %xx%


rem THE NEXT LINE PRESERVES SUBDIRECTORIES IN tmp FOR THE BENEFIT OF HOME 101 ON FACTORY1 (privileges, registry)
if     exist \%1\tmp\*                                                                                           del      /q \%1\tmp
if     exist \%1\ephemeral\reports\*                                                                             rmdir /s /q \%1\ephemeral\reports

if     exist \%1\ephemeral\backed.up.daily\domains\com\ideafarm\ipdos\memorySpaces\%xx%\00000100\stateSpaces\9d600015\* rmdir /s /q \%1\ephemeral\backed.up.daily\domains\com\ideafarm\ipdos\memorySpaces\%xx%\00000100\stateSpaces\9d600015

for %%s in ( 001 002 003 004 005 100 ) do @call zapidea %1 %%s

goto :FIN2

:DOmEMORYsPACE

if     exist \%1\ephemeral\backed.up.daily\domains\com\ideafarm\ipdos\memorySpaces\%xx%\00000%2\stateSpaces\0000ffff\* rmdir /s /q \%1\ephemeral\backed.up.daily\domains\com\ideafarm\ipdos\memorySpaces\%xx%\00000%2\stateSpaces\0000ffff

if not exist \%1\ephemeral\backed.up.daily\domains\com\ideafarm\ipdos\memorySpaces\%xx%\00000%2\stateSpaces\ffffefff\* goto :FIN2

cd           \%1\ephemeral\backed.up.daily\domains\com\ideafarm\ipdos\memorySpaces\%xx%\00000%2\stateSpaces\ffffefff

if exist bkstelemetry.*          del bkstelemetry.*
if exist bkstrace.*              del bkstrace.*
if exist bksTraceDivert??.*      del bksTraceDivert??.*
if exist bksTraceHomeEcho.*      del bksTraceHomeEcho.*
if exist bktraceloop.*           del bktraceloop.*
if exist bksword.*               del bksword.*
if exist bkswords.*              del bkswords.*

if exist log*                    del log*
if exist walk*                   del walk*
if exist kv.cloud*               del kv.cloud*
if exist survey1.*               del survey1.*

if exist kernel.minute.reports.* del kernel.minute.reports.*

:FIN1
cd \tmp\desk
endlocal

:FIN2