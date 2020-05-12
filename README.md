# IPDOS (tm): IdeaFarm (tm) Piggyback Distributed Operating System
 A general purpose programming and deployment environment for the C++ language.
 Currently hosted only on Microsoft Windows.
 Currently targets only Microsoft Windows.
 Source code was designed for portability.
 Porting contributions for Linux and other platforms are welcome.
 Built using Open Watcom v2.

IPDOS (tm) craftwork began in 1992, during the "operating system wars".
IPDOS (tm) began life as a 16-bit OS/2 application intended to defeat Microsoft's monopoly and empower the independent software craft.
 28 years and 1/2 million lines of C++ code later, IPDOS (tm) is ready for alpha trial usage.

All 1/2 million lines of code were crafted by the same hands, by a man committed to craftsmanship who saw an awesome potential in the C++ language that no one else appears to have seen.
 IPDOS (tm) development has been the best kept secret in the software industry.
 Think of IPDOS (tm) as a "weapon of mass CONstruction", designed to make coding fun again while reviving innovation and empowering the independent software craft.

Executive overview:
 IPDOS (tm) introduces a novel vision for server and desktop/laptop software technology that inserts a new software layer between a "base operating system" (such as Windows) and application programs (such as Windows console programs, windowed programs, and services).
 Application programs written for IPDOS (tm) are portable in that they run on any host that IPDOS (tm) has been ported to.
 IPDOS (tm) is a "piggyback operating system" in the sense that it runs on top of a base operating system and presents an alternative, innovative API to application developers.

