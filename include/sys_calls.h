/* Copyright (C) 2023 Harry Clark */

/* M68K OS Kernel */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY OF THE OS' SYSTEM CALLS SCHEMA */
/* DESIGNED WITH EASE OF USE IN MIND TO ALLOCATE MEMORY, INCOPERATE IO, ETC */

#ifndef SYS_CALL
#define SYS_CALL

/* NESTED INCLUDES */

#include "common.h"

#ifdef __cplusplus
extern "C"
{}
#endif


typedef struct IO
{
	typedef char* SYS_BUFFER;
};

VOID_FUNCTION(SYS_READ);
VOID_FUNCTION(SYS_WRITE);

#endif