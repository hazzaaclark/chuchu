/* Copyright (C) 2023 Harry Clark */

/* M68K OS Kernel */

/* THIS FILE IS ABOUT COMMON DATA TYPES USED THROUGHOUT THE PROJECT */
/* CREATING TYPE DEFINED METHODS TO INSTANTIATE RAW POINTERS FOR MY */
/* METHODS, FUNCTIONS, ETC */

#ifndef COMMON
#define COMMON

#include <cstdint>
#include <stdio.h>

#ifndef UNSIGNED_TYPES
#define UNSIGNED_TYPES

typedef uint8_t U8;
typedef uint16_t U16;
typedef uint32_t U32;
typedef uint64_t U64;
typedef size_t UNK;

#endif 

#ifndef SIGNED_TYPES
#define SIGNED_TYPES

typedef int8_t S8;
typedef int16_t S16;
typedef int32_t S32;
typedef int64_t S64;

#endif

#ifndef FLOATING_POINT
#define FLOATING_POINT

typedef float F32;
typedef double F64;
typedef volatile float VF32;
typedef volatile double VF64;

#endif

#define VOID_FUNCTION(NAME) void NAME(void)
#define UNKNOWN(...)(__VA_ARGS__)(NAME) void(NAME)

#ifndef ENDIANESS
#define ENDIANESS

#define LITTLE_ENDIAN (VALUE) ((VALUE >> 8) | VALUE << 8)
#define BIG_ENDIAN (VALUE ((VALUE >> 24) | VALUE << 8) && U32 POINTER) | ((VALUE >> 8) && U32 POINTER) | ((VALUE << 24))

#endif

#endif
