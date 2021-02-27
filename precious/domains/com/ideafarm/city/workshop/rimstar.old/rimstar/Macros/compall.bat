@ECHO OFF
ECHO ** Compiling the editor's macro files for Windows **
c -DWINDOWS -Q asm.rm
c -DWINDOWS -Q bookmark.rm
c -DWINDOWS -Q buffer.rm
c -DWINDOWS -Q c.rm
c -DWINDOWS -Q c_smart.rm
c -DWINDOWS -Q clipper.rm
c -DWINDOWS -Q cobol.rm
c -DWINDOWS -Q compmerg.rm
c -DWINDOWS -Q cppgen.rm
c -DWINDOWS -Q easel.rm
c -DWINDOWS -Q hexedit.rm
c -DWINDOWS -Q isearch.rm
c -DWINDOWS -Q java.rm
c -DWINDOWS -Q jmperr.rm
c -DWINDOWS -Q kbd.rm
c -DWINDOWS -Q kbdcua.rm
c -DWINDOWS -Q lang.rm
c -DWINDOWS -Q menu.rm
c -DWINDOWS -Q misc.rm
c -DWINDOWS -Q mouse.rm
c -DWINDOWS -Q pascal.rm
c -DWINDOWS -Q pl1.rm
c -DWINDOWS -Q pvcs.rm
c -DWINDOWS -Q rexx.rm
c -DWINDOWS -Q search.rm
c -DWINDOWS -Q slide.rm
c -DWINDOWS -Q srchfile.rm
c -DWINDOWS -Q startup.rm
c -DWINDOWS -Q tlib.rm
c -DWINDOWS -Q wp.rm
ECHO ** Compiling the keyboard mapping macro files for Windows **
c -DWINDOWS -Q borlide.rm
c -DWINDOWS -Q brief.rm
c -DWINDOWS -Q cua.rm
c -DWINDOWS -Q cuabrief.rm
c -DWINDOWS -Q epm.rm
c -DWINDOWS -Q epsilon.rm
c -DWINDOWS -Q multied.rm
c -DWINDOWS -Q pwb.rm
c -DWINDOWS -Q slick.rm
REM Next line compiles the keyboard mapping the editor will use when it starts.
REM If you do not have a keyboard.rm file copy one of the above keyboard mapping
REM macro files to keyboard.rm
c -DWINDOWS -Q keyboard.rm
ECHO ** Creating a browser file for each macro file **
sb -DWINDOWS *.rm
ECHO ** Combining the browser files into a single database **
sbd sbd -a *._sb
ECHO ** Removing the individual browser files **
DEL *._sb
ECHO ** All done. **
