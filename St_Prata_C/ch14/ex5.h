#ifndef EX5
#define EX5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

#define CSIZE 4

typedef struct Name {
    char *nm;
    char *sn;
} t_name;

typedef struct Student {
    t_name bio;
    float grade[3];
    float mid_grade;
} t_student;

void inData(t_student *arr);
void freeAlloc(t_student *arr);
void printData(t_student *arr);
#endif
