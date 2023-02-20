#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    printf("Type of a is %s\n", typeid(a));
    printf("Type of b is %s\n", typeid(b).name());
    printf("Type of c is %s\n", typeid(c).name());
    return 0;
}
