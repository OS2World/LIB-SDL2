/*
  Simple DirectMedia Layer
  Copyright (C) 1997-2016 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
*/

#ifndef _SDL_config_os2_h
#define _SDL_config_os2_h

#include "SDL_platform.h"

#define HAVE_STDARG_H   1
#define HAVE_STDDEF_H   1

/* Here are some reasonable defaults */
typedef unsigned int size_t;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
#ifdef __WATCOMC__
typedef unsigned long uintptr_t;
#endif

/* Enable the OS/2 audio driver (src/audio/os2/\*.c) */
#define SDL_AUDIO_DRIVER_OS2  1

/* Enable the stub joystick driver (src/joystick/dummy/\*.c) */
#define SDL_JOYSTICK_DISABLED   1

/* Enable the stub haptic driver (src/haptic/dummy/\*.c) */
#define SDL_HAPTIC_DISABLED 1

/* Enable the OS/2 video driver (src/video/OS2/\*.c) */
#define SDL_VIDEO_DRIVER_OS2  1

#define SDL_THREAD_OS2           1
#define SDL_LOADSO_OS2           1
#define SDL_TIMER_OS2            1
#define SDL_FILESYSTEM_OS2       1
#define SDL_POWER_OS2            1

#define HAVE_LIBC 1

/* Useful headers */
#define HAVE_SYS_TYPES_H 1
#define HAVE_STDIO_H 1
#define STDC_HEADERS 1
#define HAVE_STDLIB_H 1
#define HAVE_STDARG_H 1
#define HAVE_MALLOC_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRING_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_CTYPE_H 1
#define HAVE_MATH_H 1
#define HAVE_SIGNAL_H 1

/* C library functions */
#define HAVE_MALLOC 1
#define HAVE_CALLOC 1
#define HAVE_REALLOC 1
#define HAVE_FREE 1
#define HAVE_ALLOCA 1
#define HAVE_GETENV 1
#define HAVE_PUTENV 1
#define HAVE_UNSETENV 1
#define HAVE_QSORT 1
#define HAVE_ABS 1
#define HAVE_BCOPY 1
#define HAVE_MEMSET 1
#define HAVE_MEMCPY 1
#define HAVE_MEMMOVE 1
#define HAVE_MEMCMP 1
#define HAVE_STRLEN 1
#define HAVE_STRLCPY 1
#define HAVE_STRLCAT 1
#define HAVE_STRDUP 1
#define HAVE__STRREV 1
#define HAVE__STRUPR 1
#define HAVE__STRLWR 1
#define HAVE_INDEX 1
#define HAVE_RINDEX 1
#define HAVE_STRCHR 1
#define HAVE_STRRCHR 1
#define HAVE_STRSTR 1
#define HAVE_ITOA 1
#define HAVE__LTOA 1
#define HAVE__ULTOA 1
#define HAVE_STRTOL 1
#define HAVE__I64TOA 1
#define HAVE__UI64TOA 1
#define HAVE_STRTOLL 1
#define HAVE_STRTOD 1
#define HAVE_ATOI 1
#define HAVE_ATOF 1
#define HAVE_STRCMP 1
#define HAVE_STRNCMP 1
#define HAVE_STRICMP 1
#define HAVE_STRCASECMP 1
#define HAVE_SSCANF 1
#define HAVE_SNPRINTF 1
#define HAVE_VSNPRINTF 1
#define HAVE_SETJMP 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_ATAN 1
#define HAVE_ATAN2 1
#define HAVE_ACOS 1
#define HAVE_ASIN 1
#define HAVE_CEIL 1
#define HAVE_COPYSIGN 1
#define HAVE_COS 1
#define HAVE_FABS 1
#define HAVE_FLOOR 1
#define HAVE_POW 1
#define HAVE_SCALBN 1
#define HAVE_SIN 1
#define HAVE_SQRT 1
#define HAVE_TAN 1
#define HAVE_LOG 1
//#define HAVE_ICONV 1
#define HAVE_ICONV_H 1

#endif /* _SDL_config_os2_h */
