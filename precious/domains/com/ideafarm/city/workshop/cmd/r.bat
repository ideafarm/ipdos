@echo off

rem CODEsYNi: R.BAT REXIT.BAT ARE IDENTICAL EXCEPT FOR THE exit COMMAND AT THE END OF REXIT.BAT

setlocal

if not %1z == z goto :GOTPARAMS
if %adam%z == z goto :FIN

set args=5adam.51000%adam%.*.?
goto :DOIT

:GOTPARAMS

call g d
set argprefix=5adam.51000
if not exist %argprefix%%1.? set argprefix=5adam.5101200
if not exist %argprefix%%1.? set argprefix=3func.*.
if not exist %argprefix%%1.? set argprefix=1snip.*.
if not exist %argprefix%%1.? set argprefix=
if not exist %argprefix%%1.? goto :FIN

if not %9z == z set args=%argprefix%%1.? %argprefix%%2.? %argprefix%%3.? %argprefix%%4.? %argprefix%%5.? %argprefix%%6.? %argprefix%%7.? %argprefix%%8.? %argprefix%%9.?
if not %9z == z goto :DOIT
if not %8z == z set args=%argprefix%%1.? %argprefix%%2.? %argprefix%%3.? %argprefix%%4.? %argprefix%%5.? %argprefix%%6.? %argprefix%%7.? %argprefix%%8.?
if not %8z == z goto :DOIT
if not %7z == z set args=%argprefix%%1.? %argprefix%%2.? %argprefix%%3.? %argprefix%%4.? %argprefix%%5.? %argprefix%%6.? %argprefix%%7.?
if not %7z == z goto :DOIT
if not %6z == z set args=%argprefix%%1.? %argprefix%%2.? %argprefix%%3.? %argprefix%%4.? %argprefix%%5.? %argprefix%%6.?
if not %6z == z goto :DOIT
if not %5z == z set args=%argprefix%%1.? %argprefix%%2.? %argprefix%%3.? %argprefix%%4.? %argprefix%%5.?
if not %5z == z goto :DOIT
if not %4z == z set args=%argprefix%%1.? %argprefix%%2.? %argprefix%%3.? %argprefix%%4.?
if not %4z == z goto :DOIT
if not %3z == z set args=%argprefix%%1.? %argprefix%%2.? %argprefix%%3.?
if not %3z == z goto :DOIT
if not %2z == z set args=%argprefix%%1.? %argprefix%%2.?
if not %2z == z goto :DOIT
if not %1z == z set args=%argprefix%%1.?
if not %1z == z goto :DOIT

:DOIT
call g d
start rw %args%
:FIN

endlocal
