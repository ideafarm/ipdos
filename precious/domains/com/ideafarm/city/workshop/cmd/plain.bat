@echo off

if %1z == !filez goto :FILE

set found=

call g 1

for %%f in (ideafarm.*.ipdos-we) do @call plain !file %%f
goto :DO

:FILE
if %found%z == z set found=%2
goto :FIN

:DO
set adam=%1
if %1z == searchz set adam=74e

echo doing this: %found% 51000%adam% !idHome 10000008 %2 %3 %4 %5 %6 %7 %8 %9
                 %found% 51000%adam% !idHome 10000008 %2 %3 %4 %5 %6 %7 %8 %9

:FIN