Discussion:
 Creating this new layer will encourage the development of innovative new programming abstractions (API's) such as the one presented by IPDOS (tm).
 By unbundling the API from the base operating system, development of base operating systems can become more innovative, since a new base operating system can instantly acquire application programs simply by porting IPDOS (tm).
 By unbundling the API, base operating system development can focus on security and on supporting new hardware.
 By unbundling the API, operating system vendors lose control over the marketplace, hardware vendors acquire the power to innovate, and application developers are empowered both by the emergence of innovative new API's and new hardware and by no longer being locked into a particular base operating system platform.
 In other words, creating a new software layer between the base operating system and applications empowers everyone except the base operating system vendor.

Technical overview:
 An "application program" is a small dll that is loaded and called by one of two small generic executables, one for console and service (daemon) programs and the other for graphics programs.
 All work is done by calling IPDOS (tm) C++ class member functions and global functions exported from a single large "base dll".
 Application code cannot access the API of the "base operating system" (Windows, Linux, etc.)
 All work must be done by calling the IPDOS (tm) API (the class library).
 There are four code layers.
 (1) The thirdC class is a thin wrapper that contains all functionality provided by the "base o.s." and by third party API's such as OpenSSL.
 (2) The etherC class presents the IPDOS (tm) procedural programming API, which implements a novel programming abstraction.
 (3) The many other classes, such as socketC, present the IPDOS (tm) object oriented API.
 (4) Application code assigns work to object instances and uses etherC instances to execute procedural code.

The "stroke string" innovation:
 Legacy console and graphics programs manipulate 8-bit ASCII characters.
 Contemporary Windows programs manipulate 16-bit Unicode characters.
 IPDOS (tm) applications manipulate "stroke strings", in which each stroke contains three 32-bit integers.
 Each instance of the strokeS class can thus represent any Unicode text character, but can also represent a graphics element such as "set color to...", "draw line to...", "move cursor to...".
 A strokeS instance can also represent an element of a search pattern, such as "One of: 'one' 'two' 'three' 'a really long choice' "
 (IPDOS (tm) search patterns can emulate wildcard and regular expression searches but are more powerful in that subexpressions are fully recursive.)
 A strokeS instance can even represent an animated glyph that provides all of the functionality that is called a "child window" in the Windows API.
 By replacing the concept of a "character string" with that of a "stroke string", IPDOS (tm) eliminates the distinction between console and graphics programs.
 Every IPDOS (tm) application has the simplicity and structure of a console program, but all of the power of a graphics program.

There are other innovations.
 There are also several surprises; IPDOS (tm) source code is eccentric in that it is written from the bottom up.
 But the eccentricities are few, and you will find the code consistent in style and very readable due to the care taken in choosing variable and function names.
 All of this code was crafted by a single pair of hands and a single mind, as a literary as well as technical work.
 Read the license, clone to your GitHub Desktop, build your first "hello" program, and start browsing code and "playcrafting".


# This is proprietary open source.  Ownership extends to all forks.  Permission to fork may be withdrawn.
 See LICENSE.pdf before forking, cloning, or using any portion.

Status:  Applications development is active.  IPDOS (tm) is stable and mature and now ready for "alpha testing" by others.  The following "Quick Start" instructions are new and untested.


# QUICK START INSTRUCTIONS:  Building IPDOS (tm) and then creating a "hello world" program.
 This repository contains binaries of all tools that it needs to build itself:
 Open Watcom V2, WiX Toolset, and Rimstar Programmers' Editor.
 To build, you just need to edit your computer's PATH setting to add one directory, edit one batch file in that directory, and then run that batch file.
 If the following steps do not bring you to a joyful result, please open an issue on GitHub.

The following instructions are currently being tested and debugged, using a "virgin" Windows 10 Professional on which Avast (antivirus) has been installed.

(1) Clone this repository to GitHub Desktop, using a directory named "X:\ideafarm.home.1", where X is the drive letter of a local (not network) nonremovable hard disk drive.

(2) To the PATH environment variable setting, append:   " ;X:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\cmd "

(3) Using any plain text editor, edit the "idrive=d" line to indicate the correct drive letter X, in X:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\cmd\ideafarm.bat

(4) Open a command prompt and execute:    " ideafarm "

(5) Wait until the "IdeaFarm (tm) Elves" window displays [user] in the title bar and a line that begins with "anonymous ideafarm_wo" in the top left corner of the black window.

(6) Press the 'a' key to select "anonymous".

(7) The "IdeaFarm (tm) Elves" window will now be blank except for a single line (which probably wraps unless the window is maximized): "adamlow ascii ...".  When you see this, IdeaFarm (tm) Bundle has been built.

(8) Press the 'e' key ; then press the '1' key .  This opens the source file for "scratch adam 1", using the Rimstar Programmers' Editor.

(9) In the Rimstar Editor's menu, select Options / Global Settings... / Editor / Path file name, and verify that the box contains " X:\ideafarm.home.1\ephemeral\domains\com\ideafarm\state\rimstar\rs_state.ini ", where X is the drive letter to which you cloned this repository.

(10) Edit the hello text to suite your whim.  Then close the editor.

(11) Press these keys: " ma1 ".  This causes an elf to build scratch adam 1.  Wait for the new window to disappear.

(12) Press the keys: " p 1 ".  (Yes, you need to key a space after the 'p'.)  This causes scratch adam 1 to run in a new window.


# TROUBLESHOOTING:  If the above steps didn't work for you,...

(A) Verify that "#define DEBUG" is not commented out at the top of X:\ideafarm.home.1\precious\domains\com\ideafarm\city\workshop\elves\elves.cpp .

(B) Verify that "#define PRODUCTION" is not commented out near the bottom of X:\ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\5adam.51000621.1 .

(C) If your antivirus program complains or, worse, decides that it is seeing malware, please report this by opening an issue.  Open Watcom V2 is known to cause this with some antivirus programs.  One workaround is to install Open Watcom V2 yourself and then tell your antivirus program to ignore the folder where you installed it.

(D) The WiX Toolset might complain that a component of Windows that it requires is not installed.  If this happens, install the component or report the issue.

(E) If you get here without joy, please do report an issue so that it can be fixed for the benefit of others.


# VOLUNTEER HELP WANTED
 Please "alpha test" the above Quick Start Instructions.
 Doing so will not install any software or modify any registry entries other than the edit that you make to the PATH setting.
 You can completely undo all effects simply by reversing that edit and then deleting your clone of this repository.  

# PAID HELP WANTED
 Once IdeaFarm (tm) Bundle has become a paid subscription product and is generating revenue, some of that revenue will be used to create paid "work from home" opportunities for bug fixers, enhancement developers, sales professionals, marketers, and administrators.
 Get involved now as a volunteer, and you will have an inside track as IPDOS (tm) opportunities develop. 

# BUSINESS OPPORTUNITIES
 28 years were spent witing 1/2 million lines of C++ code to craft a powerful general purpose software environment for the C++ language.
 IPDOS (tm) is still in active development, and the graphics subsystem is being rewritten, so IPDOS (tm) cannot currently launch a graphics (windowed) program.
 But IPDOS (tm) can be used for custom "back end" server applications, as well as Windows service daemon programs and command line tools.
 It can also be used to teach or tutor C++ programming.
 In the future, it will support the publication of revenue-producing "proprietary open source" applications for profit.

Please consider exploring the capabilities of IPDOS (tm) by building your "hello" program and then exploring the etherC and other API's.
 Early mastery of IPDOS (tm) programming could place you in a sweet situation in which you can create custom solutions faster and at a lower price than the competition.

# PRICING
 Please review the LICENSE.
 There is no charge for using IPDOS (tm) in the manner permitted by the LICENSE.
 The license permits usage only to contribute bug fixes and enhancements as well as all purely educational uses.
 Installing IPDOS (tm) Bundle, a Windows service, is currently free but will be a paid subscription product in the future.

