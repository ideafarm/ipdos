/*
** mouse.h
**
**
*/

#ifndef MOUSE_H_INCLUDED
#define MOUSE_H_INCLUDED


typedef struct _mou_info MOUSEINFO, *PMOUSEINFO;
struct _mou_info {
	USHORT	usEvent;			// type of mouse event
	USHORT	usButtonState;	// state of mouse buttons at time of event
	USHORT	usShiftState;	// state of shift keys at time of event
	USHORT	x, y;			 	// position of mouse in window in pixels
};

/*
** Button state (usButtonState member)
**		bit is set if button is down
*/
#define MOU_BUTTON1			0x0001
#define MOU_BUTTON2			0x0002
#define MOU_BUTTON3			0x0004

/*
** State of shift keys at time of msg
**		bit is set if shift key is down
*/
#define CTRL_DOWN				0x0001
#define SHIFT_DOWN			0x0004
#define ALT_DOWN				0x0010

/*
** Mouse events (usEvent member of MOUSEINFO)
*/
#if WINDOWS

#define WM_MOUSEMOVE			0x0200
#define WM_BUTTON1DOWN		0x0201
#define WM_BUTTON1UP			0x0202
#define WM_BUTTON1DBLCLK	0x0203
#define WM_BUTTON2DOWN		0x0204
#define WM_BUTTON2UP			0x0205
#define WM_BUTTON2DBLCLK	0x0206
#define WM_BUTTON3DOWN		0x0207
#define WM_BUTTON3UP			0x0208
#define WM_BUTTON3DBLCLK	0x0209

#else	// OS/2

#define WM_MOUSEMOVE			0x0070
#define WM_BUTTON1DOWN		0x0071
#define WM_BUTTON1UP			0x0072
#define WM_BUTTON1DBLCLK	0x0073
#define WM_BUTTON2DOWN		0x0074
#define WM_BUTTON2UP			0x0075
#define WM_BUTTON2DBLCLK	0x0076
#define WM_BUTTON3DOWN		0x0077
#define WM_BUTTON3UP			0x0078
#define WM_BUTTON3DBLCLK	0x0079

#endif // OS/2 section

// none of these are defined for Win32
// the numbers are above WM_USER though.
#define WM_BUTTON1CLICK		0x0413
#define WM_BUTTON2CLICK		0x0416
#define WM_BUTTON3CLICK		0x0419
#define WM_BEGINDRAG			0x0420
#define WM_ENDDRAG			0x0421
#define WM_SINGLESELECT		0x0422
#define WM_OPEN				0x0423
#define WM_CONTEXTMENU		0x0424
#define WM_BEGINSELECT		0x0427
#define WM_ENDSELECT			0x0428

#endif	// MOUSE_H_INCLUDED


/*
** End header: mouse.h
*/
