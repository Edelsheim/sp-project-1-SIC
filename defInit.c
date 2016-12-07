#include "defInit.h"

void defInit()
{
	size_t i = 0;
	dProc.MemorySize = 16*65536;
	dProc.MemoryCol = 65536;
	dProc.MemoryRow = 16;
	dProc.ASCII_min = 0x20;
	dProc.ASCII_max = 0x7E;
	dProc.hexByte_max = 0xFF;

	dProc.Memory = 
		(unsigned int**)malloc(sizeof(unsigned int**) * dProc.MemoryCol);

	for(i = 0; i != dProc.MemoryCol; ++i)
	{
		dProc.Memory[i] = (unsigned int*)calloc(sizeof(unsigned int*), dProc.MemoryRow);
	}
}
void defInit_free()
{
	size_t i=0;
	for(i=0; i != dProc.MemoryCol; ++i)
		free(dProc.Memory[i]);
	free(dProc.Memory);
}
