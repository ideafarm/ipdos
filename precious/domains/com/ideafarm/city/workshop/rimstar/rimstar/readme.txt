October 8, 1997

Version 4.0.029

Thank you for choosing the RimStar Programmer's Editor. We always appreciate 
your feedback and suggestions.

If you are updating or upgrading please read the all the sections of this file 
describing versions that are newer than the version you were previously 
running, that way you will know about all the changes that have been made 
since you last updated.

>>>> Our WWW site is: http://www.rimstar.com    <<<<
>>>> E-mail for Brian Smith: brians@rimstar.com <<<<

See the end of this file for our address, phone, fax and e-mail info.
______________________________________________________________________________
______________________________________________________________________________
What's new, changed, etc. in version 4.0.029 (Oct 8, 1997)

Bug fix: The 'No translate' checkbox was ignored when opening a single 
file.

New editor configuration settings:

 Reload modified files without prompting - When "Check if other programs 
modify loaded files" is enabled, you can now have the editor automatically 
reload the modified files without prompting you if it is OK to do so. This 
makes it much easier to work with an IDE like Microsoft's Visual Studio. The 
editor will still prompt you if the file to be reloaded has unsaved 
modifications that would be lost if reloaded.

 Do not reset the 'No translate' (open as binary file) checkbox on file open - 
The editor's default action is to uncheck the 'No translate' checkbox on the 
file open dialog each time the dialog is presented. This new setting allows 
you to override this behavior.

These new settings can be set by selecting the "Options.Global settings" menu 
item. You will find them on the 'Editor' property sheet.

______________________________________________________________________________
What's new, changed, etc. in version 4.0.028 (Sept 18, 1997)

Bug fix: A "Memory Access Violation" sometimes occurs when a program run from 
the editor with the editor capturing its output completes.

Bug fix: Window repainted incorrectly when text paste caused vertical scroll 
bars to go from the hidden to visible state.

Bug fix: Project tree's font selection was lost when canceling a New/Open 
Project request.

The requirement, as noted below for V4.0.027, to uncheck the "Hide file 
extensions for known types" checkbox in Explorer Options is no longer 
required. The editor will properly handle single file selections.
______________________________________________________________________________
What's new, changed, etc. in version 4.0.027 (July 11, 1997)

All Platforms
 Fix to "Search files on disk" macro, if replacing it could repeatedly ask to 
replace the same text if the replacement string contained the search string.

Win32 - version
 File Open (Explorer style) Dialog has been enhanced to allow more files to be 
selected (limit was 2K characters, it is now 32K) and the explorer style 
dialog is now back for NT/4.0 users. This is a work-around for an internal 
2K limit imposed by the Explorer shell code (it looks like newer versions no 
longer have this 2K limit but in case you don't have the latest, we are going 
to keep this fix.)

NOTE: If when you select a single file the file's extension is not placed in 
the "File name" edit field then you must uncheck the "Hide file extensions for 
known types" checkbox in Explorer Options. To make this change - open an 
Explorer window, select View.Options... from the menu and uncheck this option.

Win32 Pro Edition - new C++ source code analyzer. V6.0e
______________________________________________________________________________
What's new, changed, etc. in version 4.0.025 (May 11, 1997)

Professional Edition only release
 New C++ code analyser.

______________________________________________________________________________
What's new, changed, etc. in version 4.0.024

Win32 version
 Double-click to load a file from project tree now changes focus to the edit 
window for the file, you no longer have to use the TAB key to switch back to 
the current buffer.

The File extension Associations dialog now supports file extensions up to 254 
characters in length.

SyntaColoring for X86 assembler (.asm)

New macro compiler and C source browser fixes nested typedef bug and certain 
protection faults.

(Pro Edition) Updated C++ source code anayzer.

______________________________________________________________________________
What's new, changed, etc. in version 4.0.023

1st Release of the C++ Professional Edition for Win32. The online help is 
incomplete, please read the remainder of this file for important information 
on 4.0 features, if you need help please call us.

Professional Edition - changes
Build database - now saves modified files before starting the build if you 
have the project configured to save files on build.
OS/2 Pro - Updated C++ Source code analyzer - fixes problems with template 
classes
______________________________________________________________________________
Version 4.0.022 is a timed evaluation only release.
______________________________________________________________________________
What's new, changed, etc. in version 4.0.021

