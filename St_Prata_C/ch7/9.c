#include <stdio.h>

int main(void) {
    int num;
    int counter = 0;
    _Bool flag;
    scanf("%i", &num);
    for(int k = 2; k <= num; k++) {
        flag = 0;
        for(int z = 2; z < k; z++) {
            if(k % z == 0) {
                flag = 1;
                break;
            }
        }
        if (!flag)
            counter++;
        
    }
    printf("%i", counter);
    return (0);
}
