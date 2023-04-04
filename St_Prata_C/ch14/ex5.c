#include "ex5.h"

int main(void) {
    t_student *arr = malloc(sizeof(t_student) * CSIZE);
    inData(arr);
    printData(arr);
    freeAlloc(arr);

    return (0);
}

void inData(t_student *arr) {
    for (int i = 0; i < CSIZE; i++) {
        arr[i].bio.nm = malloc(sizeof(char) * 10);
        arr[i].bio.sn = malloc(sizeof(char) * 10);
        for (int j = 0; j < rand() % 10 + 3; j++) {
            if (j == 0 ) {
                arr[i].bio.nm[j] = 'A' + (rand() % 26);
                arr[i].bio.sn[j] = 'A' + (rand() % 26);
            } else {
                arr[i].bio.nm[j] = 'a' + (rand() % 26);
                arr[i].bio.sn[j] = 'a' + (rand() % 26); 
            }
        }
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            arr[i].grade[j] = rand() % 10;
            sum += arr[i].grade[j];
        }
        arr[i].mid_grade = ((float)sum / 3);
    }
}

void freeAlloc(t_student *arr) {
    for (int i = 0; i < CSIZE; i++) { 
        free(arr[i].bio.nm);
        free(arr[i].bio.sn);
    }
    free(arr);
}

void printData(t_student *arr) {
    for (int i = 0; i < CSIZE; i++) {
        printf("%d. %s %s %.1f\n", i, arr[i].bio.nm, arr[i].bio.sn, arr[i].mid_grade);
    }
}
