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

#ifndef SH4_REGISTERS
#define SH4_REGISTERS

#define		R0		(1 << 0)
#define		R1		(1 << 1)
#define		R2		(1 << 2)
#define		R3		(1 << 3)
#define     R4		(1 << 4)
#define     R5		(1 << 5)
#define		R6		(1 << 6)
#define     R7		(1 << 7)
#define		R8		(1 << 8)
#define		R9		(1 << 9)
#define		R10		(1 << 10)
#define		R11		(1 << 11)
#define		R12		(1 << 12)
#define		R13		(1 << 13)
#define		R14		(1 << 14)
#define		R15		(1 << 15)

#endif

#endif