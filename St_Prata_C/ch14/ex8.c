// not completed, bug with input and not free allocated memory
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define PLACES 12

typedef struct Place {
    int id;
    int status;
    char *name;
    char *sname;
} t_place;

char menu();
void countFreePlace(t_place *arr);
void listFreePlace(t_place *arr);
void busyPlace(t_place *arr);
void reservePlace(t_place *arr);
void freePlace(t_place *arr);
void initPlaces(t_place *arr);

int main(void) {
    t_place arr[PLACES];
    char choice = ' ';
    initPlaces(arr);

    while (choice != 'f') {
        choice = menu();
        switch (choice) {
            case 'a':
                countFreePlace(arr);
                break;
            case 'b':
                listFreePlace(arr);
                break;
            case 'c':
                busyPlace(arr);
                break;
            case 'd':
                reservePlace(arr);
                break;
            case 'e':
                freePlace(arr);
                break;
        }
    }

    return (0);
}

char menu() {
    char res;
    printf("a. Кол-во свободных мест\n");
    printf("b. Список свободных мест\n");
    printf("c. Список забронированных мест в алфавитном порядке\n");
    printf("d. Забронивароть место\n");
    printf("e. Снять бронь\n");
    printf("f. Выйти из программы\n");
    scanf("%c%*c", &res);
    return (res);
}
void initPlaces(t_place *arr) {
    for (int i = 0; i < PLACES; i++) {

        arr[i].id = i + 1;
        arr[i].name = calloc(20, sizeof(char));
        arr[i].sname = calloc(20, sizeof(char));
        arr[i].status = 0;
    }
}

void countFreePlace(t_place *arr) {
    int res = 0;
    for (int i = 0; i < PLACES; i++) {
        if (arr[i].status != 1) {
            res += 1;
        }
    }
    printf("---> %d\n",res);
}


void listFreePlace(t_place *arr) {
    for (int i = 0; i < PLACES; i++) {
        if(arr[i].status != 1) {
            printf("ID - %d\n", arr[i].id);
        }
    }

}

void busyPlace(t_place *arr) {
    for (int i = 97; i <= 122; i++) {
        for (int j = 0; j < PLACES; j++) {
            if(arr[j].status == 1 && arr[j].name[0] == i) {
                printf("ID - %d\n", arr[j].id);
                printf("Name - %s\n", arr[j].name);
                printf("Sname - %s\n", arr[j].sname);
            }
        }
    }


}
void reservePlace(t_place *arr) {
    int res = 0;
    char nm[20];
    char snm[20];
    printf("Введите id места: ");
    scanf("%d", &res);
    printf("Введите Имя и Фамилию: ");
    scanf("%s %s", nm, snm);
    
    for (int i = 0; i < PLACES; i++) {
        if (res == arr[i].id) {
            arr[i].status = 1;
            printf("heh\n\n");
            strcpy(arr[i].name, nm);
            strcpy(arr[i].sname, snm);
        }
    }
}

void freePlace(t_place *arr) {
    int res = 0;
    printf("Какое место освободить: ");
    scanf("%d", &res);
    for (int i = 0; i < PLACES; i++) {
        if (res == arr[i].id) {
            arr[i].status = 0;
        }
    }
}
