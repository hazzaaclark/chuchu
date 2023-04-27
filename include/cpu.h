/* Copyright (C) 2023 Harry Clark */

/* M68K OS Kernel */

/* THIS FILE PERTAINS TO THE DECLARATION OF DEFINES FOR THE CPU */
/* ALL OF THESE DEFINES ARE MEANT TO REPRESENT THE CPU ON A LOW LEVEL */

/* DOCUMENTATION USED: https://www.nxp.com/docs/en/reference-manual/MC68000UM.pdf */

#ifndef CPU_DEFINES
#define CPU_DEFINES

/* NESTED INCLUDES */

#include "common.h"
#include "sys_calls.h"

#define CPU_TLB U64

#define CPU_TLB_ENTRY (VALUE) \
static CPU_TLB_ENTRY(CPU_TLB, 4);

#define CPU_TLS (VALUE, DIVIDER) \
static CPU_TARGET_LONG_SIZE(CPU_TLB / 8);

#define CPU_VTLS 8

#define CPU_SUPERVISOR_MODE (BIT)
#define CPU_USER_MODE (BIT)

#define ADDRESS (VALUE) \
static ADDRESS(U32* ADDRESS_INDEX(ADDRESS >> 24));

#define ADDRESS_BITS 64

typedef struct CONDITIONS
{
	typedef U32* DATA_REGISTER[8];
	typedef U32* ADDRESS_REGISTER[8];
	typedef U32* PROGRAM_COUNTER;
	typedef U32* STATUS_REGISTER;
};

#endif
