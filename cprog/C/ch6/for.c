#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 9; ++i)
    {
        for (j = 1; j <= i - 1; ++j)
            printf("    ");
        for (j = 1; j <= 10 - i; ++j)
            printf("%4d", i * j);
        putchar('\n');
    }

    return 0;
}