/*
** Macro header: event.h
**
** Copyright (C) 1993, 1994 Brian L. Smith
** Copyright (C) 1993, 1994 RimStar Technology, Inc.
** All rights reserved internationally.
** Unlicensed use is a violation of applicable laws.
**
** This source code is provided to licensed users of RimStar's products
** for the purpose of allowing the user to customize and/or enhance RimStar's
** products. The source code remains the property of the copyright holders
** with all rights reserved internationally.
** Any modifications to the source code are considered derivative works and
** all rights thereto are reserved to the copyright holders except
** that the purchaser may use the derivitive work in the same manner
** as permitted by the license governing the unmodified product.
** Distribution in any manner of any part of the original source code,
** whether in source or object form, is expressly prohibited without the
** express written permission of the copyright holders.
**
*/


#ifndef EVENT_H_INCL
#define EVENT_H_INCL 1

/* Event flags */
#define EVENT_NORMAL		0x0000
#define EVENT_ONLY		0x0001
#define EVENT_FIRST		0x0002
#define EVENT_LAST		0x0004
#define EVENT_PERMANENT	0x0008
#define EVENT_DISABLED	0x8000

/* Pointer to this structure passed with EVENT_FONT_CHANGED */
struct _sys_fontsize {	/* sizes in pixels */
	SHORT	cxChar;	/* width of a character  */
	SHORT	cyChar;	/* height of a character */
	SHORT	cyDesc;	/* height of descender	*/
};

#define EVENT_ABOUT_TO_READ			0x0001
#define EVENT_ABOUT_TO_WRITE			0x0002
#define EVENT_BUFFER_CREATED			0x0003
#define EVENT_BUFFER_CHANGE			0x0004
#define EVENT_BUFFER_CURRENT			0x0005
#define EVENT_BUFFER_DELETE			0x0006
#define EVENT_BUFFER_RELOADED			0x0007
#define EVENT_BUFFER_SAVED				0x0008
#define EVENT_BUFFER_ZAPPED			0x0009
#define EVENT_CHAR_INSERTED			0x000a
#define EVENT_EDIT_READ_ONLY			0x000b
#define EVENT_FILE_READ					0x000c
#define EVENT_FILENAME_CHANGED		0x000d
#define EVENT_FONT_CHANGED				0x000e
#define EVENT_INSERT_CHAR				0x000f
#define EVENT_INSERT_NL					0x0010
#define EVENT_KEY_PRESSED				0x0011
#define EVENT_LINES_DELETED			0x0012
#define EVENT_LINES_INSERTED			0x0013
#define EVENT_MOUSE						0x0014
#define EVENT_NEW_FILE					0x0015
#define EVENT_NL_INSERTED				0x0016
#define EVENT_NO_MEMORY					0x0017
#define EVENT_ONE_SECOND				0x0018
#define EVENT_SHUTDOWN					0x0019
#define EVENT_UNASSIGNED_KEY			0x001a
#define EVENT_WINDOW_CHANGE			0x001b
#define EVENT_WINDOW_CURRENT			0x001c
#ifdef WINDOWS
#define EVENT_ONIDLE						0x001d
#endif
#define EVENT_PROMPT_KEY				0x001f
#define EVENT_PROMPT_CHANGE			0x0020
#define EVENT_FILE_CREATE				0x0021
#define EVENT_MENU_INIT					0x0022  /* see menu.rm */
#define EVENT_MENU_COMMAND				0x0023  /* see menu.rm */
#define EVENT_CHAR_DELETED				0x0024
#define EVENT_LINE_CHANGED				0x0025
#define EVENT_SYNTACOLOR_STATUS		0x0026
#define EVENT_EXECASSOC					0x0027
#define EVENT_TOOLBAR_COMMAND			0x0028  /* see menu.rm */
#define EVENT_EXECASSOC_DONE			0x0029
#define EVENT_STARTUP0    				0x002A
#define EVENT_STARTUP1    				0x002B
#define EVENT_STARTUP2    				0x002C
#define EVENT_STARTUP3    				0x002D
#define EVENT_STARTUP4    				0x002E
#define EVENT_LANGSETTINGS_CHANGED	0x002F
#define EVENT_USER						0x8000  /* 1st user defined event */

#endif // EVENT_H_INCL


/*
** End header: event.h
*/
