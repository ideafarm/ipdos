/*
** Macro header: lang.h
**
** Copyright (C) 1993-1996 Brian L. Smith
** All rights reserved internationally.
**	Last revision: April 7, 1996
*/

#ifndef LANG_H_INCLUDED
 #define LANG_H_INCLUDED


/* Used to define abbreviations & expansions for template editing */
typedef struct template_t	TEMPLATE, *PTEMPLATE;
struct template_t {
	char		*abbrev;			/* what is tested to see if a match exists */
	char		*expansion;		/* what to expand to */
	short		min;				/* need at least this many chars for this template */
	unsigned	flags;			/* special handling flags */
};

/*
** Valid values for the flags member of TEMPLATE
*/
#define TE_IGNORECASE	0x0001	/* ignore case when comparing abbreviation */


typedef struct bi_ BUFINFO, *PBUFINFO;
struct bi_ {
	PBUFINFO		next;
	HBUFFER		hb;						// buffer this info is for
	ULONG			ulFlags;					// flags to control SyntaColor, etc.
	HHASH			htKeywords;				// hash table handle for keywords
	PTEMPLATE	pTemplates;				// pointer to array of TEMPLATE structures
	void			(*syntaRefresh)();	// function to handle full refresh of buffer
	BOOL			(*syntaUpdate)();		// function to update a region of buffer
	long			ulStartUpdate;			// line to start SyntaColor update
	long			ulEndUpdate;			// line to end SyntaColor update
	char			*pszFunc;				// name of function that performs extension specific work
	ULONG			ulUserData;				// for your use
};


/* ulFlags settings for BUFINFO struct */
#define BI_SYNTACOLOR	0x00000001
#define BI_WORDPROC		0x00000002


extern PVOID	BufInfoQuery(HBUFFER hb);
extern PVOID	BufInfoAdd(HBUFFER hb);
extern void		BufInfoDelete(HBUFFER hb);
extern void		TmplExpand(char *pszExpansion);
extern BOOL		TemplateExpand( void );


#endif	/* LANG_H_INCLUDED */


/*
** End header: lang.h
*/
