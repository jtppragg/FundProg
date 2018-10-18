#ifndef __SUPERVISOR_C_H_
#define __SUPERVISOR_C_H_

/******************************************************************************
File  : supervisor_c.h
Author: Gorka Prieto, Copyright (c) 2016
Desc. : Tricky "header" file to help students detect file and memory leaks in
        their firsts programs in a minimal intrusive way: just include
        supervisor_c.h and use the standard file and memory functions.
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int svFopenCount = 0;
int svFcloseCount = 0;
int svMallocCount = 0;
int svFreeCount = 0;
char svRegistered = 0;

void printLeaks(void) {
	printf("----- Supervisor -----\n");
	printf("File fopen()/fclose()=%d/%d leaks=%d\n",
		svFopenCount, svFcloseCount, svFopenCount-svFcloseCount);
	printf("Memory malloc()/free()=%d/%d leaks=%d\n",
		svMallocCount, svFreeCount, svMallocCount-svFreeCount);
	printf("----------------------\n");
}

void svRegister(void) {
	if( svRegistered )
		return;
	atexit(printLeaks);
	svRegistered = 1;
}

FILE *svFopen(const char *path, const char *mode) {
	FILE * fp = fopen(path, mode);
	svRegister();
	if( fp != NULL )
		svFopenCount++;
	return fp;
}

int svFclose(FILE *stream) {
	svRegister();
	if( stream != NULL )
		svFcloseCount++;
	return fclose(stream);
}

void *svMalloc(size_t size) {
	void * ptr = malloc(size);
	svRegister();
	svMallocCount++;
	return ptr;
}

void svFree(void *ptr) {
	svRegister();
	free(ptr);
	svFreeCount++;
}


#define fopen svFopen
#define fclose svFclose
#define malloc svMalloc
#define free svFree

#endif	// __SUPERVISOR_C_H_
