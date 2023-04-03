#include "ex5.h"
#include <stdlib.h>


int main(void) {
    t_student *arr = malloc(sizeof(t_student) * CSIZE);
    
    for (int i = 0; i < CSIZE; i++) {
        arr[i].bio.nm = malloc(sizeof(char) * 10);
        printf("input %d - name\n", i);
        scanf("%s", arr[i].bio.nm);
    }

    for (int i = 0; i < CSIZE; i++) {
        printf("out %s - name\n", arr[i].bio.nm);
    }


    for (int i = 0; i < CSIZE; i++) { 
        free(arr[i].bio.nm);
    }
    free(arr);

    return (0);
}

