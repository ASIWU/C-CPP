#include <stdio.h>

int a[] = {23, 15, 70, 48, 96, -1};

void f(int i)
{
    if (a[i] != -1)
    {
        f(i + 1); 
        printf("%d\n", a[i]);
    }
}

int main()
{
    f(0);

    return 0;
}