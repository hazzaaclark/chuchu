/* COPYRIGHT (C) HARRY CLARK 2023 */

/* SEGA DREAMCAST BINARY DECOMPILER FOR IDA PRO */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY PERTAINING TO THE PLUGIN */

/* NESTED INCLUDES */

#include "common.h"

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdlib.h>

#ifdef USE_IDA_LIB

#define HARRY "Harry"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf(HARRY);
	}

	return 0;
}

#endif