Professional Edition for OS/2

	This is the initial release of the OS/2 Professional Edition for C++. We 
will be adding additional source browsing features in the near future. This 
release provides the basic browsing features you will use the most, including 
Class Viewers, jump to definition, full symbol information dialog (including 
macros), traverse all definitons and references of a symbol.

We have added on-line context sensitive help for the Project settings dialog. 
The online manual has not yet been updated.

To create a C++ browser database follow these steps:

1.) Create a project for your application, if you don't already have one, 
using the Project.New menu item.

2.) Add all the source modules (.C .CPP) you want included in the database to 
the project's  "Source Files" category using the Project Settings dialog - 
Files page. [OS/2 specific: you will probably want to add _OS2_.C to the 
"Browser Preload" files category to ensure full inclusion of OS/2 toolkit 
headers. This file is located in the editor's BROWSER subdirectory.]

3.) Fill in the Project Settings dialog Browser page. (F1 will give you help 
for all the Project Settings pages. You should read the help for the Browser 
page, it gives you important information.)

4.) Build the browser database by selecting Rebuild database from the project 
menu.

5.) If the database is created successfully it will be opened automatically. 
The Browse - "Open database" menu item can also be used to open a database.

6.) Once you have a database created, the editor will open the database for 
you whenever you open the project. Only one database can be open at any given 
time. When you open a database the database that is currently open (if any) 
will be closed.

If you have any trouble getting a browser database created for your code 
please call us, e-mail is fine too, but it would be better to give us a call 
due to the sometimes-complex issues involved.


We would greatly appreciate your feedback or suggestions on the Professional 
Edition.

We want to thank all of you who have been waiting most patiently for the 
release of the Professional Edition, we hope you find it worth the wait.

Note: The tree controls for the OS/2 version have been enhanced to allow 
single clicking on parent node buttons to make them expand or collapse.


File extension associations - fix

	File extension associations may now be set for file extensions longer than 
3 characters - extensions up to 255 characters long are now supported. This 
will now enable you to create file extension associations for .java files. 
______________________________________________________________________________ 
What's new, changed, etc. in version 4.0.020

OS/2 Bug fixes
   File Open dialog - make default directory / directory change problems are 
fixed. SaveAs dialog - directory change problem is fixed. Vertical scroll bars 
not appearing on short files has been fixed.


Macro primitive function change

   PromptSetEditText() now takes an optional 2nd argument, the new prototype 
is: PromptSetEditText(char *text, BOOL bSelect); If bSelect is non-zero the 
edit field text will be selected, other it will not be selected. If the 2nd
argument is omitted it defaults to 1, causing the text to be selected (the 
default behavior before this change.)
______________________________________________________________________________
What's new, changed, etc. in version 4.0.019

Windows Version fixes - entry field text limit for file open dialogs increased 
to 32K for Windows/NT (Win/95 explorer already supports very large string 
size.)

Fixed: editor not saving/restoring it's main window size.

Search Files - Ctrl+Break will allow you to abort the search/replace after the 
current file it is working on has been processed.

>>> OS/2 Warning <<<: When testing file saves to a networked Windows 95 system 
from OS/2 Warp Connect (with an OS/2 Peer connection) the file save can fail 
during the write with the error message title "WriteBuffer" and message text 
"Input/Output access denied", when this happens the file on the remote system 
will be !!!truncated!!! and the write aborted. If you are networked to a 
Windows 95 system you are advised to test modifying a file larger than 4KB to 
verify that the file can be saved without errors. If you get this error then 
you should use "Save As" to save the file to a local drive on your machine and 
then copy the file back to the networked machine - if you do not do this the 
file on the networked machine will be incomplete! If any of you have any 
experience with this problem we would appreciate hearing from you, we have 
tried everything we can think of and still get this error, I must assume it is 
either a bug in OS/2 or Windows 95, both are the original release versions - 
no fix packs have been applied. Since we only run Warp Connect we can not say 
whether this is a problem with prior versions of OS/2 or whether later fix 
packs have corrected this problem, but we want to make you aware of the 
problem in case you should run into it.

