#pragma once
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <malloc.h>
#include "hashtable.h"

typedef struct
{
	char name[16];
	int m1, m2, m3, m4, rollnum;
	float avg, cgpa;
}studentmarks;

typedef struct
{
	int rollnum;
	char phnum[20];
	char address[100];
	char city[20];
	char pin[20];
}studentinfo;

typedef struct {
	studentmarks** marks;
	int size;
	int count;
}markstable;

typedef struct {
	studentinfo** info;
	int sizeinfo;
	int countinfo;
}infotable;

typedef struct {
	studentmarks** marks;
	studentinfo** info;
	int counttotal;
}jointable;

markstable marks;
infotable info;
jointable join;

hashtable * grammar;
hashtable * nonterminals;
pair * p;

char key[20];
char value[20];
char c;

char displaymenu();

char* getline(FILE * fp);

void loadstudentmarks(char** marksheader);

studentmarks* createstudentmarks(char* line, int * count, char c);

void display();

void avg();

int getGrade(int marks);

void cgpa();

void savestudentmarks(char** marksheader);

void loadstudentinfo(char** infoheader);

studentinfo* createstudentinfo(char* line, int* countinfo, char c);

void displaystudentinfo();

void savestudentinfo(char** infoheader);

void displayjoin();

void joinleft();

void freestructures();

void freejoin();

void select_m1(char* condition, int value);
void select_m2(char* condition, int value);
void select_m3(char* condition, int value);
void select_m4(char* condition, int value);
void select_avg(char* condition, int value);
void select_cgpa(char* condition, int value);
void select_name(char* condition, char* value);
void select_rollnumber(char* condition, int value);
void select_phnum(char* condition, char* value);
void select_pin(char* condition, char* value);
void select_city(char* condition, char* value);

void query();

char** split(char* col);
