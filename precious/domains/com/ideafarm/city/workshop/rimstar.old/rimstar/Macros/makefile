# nmake file to rebuild all supplied RimStar macro source files
# For Windows & Windows/NT Version

.SUFFIXES : .rm .obm

.rm.obm:
	C  -Q -DWINDOWS $(*).rm

MACRO_OBMS=	\
				asm.obm\
				bookmark.obm\
				borlide.obm\
				brief.obm\
				buffer.obm\
				c.obm\
				c_smart.obm\
				clipper.obm\
				cobol.obm\
				compmerg.obm\
				cppgen.obm\
				cua.obm\
				cuabrief.obm\
				debug.obm\
				easel.obm\
				epm.obm\
				epsilon.obm\
				hexedit.obm\
				isearch.obm\
				java.obm\
				jmperr.obm\
				kbd.obm\
				kbdcua.obm\
				keyboard.obm\
				lang.obm\
				menu.obm\
				misc.obm\
				mouse.obm\
				multied.obm\
				pascal.obm\
				pl1.obm\
				project.obm\
				pvcs.obm\
				pwb.obm\
				rexx.obm\
				search.obm\
				slick.obm\
				slide.obm\
				srchfile.obm\
				startup.obm\
				tlib.obm\
				wp.obm

all: macros sbd

macros: $(MACRO_OBMS)

sbd:
!IFNDEF NOSB
	-SB -DWINDOWS *.rm
	SBD sbd -z -a *._sb
	DEL *._sb
!ENDIF

# dependencies

asm.obm:			asm.rm			macro.h lang.h
bookmark.obm:	bookmark.rm		macro.h
buffer.obm:		buffer.rm		macro.h event.h
c.obm:			c.rm				macro.h lang.h template.h
c_smart.obm:	c_smart.rm		macro.h
clipper.obm:	clipper.rm		macro.h lang.h template.h
cobol.obm:		cobol.rm			macro.h lang.h template.h
compmerg.obm:	compmerg.rm		macro.h
cppgen.obm:		cppgen.rm		macro.h
debug.obm:		debug.rm			macro.h
easel.obm:		easel.rm			macro.h lang.h template.h
hexedit.obm:	hexedit.rm		macro.h
isearch.obm:	isearch.rm		macro.h event.h
java.obm:		java.rm			macro.h lang.h javatmpl.h
jmperr.obm:		jmperr.rm		macro.h
kbd.obm:			kbd.rm			macro.h
kbdcua.obm:		kbdcua.rm		macro.h
lang.obm:		lang.rm			macro.h event.h lang.h
menu.obm:		menu.rm			macro.h event.h menu.h
misc.obm:		slide.rm			macro.h
mouse.obm:		mouse.rm			macro.h event.h mouse.h
pascal.obm:		pascal.rm		macro.h lang.h template.h
pl1.obm:			pl1.rm			macro.h lang.h template.h
project.obm:	project.rm		macro.h
pvcs.obm:		pvcs.rm			macro.h event.h
rexx.obm:		rexx.rm			macro.h lang.h template.h
search.obm:		search.rm		macro.h
slide.obm:		slide.rm			macro.h
srchfile.obm:	srchfile.rm		macro.h
startup.obm:	startup.rm		macro.h event.h
tlib.obm:		tlib.rm			macro.h event.h
wp.obm:			wp.rm				macro.h event.h lang.h

# Keyboard maps
brief.obm:		brief.rm			macro.h
borlide.obm:	borlide.rm		macro.h
cua.obm:			cua.rm			macro.h
cuabrief.obm:	cuabrief.rm		macro.h
epm.obm:			epm.rm			macro.h
epsilon.obm:	epsilon.rm		macro.h
multied.obm:	multied.rm		macro.h
pwb.obm:			pwb.rm			macro.h
slick.obm:		slick.rm			macro.h

#default keyboard
keyboard.obm:	keyboard.rm		macro.h

# End make file to build editor macros
