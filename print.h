/*
** $Id: $
** opcode names (extracted semi-automatically from lopcodes.h)
** Copyrightnotice
*/

#define NOPCODES	(sizeof(OpCodeName)/sizeof(OpCodeName[0]))

static char* OpCodeName[]={	/* ORDER lopcodes.h */
 "ENDCODE",
 "PUSHNIL",
 "PUSHNILS",
 "PUSH0",
 "PUSH1",
 "PUSH2",
 "PUSHBYTE",
 "PUSHWORD",
 "PUSHCONSTANTB",
 "PUSHCONSTANT",
 "PUSHLOCAL0",
 "PUSHLOCAL1",
 "PUSHLOCAL2",
 "PUSHLOCAL3",
 "PUSHLOCAL4",
 "PUSHLOCAL5",
 "PUSHLOCAL6",
 "PUSHLOCAL7",
 "PUSHLOCAL8",
 "PUSHLOCAL9",
 "PUSHLOCAL",
 "PUSHGLOBAL",
 "PUSHINDEXED",
 "PUSHSELF",
 "CREATEARRAY",
 "SETLOCAL0",
 "SETLOCAL1",
 "SETLOCAL2",
 "SETLOCAL3",
 "SETLOCAL4",
 "SETLOCAL5",
 "SETLOCAL6",
 "SETLOCAL7",
 "SETLOCAL8",
 "SETLOCAL9",
 "SETLOCAL",
 "SETGLOBAL",
 "SETINDEXED0",
 "SETINDEXED",
 "SETLIST0",
 "SETLIST",
 "SETMAP",
 "EQOP",
 "LTOP",
 "LEOP",
 "GTOP",
 "GEOP",
 "ADDOP",
 "SUBOP",
 "MULTOP",
 "DIVOP",
 "POWOP",
 "CONCOP",
 "MINUSOP",
 "NOTOP",
 "ONTJMP",
 "ONFJMP",
 "JMP",
 "UPJMP",
 "IFFJMP",
 "IFFUPJMP",
 "CALLFUNC",
 "RETCODE0",
 "RETCODE",
 "SETLINE",
 "ADJUST",
 "POPS",
 "VARARGS",
};
