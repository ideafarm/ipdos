
IP-DOS (tm) <> IdeaFarm (tm) Piggyback Distributed Operating System

******** Contents (list):

**** Known problems (list):
**** Known problems (details):
**** How to (list):
**** How to (details):



**** Known problems (list):

ALL PROCESSES OTHER THAN THE SERVICE PROCESS DIE IMMEDIATELY
COMPUTER SHUTDOWN TAKES 30 SECONDS LONGER
NOT FULLY REMOVED BY WINDOWS UNINSTALLER


**** Known problems (details):
_______________________________________________________________________________

ALL PROCESSES OTHER THAN THE SERVICE PROCESS DIE IMMEDIATELY

If you see the service process but no other IPDOS (tm) processes (with number
names), this might be because the Visual Studio runtime is not installed.
Run both executables in the following folder and then stop and restart the
IdeaFarm (tm) service:

    ///ideafarm/precious/domains/com/ideafarm/city/workshop/visualstudio

Example:

    C:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\visualstudio

_______________________________________________________________________________

COMPUTER SHUTDOWN TAKES 30 SECONDS LONGER:

IP-DOS (tm) must shutdown before Windows shuts down.  Although IP-DOS (tm)
shutdown requires only eight seconds, for some unknown reason the presence of
IP-DOS (tm) adds from 30 to 45 seconds to the time required for Windows to shut
down.

Who is affected: This will likely irritate you if you are running IP-DOS (tm)
on a laptop or netbook, but not if you are running IP-DOS (tm) on a desktop
computer or on a server.  But it will only affect you if you routinely shut
down Windows rather than use its sleep or hibernate modes.

Workarounds:  (1) Use sleep or hibernate rather than shutdown.  (2) Configure
the IP-DOS (tm) service to run manually rather than be started automatically
when Windows is starting.  (3) Manually stop the IP-DOS (tm) service before
shutting down Windows.

Planned development: This appears to be due to a defect in Windows, so no
changes to IP-DOS (tm) are planned to fix this problem.  Future releases of
IP-DOS (tm) might include features that make it easier to manually stop
IP-DOS (tm) by clicking an icon on the desktop, or to start IP-DOS (tm) on
demand, so that IP-DOS (tm) will not be started unless it is used.

_______________________________________________________________________________

NOT FULLY REMOVED BY WINDOWS UNINSTALLER:

As the old IBM joke goes, this is a "feature", not a "bug".  IP-DOS (tm) is
comprised of two parts: (1) a Windows service, and (2) an "x:\ideafarm.home.1"
directory on nonremovable local storage, typically a hard disk drive.  Windows
Installer only installs, and only knows about, the IP-DOS (tm) service.  The
IP-DOS (tm) home directory is installed by the service, not by Windows
Installer.  When you use Windows (Un)installer to uninstall, the IP-DOS (tm)
home directory will remain on your hard disk drive.

Who is affected: All users who uninstall (remove) IP-DOS (tm).

Warning: The home directory contains all data that you created while using
IP-DOS (tm).

Workarounds: (1) Manually delete the "x:\ideafarm.home.1" directory, but only
if you want to delete your data.

Planned development:  IP-DOS (tm) uses fully automatic, fully unattended silent
updating of its system files and does not use the concept of a "release".  File
updating is done solely according to an internal revision number; no date
associated with the file is used.  IP-DOS (tm) program files are designed to be
"hot updateable"; they can be updated while they are running, usually with no
detectable interruption in service availability.  If the IP-DOS (tm) service is
uninstalled, and then installed at a later time, the newly installed
IP-DOS (tm) service will start the home directory just as if nothing had
happened.  If no home directory can be found, the service will look for a home
directory on a network drive or on a removable drive (such as a USB thumb
drive).  If it finds one, it will copy its system programs (but not its data) 
and attempt to start those programs locally.  This is all working as designed;
no changes are planned.

_______________________________________________________________________________


**** How to (list):

UNINSTALL (REMOVE)


**** How to (details):

_______________________________________________________________________________

UNINSTALL (REMOVE):

IP-DOS (tm) consists of two parts:  (1) An IP-DOS (tm) service, and (2) an
"x:\ideafarm.home.1" home directory.  To fully remove, first use Windows to
uninstall IP-DOS (tm).  This will only remove the service.  Then manually
delete the home directory.

Warning: The "x:\ideafarm.home.1" home directory contains all of your data.  Do
not delete it unless you are sure that you want to delete all of your data.

_______________________________________________________________________________
