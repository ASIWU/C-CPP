#include <stdio.h>
#include <stdlib.h>

#define ERROR_1     2
#define ERROR_2     9
#define NO_ERROR    0

int main()
{
    int i;

    scanf("%d", &i);
    if (i == 1) exit(ERROR_1);
    else if (i == 2) exit(ERROR_2);

    return NO_ERROR;

    // if (is_empty()) underflow();

    // int flag = is_empty();
    // if (flag) underflow();

    // return stack[top--];

    // int x = stack[top];
    // --top;
    // return x;
}