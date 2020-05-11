/* 
** Macro header: menu.h
**
** Copyright (C) 1993-1995 Brian L. Smith
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

#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#define MIT_END					0xffff
#define MIA_SEPARATOR			0x0004
#define MIA_FRAMED				0x1000
#define MIA_CHECKED				0x2000
#define MIA_DISABLED				0x4000
#define MIA_GRAYED				MIA_DISABLED
#define MIA_HILITED				0x8000

/****** Menu command IDs *****/

/* Action Bar Entries */
#define IDM_FILE						1100
#define IDM_EDIT						1200
#define IDM_SEARCH					1300
#define IDM_BROWSE					1400
#define IDM_PROJECT					1500
#define IDM_BUFFER					1600
#define IDM_WINDOW					1700
#define IDM_KEYS						1800
#define IDM_TOOLS						1900
#define IDM_OPTIONS					2000
#define IDM_HELP						2100
#define IDM_FIRSTACTION				IDM_FILE
#define IDM_LASTACTION				IDM_HELP

	/* File pulldown */
#define IDM_NEW						1101
#define IDM_OPEN						1102
#define IDM_CLOSE						1103
#define IDM_SAVE						1104
#define IDM_SAVEAS					1105
#define IDM_SAVEALL					1106
#define IDM_PRINTER_SETUP			1107
#define IDM_PRINT						1108
#define IDM_LOAD_MACROFILE			1109
#define IDM_SAVEEXIT					1110
#define IDM_EXIT						1111
#define IDM_FILE_LAST				IDM_EXIT
#define IDM_START_FILE_LIST		7000

	/* Edit pulldown */
#define IDM_UNDO						1201
#define IDM_REDO						1202
#define IDM_CUT						1203
#define IDM_COPY						1204
#define IDM_PASTE						1205
#define IDM_DELETE					1206
#define IDM_CUTAPPEND				1207
#define IDM_COPYAPPEND				1208
#define IDM_INDENT					1209
#define IDM_OUTDENT					1210
#define IDM_UPPERCASE				1211
#define IDM_LOWERCASE				1212
#define IDM_INSERTFILE				1213
#define IDM_IMPORTCLIP				1214
#define IDM_EXPORTCLIP				1215
#define IDM_EDIT_LAST				IDM_EXPORTCLIP

	/* Search pulldown */
#define IDM_ISEARCH					1301
#define IDM_SEARCH_FILES			1302
#define IDM_SEARCH_FORWARD			1303
#define IDM_SEARCH_BACKWARD		1304
#define IDM_SEARCH_AGAIN			1305
#define IDM_REPLACE_FORWARD		1306
#define IDM_REPLACE_BACKWARD		1307
#define IDM_REPLACE_AGAIN			1308
#define IDM_SEARCH_NEXTERR			1309
#define IDM_SEARCH_PREVERR			1310
#define IDM_SEARCH_LAST				IDM_SEARCH_PREVERR

	/* Browse pulldown */
#define IDM_SB_GOTODEF				1401
#define IDM_SB_SYMBOL				1402
#define IDM_SB_DEF					1403
#define IDM_SB_REF					1404
#define IDM_SB_MOD					1405
#define IDM_SB_CLASSES				1406
#define IDM_SB_LOAD					1407
#define IDM_SB_CLEAR					1408
#define IDM_SB_NEXTDEF				1409
#define IDM_SB_PREVDEF				1410
#define IDM_SB_NEXT					1411
#define IDM_SB_PREV					1412
#define IDM_SB_LAST					IDM_SB_PREV

	/* Project pulldown */
#define IDM_PJT_SETTINGS			1501
#define IDM_PJT_NEW					1502
#define IDM_PJT_OPEN					1503
#define IDM_PJT_CLOSE				1504
#define IDM_PJT_DBUPDATE			1505
#define IDM_PJT_DBREBUILD			1506
#define IDM_PJT_BUILD				1507
#define IDM_PJT_BUILDALL			1508
#define IDM_PJT_DBGBUILD			1509
#define IDM_PJT_DBGBUILDALL		1510
#define IDM_PJT_RUN					1511
#define IDM_PJT_DEBUG				1512
#define IDM_PJT_LAST					IDM_PJT_DEBUG
#define IDM_START_PROJECT_LIST	6000

	/* Buffer pulldown */
#define IDM_BUFFER_NEXT				1601
#define IDM_BUFFER_PREV				1602
#define IDM_BUFFER_EXECUTE	  		1603
#define IDM_BUFFER_CLOSE			1604
#define IDM_BUFFER_LIST				1605
#define IDM_BUFFER_LAST				IDM_BUFFER_LIST
#define IDM_START_BUFFER_LIST		8000

	/* Window pulldown */
#define IDM_WINDOW_CASCADE			1701
#define IDM_WINDOW_TILE_WIDE		1702
#define IDM_WINDOW_TILE_TALL		1703
#define IDM_WINDOW_KEEP_CASCADED	1704
#define IDM_WINDOW_KEEP_TILED		1705
#define IDM_WINDOW_NEXT				1706
#define IDM_WINDOW_PREV				1707
#define IDM_WINDOW_CREATE		 	1708
#define IDM_WINDOW_SPLIT_HORIZ	1709
#define IDM_WINDOW_SPLIT_VERT 	1710
#define IDM_WINDOW_ONEWIN		 	1711
#define IDM_WINDOW_DELETE		 	1712
#define IDM_WINDOW_LAST				IDM_WINDOW_DELETE
#define IDM_START_WINDOW_LIST		9000

	/* Keys Pulldown */
#define IDM_KEYS_PLAY         	1801
#define IDM_KEYS_RECORD       	1802
#define IDM_KEYS_SAVEKBDMACRO 	1803
#define IDM_KEYS_LOADKBDMACRO 	1804
#define IDM_KEYS_LAST			 	IDM_KEYS_LOADKBDMACRO

	/* Tools pulldown */
#define IDM_DIALOGEDIT				1901
#define IDM_ICONEDIT					1902
#ifdef WINDOWS
#define IDM_TOOLS_CPPCLASS			1903
#define IDM_TOOLS_LAST				IDM_TOOLS_CPPCLASS
#else
#define IDM_TOOLS_LAST				IDM_ICONEDIT
#endif

	/* Options pulldown */
#define IDM_CONFIG					2001
#define IDM_CONFIGFONT				2002
#define IDM_CONFIGTEXTFONT			2003
#define IDM_CONFIGSTATUSFONT		2004
#define IDM_CONFIGTREEFONT			2005
#define IDM_CONFIGCOLORS			2006
#define IDM_CONFIGCURSOR			2007
#define IDM_CONFIGASSOC				2008
#define IDM_OPTIONS_LAST			IDM_CONFIGASSOC

	/* Help pulldown */
#define IDM_HELP_CONTENTS			2101
#define IDM_HELP_SEARCH				2102
#define IDM_HELP_FOR_HELP			2103
#define IDM_HELP_MANUAL				2104
#define IDM_HELP_INDEX				2105
#define IDM_HELP_KEYS				2106
#define IDM_ABOUT						2107
#define IDM_HELP_LAST				IDM_ABOUT


#endif	// MENU_H_INCLUDED

/*
** End header: menu.h
*/
