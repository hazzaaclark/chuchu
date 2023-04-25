/* Copyright (C) 2023 Harry Clark */

/* M68K OS Kernel */

/* THIS FILE PERTAINS TO THE DECLARATION OF DEFINES FOR THE CPU */
/* ALL OF THESE DEFINES ARE MEANT TO REPRESENT THE CPU ON A LOW LEVEL */

#ifndef CPU_DEFINES
#define CPU_DEFINES

/* NESTED INCLUDES */

#include "common.h"

#define CPU_TLB U64

#define CPU_TLS (VALUE, DIVIDER) \
static CPU_TARGET_LONG_SIZE(CPU_TLB / 8);

#define CPU_SUPERVISOR_MODE (BIT)
#define CPU_USER_MODE (BIT)

#endif