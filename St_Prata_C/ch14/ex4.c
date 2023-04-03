#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>
#include <time.h> 
#include <unistd.h> // TODO: open this file
                    
char *generate(int mask);

typedef struct Bio bio;
typedef struct Med med;
void prStr(med arr);

struct Bio {
    char *name;
    char *lname;
    char *sname;
};
struct Med {
    long socInt;
    bio info;
};

int main(void) {
    med *arr = malloc(sizeof(med) * 5);
    if (arr != NULL) {
        for (int i = 0; i < 5; i++) {
            arr[i].socInt = time(NULL) * (i+1) * 10000 % 1000000000;
            arr[i].info.name = generate(i+0);
            arr[i].info.lname = generate(i+1);
            arr[i].info.sname = generate(i+2);
            usleep(20000*(i+3));
        }
        for (int i = 0; i < 5; i++) {
            prStr(arr[i]);
        }
        

        for (int i = 0; i < 5; i++) {
            free(arr[i].info.name);
            arr[i].info.name = NULL;
            free(arr[i].info.lname);
            arr[i].info.lname = NULL;
            free(arr[i].info.sname);
            arr[i].info.sname = NULL;
        }
        free(arr);
        arr = NULL;
    }

    return (0);
}


char *generate(int mask) { //0 name, 1 lname, 2sname
    char *res = malloc(sizeof(char) * 10);
    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            res[i] = 'A' + ((time(NULL) + i + mask * (time(NULL) % (i+1)))% 26);
        } else {
            res[i] = 'a' + ((time(NULL) + i + mask * (time(NULL) % (i+1)))% 26);
        }

    }
    return (res);
}


void prStr(med arr) {
    printf("%s, %s %.1s. -- %ld\n", 
        arr.info.name,
        arr.info.lname,
        arr.info.sname,
        arr.socInt);
}


