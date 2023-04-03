#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
