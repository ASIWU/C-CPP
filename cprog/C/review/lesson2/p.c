#include <stdio.h>

int main() {
    int a = 1;
    int *p = &a;
    int **q = &p;

    printf("%p,%p\n", &a, p);
    printf("%p,%p\n", &p, q);

    *p = 3;
    printf("%d\n", a);

    **q = 5;
    printf("%d\n", a);

    return 0;
}