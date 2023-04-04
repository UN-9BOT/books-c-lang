#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct human {
    int id;
    char *name;
    char *sname;
    int d1;
    int d2;
    int d3;
    int d4;
} t_hum;

char *readPath(int *flag);
void readF(t_hum **arr, char *path);
void printRes(t_hum *arr);
void freeAlloc(t_hum *arr);

int main(void) {
    int flag = 0; // for error
    char *path = readPath(&flag);
    if (!flag) {
        t_hum *arr = calloc(1, sizeof(t_hum));
        readF(&arr, path);
        printRes(arr);
        freeAlloc(arr);
    }
    free(path);
    return (0);
}

char *readPath(int *flag) {
    FILE *fp = NULL;
    char *path = calloc(1, sizeof(char));
    printf("Input path: ");
    char c;
    for (int i = 0; (c = getchar()) != '\n'; i++) {
        path[i] = c;
        path = realloc(path, sizeof(char) * (i + 2));
    }

    if ((fp = fopen(path, "r")) == NULL) {
        printf("read");
        *flag = 1;
    } 
    if (!*flag) {
        fclose(fp);
    }
    return (path);
}

void readF(t_hum **arr, char *path) {
    FILE *fp;
    fp = fopen(path, "r");
    for(int i = 0; i < 7; i++) {
        (*arr)[i].name = malloc(sizeof(char) * 20);
        (*arr)[i].sname = malloc(sizeof(char) * 20);
        fscanf(fp, "%d\t%s\t%s\t%d\t%d\t%d\t%d", 
                &(*arr)[i].id, (*arr)[i].name, (*arr)[i].sname, &(*arr)[i].d1, &(*arr)[i].d2, &(*arr)[i].d3, &(*arr)[i].d4);
        *arr = (t_hum *)realloc((*arr), sizeof(t_hum) * (i + 2));
    }

    fclose(fp);
}

void printRes(t_hum *arr) {
    for (int i = 0; i < 7; i++) {
        float res = (float) arr[i].d1 / (arr[i].d2 + arr[i].d3 + arr[i].d4);
        printf("%d %s %.1s. %.2f\n", arr[i].id, arr[i].name, arr[i].sname, res);
    }
}

void freeAlloc(t_hum *arr) {
    for (int i = 0; i < 7; i++) {
        free(arr[i].name);
        free(arr[i].sname);
    }
    free(arr);
    arr = NULL;
}