______________________________________________________________________________
What's new, changed, etc. in version 4.0.018

Windows Standard Edition version released. Note: the context help has not yet 
been brought up to date for the new features. Read the rest of this file for 
important information on new features.

Window 95 support in this version is very good. All file open dialogs now use 
standard explorer style dialogs. Long filenames with spaces are supported as 
well. Note: the Windows NT file open dialog does not show files with spaces in 
their names, when NT 4.0 arrives this should be remedied.

New command line switch -p has been added so you can specify a project file 
that you want to have loaded. If you specify -p without a project file then 
the project (if any) stored in the state restore file will not be restored. 
Use: -p<Project file name> or  -p <Project file name>

Network paths (UNC names) are now supported, ie. you can now use filenames 
like this: 
  \\network\drive_c\rse4\rse_cfg.ini
to access files on a networked machine.

New feature: You can now have the mouse pointer vanish when you type. See the
editor configuration dialog page "Editor" option "Hide mouse when typing". The 
pointer will come back again when you move the mouse.

The popup menu has had a number of useful items added to it.

New compare/merge macro. Has the ability to resync after a mismatch is found.

New file backup features:
 You can now place your backup files in much more flexible ways. We have added 
support for file part specifiers as follows:

 The following special escapes are substituted in the backup path with the 
coresponding parts of the buffer's path name.

 %d - the drive or network path designator
 %p - the directory path
 %f - the file name excluding any extension
 %s - shorthand for %d%p%f
 %e - the file extension including the '.'
 %b - shorthand for %f%e

Using these substitutions you can save backups in many ways. Here are some of 
the more common ones and the backup path you would use.

1.) Create a backup file with the file extension .BAK in the same directory as 
the original file. Leave backup path empty or specify: %s.BAK

2.) Create a backup file by the same name as the original file in a fixed 
directory. For example if you wanted all your files backed up in c:\backups you 
would specify: c:\backups\%b

3.) Create a backup file by the same name as the original file in a directory 
relative to the location of the original file. A relative path (without a 
drive or network path designator) will be appended to the path of the file to 
be backed up. For example you can specify:
 %d%pbackup\%b
and the editor will place the backup of the file c:\rse\macros\c.rm in 
c:\rse\macros\backup\c.rm 

4.) Create a backup file by the same name as the original file using a fixed 
base directory with the path of the original file appended to the base 
directory. This allows you to mirror the directory structure of the files you 
edit in the backup directory. For example you can specify:
 c:\backups%p%b
If you edit the file c:\rse\macros\c.rm the backup file will be 
c:\backups\rse\macros\c.rm.

5.) Have a backup directory for each drive. Specify: %d\backups\%b
or if you want to mirror the directory structure as well specify: 
 %d\backups\%p%b

 Backup directories are created automagicly if they do not exist.

 If the backup path contains a drive letter or network path (\\) then you 
should not have the backup path be relative. When a backup path specifies a 
drive letter or network location the editor combines the backup path with the 
filename of the file to be backed up. In this case a relative path would not 
work as you might expect since the current working directory for that drive 
can change from editor invocation to editor invocation, thus placing the 
backup file in different places. So don't specify a backup path like 
c:.\backup, you should use a fixed path like c:\backups or a path that is 
relative with respect to the buffer as in example #3.
______________________________________________________________________________
What's new, changed, etc. in version 4.0.014

<<!>>NOTE: If you are upgrading from a prior version and did not use the setup
<<!>>program to install this version then you should add the editor's path to
<<!>>LIBPATH in your CONFIG.SYS and restart OS/2. The editor now uses DLL's
<<!>>which are located in the editor's base directory. It will fail to load if
<<!>>the DLL's can not be loaded. ALSO NOTE: RseResO.dll must be located in the
<<!>>same directory as the executable R.EXE.

This version marks the official release of the OS/2 4.0 Standard Edition. The 
online docs and help are not yet done, but this is pretty close to GA 4.0 Std. 
There will of course continue to be updates and we will make them available as 
soon as we have them ready.

There are many enhancements in this release. Not all of them are covered here 
but as you use the editor you will find them. We would like very much to get 
your feedback on this release. Please report any bugs so we can get them 
fixed. We are also open to suggestions for improvements.

