#include <stdio.h>

int main()
{
    int x = 5, y = 7;

    y = ++x;
    printf("%d\n", y);

    x = 5;
    y = x++;
    printf("%d\n", y);

    return 0;
}