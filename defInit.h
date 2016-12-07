#ifndef __defInit__
#define __defInit__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct _proc
{
	size_t MemorySize;
	size_t MemoryCol;
	size_t MemoryRow;
	size_t ASCII_min;
	size_t ASCII_max;
	size_t hexByte_max;

	unsigned int **Memory;
}dProc;

void defInit();
void defInit_free();
#endif