<<Note for those updating from prior 4.0 versions>> The 1st time you start the 
editor, bring up the editor's configuration dialog (Options.Global 
settings...) and go through the various settings to see what's new. When you 
exit the dialog (press Alt+F4 or double-click the system icon) the editor will 
update the rse_cfg.ini file. You should do this so that all the new sections 
of the configuration file are added to your existing rse_cfg.ini file, 
otherwise you may find that some of the sections described below are not there 
(defaults are used if a section is not found.)

>>Search and Replace
 The following functions have been implemented as macros, they used to be 
built into the editor:
 Search,  SearchAgain,  SearchBackward,  SeachForward
 Replace, ReplaceAgain, ReplaceBackward, ReplaceForward
You don't have to do anything new to use them, but they do have some enhanced 
behavior that many of you have asked for:
If you have a selection that is less than a line in size the search and 
replace dialogs will be initialized with the selected text and the text 
selection will be removed. If no selection is active then the search dialog is 
invoked it will be filled with the word closest/under the cursor (this is not 
done for the replace dialog.) This is all done in the macros so you now have 
much greater flexibility, if you want to customize these function's behavior.

>>Improved user interface for the Compare/Merge Files function.

>>File open dialogs have been redesigned, they now include File Types combo 
boxes. The list of file types can be found in the config file under the 
section [File Types] if you want to add,remove or edit the types. 

>>Popup menu support added. Right click now brings up a popup menu. This menu is 
created in menu.rm and can be customized. See CreatePopupMenu() in that file. Let 
us know what items you would like on this menu.

>>New error handler for RimStar macro compiler: MacroErrorHandler
 This error handler will load (unloading the previous version, if any) the 
compiled macro file into the editor if the compile completes without errors. 
This will save you a lot of keystrokes when you are developing macros and want 
to test them. If you are updating from a prior version: Change the Error 
handler macro function for the .RM file extension from DefaultErrorHandler to
MacroErrorHandler via the File Extension Association Dialog (Options.Assoc 
menu).

>>New Configuration Notebook Dialog
 Many new settings have been added. Let us know how you like it.
All the configurable variables for smart indenting can now be set in the 
editor's configuration file: rse_cfg.ini in the section [C Indenting]. This 
section covers smart indenting for C/C++ and Java. You no longer have to edit 
the macro files to change the brace style or other settings. Most of these 
settings can be changed from the Language page in new configuration notebook 
dialog.


Bug Fixes
 Many bugs that you have reported have been fixed. A long-term bug in the 
smart indenting code has been fixed: code in switch statements now correctly 
indents. Problems with the Open for Editing dialog changing the current 
working directory have been fixed.

______________________________________________________________________________ 
What's new, changed, etc. in version 4.0.008

C++ Class Generator (Win32 version only)
A very cool C++ class generator utility is now available. This utility was 
written and contributed by RimStar user Ian Lintault and has been integrated 
into the editor. A new menu pulldown 'Tools' has been added to invoke this 
utiltity, try it out. Thanks Ian!

For C/C++/Java files a new key binding has been added that will reindent a 
selected section of code. The function is _c_indent_lines() and is bound to 
Ctrl+Alt+Tab. If no selection is active you are prompted for the number of 
lines to reindent. 

International Keyboard Note: If you are using a physical keyboard that does 
does not match the country settings specified for the operating system, you 
may find that the editor does not bind keys as you would expect. You can 
override the editor's selection of keyboard tables using the KbdBindCountry() 
function. This must be called before any key bindings 
(KbdBind/KbdBindTypables) call is made. The easiest way to ensure this is the 
case is to call KbdBindCountry in the _init() function in the keyboard.rm 
file. KbdBindCountry requires 2 integer arguments, the 1st is the country code 
and the 2nd is the code page. The country code is the international dialing 
prefix for the country. The code page is usually set to 437 for most countries 
and code page 850 is also available for all countries. For OS/2 you can 
determine the default code page that OS/2 is using by looking in your 
config.sys file for the CODEPAGE statement, use the 1st number if there is 
more than one. For Windows try 437 or 850. Calling KbdBindCountry(0, 0) will 
give you the default United States - 437 key tables.

