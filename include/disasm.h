/* COPYRIGHT (C) HARRY CLARK 2023 */

/* SEGA DREAMCAST BINARY DECOMPILER FOR IDA PRO */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY SURROUNDING THE DIRECTIVES */
/* FOR DISASSEMBLY */

#ifndef DISASM
#define DISASM

/* NESTED INCLUDES */

#include "common.h"

/* IDA INCLUDES */

#include "dbg.hpp"
#include "loader.hpp"
#include "offset.hpp"

#ifdef USE_SH4
#define USE_SH4
#else
#define USE_SH4

/* USEFUL DIRECTIVES TO DETERMINE THE SIZE OF EACH RESPECTIVE GPR */
/* (GENERAL PURPOSE REGISTER) */

/* SEE https://www.st.com/resource/en/user_manual/cd00147165-sh-4-32-bit-cpu-core-architecture-stmicroelectronics.pdf#page=23 */

#define			R0			(1 << 0)
#define			R1			(1 << 1)
#define			R2			(1 << 2)
#define			R3			(1 << 3)
#define			R4			(1 << 4)
#define			R5			(1 << 5)
#define			R6			(1 << 6)
#define			R7			(1 << 7)
#define			R8			(1 << 8)
#define			R9			(1 << 9)
#define			R10			(1 << 10)
#define			R11			(1 << 11)
#define			R12			(1 << 12)
#define			R13			(1 << 13)
#define			R14			(1 << 14)
#define			R15			(1 << 15)

typedef struct ARCH
{
	U32 ADDRESS_MODE;
	char* CONDITION;
};

/* FLOATING POINTS DIRECTIVES FOR GPR BANKING */
/* THE BANKED CONTENTS OF THE FPR AS PART OF A CONJUNCTION BETWEEN */
/* STATUS AND CONTROL REGISTERS; DETERMING WHICH VALUES GET ALLOCATED */

/* THESE DIRECTIVES ALLOW FOR THE CONCATENATION OF TYPES RELATIVE TO THE */
/* SIZE OF THEIR RESPECTIVE OPERATION */

/*	BANK - 16 BIT REGISTER BANKING MODES 
	DISP - 8 BIT GLOBAL BASE (LOAD EFFECTIVE ADDRESS RELATIVE TO A ZERO FLAG)
	ROUND - 32 BIT FPSCR CONDITION

*/

#define			GPR_BANK			((OPCODE & 0x70) >> 4) \
						 static ARCH* TYPE ## OPCODE(U16);

#define			GPR_DISP			      (OPCODE & 0x0F) \
						  static ARCH* TYPE ## OPCODE(U8);

#define			GPR_ROUND			((OPCODE  &0x00F0) >> 4) \
                            static ARCH* TYPE ## OPCODE(U32);

#define			BASE_INSTR			16
#define			START_ADDRESS		0x0010000

#endif

/* FUNCTIONALITY FOR THE SYMBOL LOOKUP TABLE */

#ifdef SYMBOL_TABLE
#define SYMBOL_TABLE
#else
#define SYMBOL_TABLE

#define			TABLE_SIZE			4096
#define			PAGING_ORG			0x0F

typedef struct SYM_TABLE
{
	char* SYMBOL;
	U32* ADDRESS;
	SYM_TABLE* LEFT;
	SYM_TABLE* RIGHT;
};

#endif

#endif
