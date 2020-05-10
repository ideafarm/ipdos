# IPDOS (tm): IdeaFarm (tm) Piggyback Distributed Operating System
 A general purpose programming and deployment environment for the C++ language.
 Currently hosted only on Microsoft Windows.
 Currently targets only Microsoft Windows.
 Source code was designed for portability.
 Porting contributions for Linux and other platforms are welcome.
 Built using Open Watcom v2.

Executive overview:
 IPDOS (tm) introduces a novel vision for server and desktop/laptop software technology that inserts a new software layer between a "base operating system" (such as Windows) and application programs (such as Windows console programs, windowed programs, and services).
 Application programs written for IPDOS (tm) are portable in that they run on any host that IPDOS (tm) has been ported to.
 IPDOS (tm) is a "piggyback operating system" in the sense that it runs on top of a base operating system and presents an alternative, innovative API to application developers.
 Creating this new layer will encourage the development of innovative new programming abstractions (API's) such as the one presented by IPDOS (tm).
 By unbundling the API from the base operating system, development of base operating systems can become more innovative, since a new base operating system can instantly acquire application programs simply by porting IPDOS (tm).
 By unbundling the API, base operating system development can focus on security and on supporting new hardware.
 By unbundling the API, operating system vendors lose control over the marketplace, hardware vendors acquire the power to innovate, and application developers are empowered both by the emergence of innovative new API's and new hardware and by no longer being locked in to a particular base operating system platform.
 In other words, creating a new software layer between the base operating system and applications empowers everyone except the base operating system vendor.
 IPDOS (tm) is one man's vision for an ideal C++ programming environment, created over 25 years with 1/2 million lines of C++ code.

Technical overview:
 An "application program" is a small dll that is loaded and called by one of two small generic executables, one for console programs and the other for graphics programs.
 All work is done by calling IPDOS (tm) C++ class member functions and global functions exported from a single large "base dll".
 Application code cannot access the API of the "base operating system" (Windows, Linux, etc.)
 All work must be done by calling the IPDOS (tm) API (the class library).
 There are four code layers.
 (1) The thirdC class is a thin wrapper that contains all functionality provided by the "base o.s." and by third party API's such as OpenSSL.
 (2) The etherC class presents the IPDOS (tm) procedural programming API, which implements a novel programming abstraction.
 (3) The many other classes, such as socketC, present the IPDOS (tm) object oriented API.
 (4) Application code assigns work to object instances and uses etherC instances to execute procedural code.

The "stroke string" innovation:
 While legacy console and graphics programs manipulate 8-bit ASCII characters.
 Contemporary Windows programs manipulate 16-bit Unicode characters.
 IPDOS (tm) applications manipulate "stroke strings", in which each stroke contains three 32-bit integers.
 Each instance of the strokeS class can thus represent any Unicode text character, but can also represent a graphics element such as "set color to...", "draw line to...", "move cursor to...".
 A strokeS instance can also represent an element of a search pattern, such as "One of: 'one' 'two' 'three' 'a really long choice' "
 (IPDOS (tm) search patterns can emulate wildcard and regular expression searches but are more powerful in that subexpressions are fully recursive.)
 A strokeS instance can even represent an animated glyph that provides all of the functionality that is called a "child window" in the Windows API.
 By replacing the concept of a "character string" with that of a "stroke string", IPDOS (tm) eliminates the distinction between a console and graphics programs.
 Every IPDOS (tm) application has the simplicity and structure of a console program, but all of the power of a graphics program.

There are other innovations.
 The IPDOS (tm) vision for C++ programming took over 25 years to implement in 1/2 million lines of C++ code, with a little bit of Assembler modules and in-line macros.
 It presents one man's vision of what an ideal programming and deployment and revenue collection environment would look like.

# This is proprietary open source.  Ownership extends to all forks.  Permission to fork may be withdrawn.
 See LICENSE.pdf before forking, cloning, or using any portion.

Status:  Under construction.  Please contact owner before forking, cloning, or using.