Find Matching Delimiter on European keyboards Most European keyboards place 
the '{' and '}' keys on the top row (the numbers keys row) of the keyboard and 
require AltGr to be used to access the key, if your keyboard is like this then 
the  FindMatchingDelimiter function is bound to Shift+Alt+{ and Shift+AltGr+{ 
and Shift+Alt+} and Shift+AltGr+}.

OS/2 Note: There have been some problems when modifying the File Extension 
Associations when running the editor for the very first time. If you get 
Memory Access Violations when trying to save or cancel from this dialog: close 
the editor using the OS/2 "Window List" and restart the editor; you should no 
longer have any problems.

Bug fix: Search/Replace Files - would not jump if your regular expression 
syntax was set for "Brief".

Bug fix: The editor would not save state restore information on exit if the 
editor was invoked with files on the command line.

Bug fix: (Win32) When compiling, the line/column display on status line would 
change to show the output buffer's line/column even though the output buffer 
was not active.

Bug fix: (OS/2) turning the toolbar off did not update the window sizes 
properly.
______________________________________________________________________________ 
What's new, changed, etc. in version 4.0.007

Java syntax coloring and smart indenting is now available. Supports .java and 
.jav file extensions, if you need other extensions let us know.
________

The OS/2 Version now supports drag and drop of files onto the editor (the 
Windows version already has this capability.)
________

Search/Replace Files on Disk
Search/Replace files on disk allows you to search (or replace) files on disk 
This feature can be invoked from the Search.Search Files... menu. This 
function is located in the macro source file SRCHFILE.RM. When you invoke this 
function, if text is selected (but not a multi-line selection) the selected 
text will be used in the "Search For:" edit field of the dialog.

When searching, a window/buffer is created to display the results of the 
search. When the search completes you can jump to a match by making the 
"Search Results" buffer active and use the "Next/Prev Error" (ErrNextError() / 
ErrPrevError()) or double-click on a line or use the key bound to 
ErrJumpToError() (Alt+F9 for many keymaps.)

When replacing, you will be prompted for the action to take when a match is 
found in a file. Your options are 'Y' to perform a single replace of the 
highlighted match, 'N' to skip this match, 'F' to perform the replace for the 
rest of this file, 'A' to perform the replace in this and all subsequent 
files, Escape will cancel any further search (however it does not undo any 
changes made up to this point).

The files acted on by this function are not kept loaded in the editor (unless 
they were already loaded.) Any changes made using replace will be saved to 
disk. No syntax coloring will be displayed for the files loaded when you are
replacing.

A key binding has been added for each supplied keyboard map, if you are 
updating from an existing version of the editor you will have to modify your 
keyboard.rm macro file to add this new key binding. The following is a list of 
the file(line number) and the new binding for the SrchFiles macro function. 
You can of course bind this function to any key sequence you choose:

macros\borlide.rm(353) :  KbdBind("Ctrl+Q+Ctrl+G", "SrchFiles");
macros\brief.rm(106) :    KbdBind("Alt+F",         "SrchFiles");
macros\cua.rm(241) :      KbdBind("Ctrl+F",        "SrchFiles");
macros\cuabrief.rm(107) : KbdBind("Alt+F",         "SrchFiles");
macros\epm.rm(323) :      KbdBind("Shift+Ctrl+F",  "SrchFiles");
macros\epsilon.rm(226) :  KbdBind("Ctrl+X+A",      "SrchFiles");
macros\multied.rm(219) :  KbdBind("Ctrl+F5",       "SrchFiles");
macros\slick.rm(219) :    KbdBind("Shift+Ctrl+S",  "SrchFiles");
________

New configuration file format - the OS/2 version now uses a text based .ini file 
for rse_cfg.ini, your existing configuration file will be converted 
automatically for you the 1st time you start the editor, the original file 
will be renamed to .old. File extension association information is now saved 
in the file os2assoc.cfg - this is a binary file format and should not be 
edited. The 'File Extension Association' dialog now lets you create groups of
file extension associations.
________

Open Files dialog - The 'No translate' checkbox is no longer sticky, it will be 
turned off when you exit the dialog.

