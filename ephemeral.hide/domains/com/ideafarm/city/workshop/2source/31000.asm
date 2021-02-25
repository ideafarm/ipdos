;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.18000001.586 : 1snip.18000001.586 BEGIN
;DDNAME EQU "1snip.18000001.586"
;DDNUMB EQU 18000001H
;IDFILE EQU 857


;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;// Respecting the rights of other people is an important part of empowering one another.
;//

;/*
;*/
;/**/
;/*1*/.586/*1*/
.586


;//
;// Respecting the rights of other people is an important part of empowering one another.
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//

;IDFILE EQU
;DDNUMB EQU
;DDNAME EQU
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.18000001.586 : 1snip.18000001.586 END
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.31000* : 3func.31000000.testf BEGIN
;DDNAME EQU "3func.31000000.testf"
;DDNUMB EQU 31000000H
;IDFILE EQU 8d7


;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;// Respecting the rights of other people is an important part of empowering one another.
;//

;/*
;for doodling
;*/
;/*1*//*extern "C" voidT __export __stdcall testF( voidT )*//*1*/

.586p
_TEXT           SEGMENT DWORD PUBLIC USE32 'CODE'
                PUBLIC _testF@0
_testF@0:       fld dword ptr [eax]
                fld dword ptr [ebx]
                faddp st(1) , st(0)
                ret
_TEXT ENDS


;//
;// Respecting the rights of other people is an important part of empowering one another.
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//

;IDFILE EQU
;DDNUMB EQU
;DDNAME EQU
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.31000* : 3func.31000000.testf END
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.31000* : 3func.31000001.rtagf BEGIN
;DDNAME EQU "3func.31000001.rtagf"
;DDNUMB EQU 31000001H
;IDFILE EQU 8d8


;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;// Respecting the rights of other people is an important part of empowering one another.
;//

;/*
;*/
;/*1*//*extern "C" voidT __export __stdcall rTagF( voidT )*//*1*/

.586p
_TEXT           SEGMENT DWORD PUBLIC USE32 'CODE'
                PUBLIC _rTagF@0
_rTagF@0:       ret
                byte   "!ifcRangerTag:codes"
                byte   0h
_TEXT ENDS


;//
;// Respecting the rights of other people is an important part of empowering one another.
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//

;IDFILE EQU
;DDNUMB EQU
;DDNAME EQU
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.31000* : 3func.31000001.rtagf END
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.31000* : 3func.31000002.eipf BEGIN
;DDNAME EQU "3func.31000002.eipf"
;DDNUMB EQU 31000002H
;IDFILE EQU 8d9


;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;// Respecting the rights of other people is an important part of empowering one another.
;//

;/*
;i set *pcP to the address of the instruction that follows the instruction that called me
;*/
;/*1*//*extern "C" voidT __export __stdcall eipF( countT* pcP )*//*1*/

.586p
_TEXT           SEGMENT DWORD PUBLIC USE32 'CODE'
                PUBLIC _eipF@4
_eipF@4:        push ebx
                mov ebx , dword ptr 04h[esp]
                mov dword ptr [eax] , ebx
                pop ebx
                ret 004
_TEXT ENDS


;//
;// Respecting the rights of other people is an important part of empowering one another.
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//

;IDFILE EQU
;DDNUMB EQU
;DDNAME EQU
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\3func.31000* : 3func.31000002.eipf END
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.18000002.END : 1snip.18000002.end BEGIN
;DDNAME EQU "1snip.18000002.end"
;DDNUMB EQU 18000002H
;IDFILE EQU 858


;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;// Respecting the rights of other people is an important part of empowering one another.
;//

;/*
;*/
;/**/
;/*1*/END/*1*/
END


;//
;// Respecting the rights of other people is an important part of empowering one another.
;// This proprietary software was crafted at great expense and with great hardship by one man.  It took 28 years.
;//
;// Copyright (c) 1992-2020 Wo Of Ideafarm.  All rights reserved.  See IDEAFARM.COM for permitted uses.
;//

;IDFILE EQU
;DDNUMB EQU
;DDNAME EQU
;SOURCE: \ideafarm.home.1\precious\domains\com\ideafarm\city\library\dictionary\1snip.18000002.END : 1snip.18000002.end END
