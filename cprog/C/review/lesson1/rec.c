#include <stdio.h>

int sum(int *a, int len)
{
    if (len == 0) return 0;

    return a[0] + sum(a + 1, len - 1);

    //return len == 0 ? 0 : a[0] + sum(a + 1, len - 1);
}

int main()
{
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", sum(x, 10));

    return 0;
}