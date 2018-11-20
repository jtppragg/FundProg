#ifndef __SUPERVISOR_H_
#define __SUPERVISOR_H_

/******************************************************************************
File  : supervisor.h
Author: Gorka Prieto, Copyright (c) 2016
Desc. : Tricky header file to help students detect file and memory leaks in
        their firsts programs in a minimal intrusive way: just include
        supervisor.h and use the standard file and memory functions.
******************************************************************************/

void printLeaks(void);

void svRegister(void);

FILE *svFopen(const char *path, const char *mode);

int svFclose(FILE *stream);

void *svMalloc(size_t size);

void *svRealloc(void *ptr, size_t size);

void svFree(void *ptr);

#define fopen svFopen
#define fclose svFclose
#define malloc svMalloc
#define realloc svRealloc
#define free svFree

#endif	// __SUPERVISOR_H_
