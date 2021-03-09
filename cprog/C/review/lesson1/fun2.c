#include <stdio.h>
#include <malloc.h>

void f(int **a)
{
    *a = (int *)malloc(sizeof(int));
}

int main()
{
    int *x;

    printf("%p\n", x);
    f(&x);
    printf("%p\n", x);

    *x = 1;
    
    free(x);

    return 0;
}