#include <stdio.h>

//both x and y are input parameters
//"Call by value" policy causes this function doesn't archieve its goal
void swap_byval(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}

//x and y are input and output parameters
//this function can indirectly modify actual parameters via pointer
void swap_byptr(int* x, int* y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

//this function only swaps pointers themselves
//this doesn't affect those the pointers pointing
void swap_byptr2(int* x, int* y)
{
    int* t = x;
    x = y;
    y = t;
}

int main()
{
    int a = 1, b = 9;

    printf("before swap_byval: a=%d, b=%d\n", a, b);
    swap_byval(a, b);
    printf("after swap_byval: a=%d, b=%d\n\n", a, b);

    printf("before swap_byptr: a=%d, b=%d\n", a, b);
    swap_byptr(&a, &b);
    printf("after swap_byptr: a=%d, b=%d\n\n", a, b);

    printf("before swap_byptr2: a=%d, b=%d\n", a, b);
    swap_byptr2(&a, &b);
    printf("after swap_byptr2: a=%d, b=%d\n\n", a, b);

    return 0;
}