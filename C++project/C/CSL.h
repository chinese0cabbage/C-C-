#pragma once
#include<stdio.h>
#include<string.h>

#define MAXLEN 100

typedef struct {
	char key[10];
	char name[10];
	int age;
}DATA;

typedef struct {
	DATA ListData[MAXLEN + 1];
	int ListLen;
}SLType;