______________________________________________________________________________
What's new, changed, etc. in version 4.0.001

OS/2 NOTE: If your screen is updating much more slowly than it used to, make 
sure you are using a bitmap font not an Adobe outline font. For Courier the 
bitmap sizes are 8, 10, 12, the odd point sizes will select an outline font. 
The 1st time you run the editor it may select an 8 point Courier outline font 
so be sure to press OK on the Font Dialog even if it looks OK. Once you have 
selected a font from the dialog all the font metrics are saved in the editor's 
configuration file so you'll get the right font from there on.

The Macro compiler V2.0 is now fully 32 bit, ie. int is now 32 bits not 16. 
The code generation has been enhanced, giving you up to 33% faster macro 
execution speeds and smaller .obm files.

Macro compiler bug when taking sizeof an array has been fixed, sizeof should 
always compute the correct value.

The editor's search engine has been rewritten from scratch. It now supports 
patterns that match multiple lines (ie. you can use \n in your patterns.) The 
word left/right macros for C/C++ now work as they should since the search 
engine now supports Brief's regular expression settings of 2 and -2 for 
matching the pattern in the same direction as you are searching, ie. if you 
are searching backward, the search engine can search the pattern in reverse 
(right to left) instead of backing up and then trying to match the pattern 
from left to right. This is a useful feature that only Brief had until now. A 
bit esoteric but it comes in handy sometimes. See the notes below for version 
x.1.31 regarding changes to the precedence of regular expression operators.

A file compare/merge macro is now available - compmerg.rm. It can be started 
from the File pulldown menu. For now see the macro file for documentation on 
using it. Once you have a compare/merge going you can press F1 for key help.

Bug fix - reloading files changed while out of the editor could sometimes 
loose your position in the current buffer, this has been fixed.

OS/2 Visual Age - Workframe 3.0 Integration
 Here is how to integrate RimStar into WF/2 V3:
1) Open the Visual Age folder
2) Double-click on the Visual Age C++ Project Template
3) From the Project menu select View.Tools setup or press Ctrl+T
4) Expand the Edit action
5) Right-click on the "Editor" Icon
6) Select the Add option from the pop-up menu
   this will bring up the Add action notebook. Change only the settings
   described below.
7) On the General page, change the Name to RimStar and Program to the
   fully qualified path of the editor, ie. d:\rse\r.exe
   Session: Default, Action applies to: check both Files and Project
   leave the access method alone.
7a) No changes are needed on the Types page, should be Source types: "Editable"
7b) The Support page, Command: view rseman Topic: <blank, ie. no topic>
   leave the rest of the settings on this page alone, Action support DLL
   should be: IFWOPT and the entry point: EDIT, Priority: 70
7c) The menus page, check all the check boxes and pick a Ctrl+Shift key
7d) Select OK, and return to the Tools settings actions tree. RimStar should 
   now be in the Edit tree.
8) Right-click on RimStar and select Project Options(change) from the pop-up 
   menu. This will bring up the "RimStar:Project scope - Edit Options" dialog.
9) Parameters: -1 -WF2
9a) Check Send errors to editor, don't check Prompt.
9b) Select OK
10) Right-click again on the RimStar icon in the actions tree and select File 
   Options(change). This will bring up the "RimStar:File scope - Edit Options" 
   dialog.
11) Parameters: -1 -WF2 %a %z
11a) Check Send errors to editor, don't check Prompt.
11b) Select OK
12) Close the Tools settings window. You now can create templates using this 
   project template and RimStar will be ready to go.
______________________________________________________________________________
What's new, changed, etc. in version x.1.32

Windows version: Improved Windows 95 support. Dialog boxes should now have the 
correct background color.

How to set up File Manager or Explorer(Win95) to invoke the editor on files you 
select.

File Manager:
 Select File.Associate from the menu bar.
 File Type: whatever description you want
 Action: Open
 Command: c:\rse\rw.exe -nsr "%1"
 Uses DDE: check this box
 DDE Message: BufEditFile "%1"
 DDE Message Application not running: BufEditFile "%1"
 Application: RimStar
 Topic: System

