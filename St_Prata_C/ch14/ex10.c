#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();
void timeNow();
void randNum();
void myName();

int main(void) {
    char choice = 0;
    void (*arr[3]) (void) = {timeNow, randNum, myName};
    menu();
    scanf("%c", &choice);
    arr[choice-97]();

    return (0);
}

void menu() {
    printf("a. time now\n");
    printf("b. random number\n");
    printf("c. print my name\n");
}

void timeNow() {
    time_t tptr;
    time(&tptr);
    printf("%s\n", ctime(&tptr));
}

void randNum() {
    printf("%d", (rand() % 100));
}

void myName() {
    printf("My name Egor");
}
