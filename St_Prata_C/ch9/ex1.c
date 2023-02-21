#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n, int *cache)
{
    int result;
    if (cache[n] != 0)
    {
        return cache[n];
    }
    else
    {
        if (n == 0 || n == 1)
        {
            result = n;
        }
        else
        {
            result = fibonacci(n - 1, cache) + fibonacci(n - 2, cache);
        }
        cache[n] = result;
        return result;
    }
}

int main()
{
    int n;
    int *cache;

    printf("Введите число: ");
    scanf("%d", &n);

    cache = (int *) malloc(sizeof(int) * (n + 1));
    for (int i = 0; i <= n; i++)
    {
        cache[i] = 0;
    }

    printf("Число Фибоначчи для %d: %d\n", n, fibonacci(n, cache));
    free(cache);

    return 0;
}