For Windows 95 Explorer:
 Select View.Options from the menu
 Select the File Types property page from the Options dialog
 Click on the New Type... pushbutton
 Description of type: whatever description you want
 Associated extension: enter the extension
 Click on the New... pushbutton to add an action
 In the New Action dialog:
   Action: Open in RimStar
   Application used to perform action: c:\rse\rw.exe -nsr "%1"
	Check Use DDE
   DDE Message: BufEditFile "%1"
   Application: RimStar
   DDE Message Application not running: BufEditFile "%1"
   Topic: System

Note: Case is significant for the DDE Message, type the exact text as shown. 
The "%1" is required in the command string to correctly pass filenames with 
spaces to the editor if the editor is not running. If you want the file loaded 
into a separate copy of the editor don't use DDE. The -nsr option tells the 
editor to not use its state restore facility.

All versions:
 Bug fix: Prior versions did not handle long file names with spaces correctly 
when using the -1 command line switch (load files into running copy of the 
editor), this has been corrected.

OS/2 version:
 The font selection dialog now uses the OS/2 standard Font dialog. Only fixed 
(non-proportional) fonts can be selected, but you can now select outline fonts 
(like Courier), note that outline fonts will display a bit more slowly than 
image(bitmap) fonts, bitmap versions of the font will be used if available in 
the point size you select. Your Font selection is now saved to the 
configuration file automatically.
______________________________________________________________________________ 
What's new, changed, etc. in version x.1.31

 We now have the manual on-line.

 Bug fix: SearchSel() macro function - search for selection has been fixed.

 International keyboard support has been added internally in the editor. 
Non-US users should find that a Non-US keyboard now works correctly. If 
you still have trouble please let us know.

(Windows Only) The rse_cfg.ini file now supports an alternative to using the 
RSE_FLAGS, RSE_PATH, RSE_INF environment variables. See the online manual 
topic"Rimstar Environment Variables" for further information.

 The precedence of the regular expression operators has been changed.
Here is a table showing the new and old precedence of operators, from highest 
to lowest precedence. Basically the '|' operator's precedence was lowered.

   For Brief		      For EGREP
  Old	    New          Old     New
  { }	    { }          ( )     ( )
 | @ +    @ +         | * +   * + ?
 concat  concat    	 concat  concat
  		     |		              |

For EGREP syntax we have added the '?' operator, which matches zero or one 
occurence of the preceding expression.

Some examples of what this precedence change means using Brief syntax:

Expression 	 Old rules      New rules
__________   _________      _________
  ab|cd      a{b|c}d        {ab}|{cd}
  a|b@c      {a|b}@c        a|{b@c}
  a@b|c      {a@}{b|c}      {{a@}b}|c
  ab+|cde+   a{{b+}|c}d{e+} {a{b+}}|{cd{e+}}

Same examples using EGREP syntax:

Expression 	 Old rules      New rules
__________   _________      _________
  ab|cd      a(b|c)d        (ab)|(cd)
  a|b*c      (a|b)*c        a|(b*c)
  a*b|c      (a*)(b|c)      ((a*)b)|c
  ab+|cde+   a((b+)|c)d(e+) (a(b+))|(cd(e+))
______________________________________________________________________________
What's new, changed, etc. in version 2.1.30a (OS/2)

 If you have downloaded this as an update and are using the source browser on 
Visual Age 'C' code you need to make the following changes to CUSTOMIZ.H for 
the browser to compile the Visual Age header files:

  Change (line 29 approx.)
     #define __IBMC__
  to
     #define __IBMC__ 300
  Then add this line.
     #define _M_I386 1

______________________________________________________________________________
What's new, changed, etc. in version x.1.30

Printing now supports page and line numbering.

 A new error handler has been added for IBM Visual Age C++. The current 
release of the compiler has a bug which causes the compiler to give the wrong 
column position of the error. This error handler is set up to ignore the 
column provided by the compiler. The error handler function is 
VisualAgeErrorHandler. If you still want to position to the column (the 
compiler does not always get it wrong!) use the IBMCErrorHandler.

Bug fix:
 -@ goto line/column command line option was broken and has now been fixed.

Bug fix:
 Multi-key bindings, like "Ctrl+K+V" in a buffer or window specific 
