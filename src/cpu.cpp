/* Copyright (C) 2023 Harry Clark */

/* M68K OS Kernel */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE CPU */
/* USING THE DECLARATIVES FROM THE PREPRIATORY HEADER FILE */

/* NESTED INCLUDES */

#include "cpu.h"

/* SYSTEM INCLUDES */

#include <stdio.h>

static inline void SET_PROGRAM_COUNTER(CPU* CPU)
{
	CPU += sizeof(CPU_OBJECT(CPU));
}