keyboard prevented the current (global) keyboard from being searched for other 
multi-key bindings that have the same key sequence prefix, eg. if "Ctrl+K+V" 
was defined in a buffer keyboard, and "Ctrl+K+S" in the global keyboard, 
Ctrl+K+S was no longer recognized when that buffer was current.

Bug fix:
 BufCutToScap with a zero length selection left the selection active,
the selection is now removed.

Fix: Protection faults in printer drivers will no longer cause the editor to
terminate.
______________________________________________________________________________
What's new, changed, etc. in version x.1.29

 The behavior of the Close menu item in the Window and child system menu has 
been modified to work differently based on the setting of the Open files in 
same window option in the Options - Global Settings dialog.

 If Open files in same window is checked:

 As you load files the current window is used to display the file. With this 
setting the Close window menu item just closes the window, not the buffer 
associated with the window.

 If Open files in same window is unchecked:

 For each file that is opened a window is created for that file(buffer). The 
Close window menu item will close both the window and the buffer with the 
following exceptions: 1) if this is the only window - the buffer will be 
closed but the window will not [the editor requires at least one child window 
at all times] 2) if there is another window showing the same buffer then the 
window will be closed but the buffer will remain open.
______________________________________________________________________________
What's new, changed, etc. in version x.1.28

Much faster file writes, especially when writing files to a network drive.

New feature: inteligent pasting for C/C++, when you paste lines they are 
automaticly indented to the proper nesting level. Note: the method currently 
used to enable this feature is not compatible with on-the-fly keyboard 
switching from the Keys pulldown menu.

______________________________________________________________________________
What's new, changed, etc. in version 2.1.27a

OS/2 Version: DLL for Watcom IDE to use RimStar instead of EPM.
For OS/2, change the line in %WATCOM%\BINP\IDEX.CFG from:
  Editor "epmlink" DLL
to:
  Editor "rselink" DLL
Copy RSELINK.DLL to the Watcom BINP\DLL directory.

______________________________________________________________________________
RimStar's BBS

We encourage users to use the BBS to download updates and request technical 
support, and please do upload any macros or useful programs that you'd like to 
share with other users.

BBS# (603)778-4644 (available 24hrs up to 14.4kbps) 8 bits No parity 1 stop 
bit. Once you log on to the BBS we will have to upgrade your privileges before 
you will be able to download updates of the editor. Send a PRIVATE message to 
the SysOp in the COMMENTS message area, please DO NOT request privilege 
upgrades in the SUPPORT area, include your serial number in the message . You 
may be able to get immediate upgrade by "Yelling" for the SysOp after you log 
in. If no one is available you'll have to call back later (leave a message 
requesting upgraded privileges and include your serial number) your privileges 
will usually be upgraded by the next day. All other features of the BBS are 
available to you immediately, including the Support message area.

We use the BBS to keep our users up-to-date on the latest version of the 
editor. There is usually a new version available about every 2 weeks, 
sometimes more frequently. Things move fast at RimStar! Each update has some 
new feature(s) or bug fixes.

NOTE: We are no longer providing technical support in the OS2AVEN forum on 
Compuserve, the best way to get technical support is to call us or send internet
e-mail. We plan on adding, as well, a technical support page to our web-site in
the future.
______________________________________________________________________________

If you have any problems, questions, suggestions do not hesitate to call us
or send us e-mail:

RimStar Technology, Inc.
91 Halls Mill Road
Newfields, NH 03856 USA

Telephone:  (603) 778-2500
FAX:        (603) 778-2408
Our BBS:		(603) 778-4644 (up to 14.4bps 8 bits No parity 1 stop bit)
e-mail:     brians@rimstar.com
WWW:        http://www.rimstar.com
FTP:			ftp://ftp.rimstar.com/pub/rimstar

Please do not send mail to our Compuserve address, we don't get onto 
Compuserve much these days.


Thanks again,

Brian Smith
Founder

______________________________________________________________________________
RimStar and SyntaColor are trademarks of RimStar Technology, Inc.
Windows and Windows/NT are trademarks of Microsoft Corporation.
OS/2 is a registered trademark of IBM Corp.
Java is a trademark of Sun Microsystems, Inc.
