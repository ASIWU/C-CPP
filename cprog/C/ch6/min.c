#include <stdio.h>

int main()
{
    int a[6] = {1, 5, 9, 4, 2, 7};
    int i, j, min;

    j = 0;
    min = a[j];
    for (i = 0; i < 6; ++i)
        if (a[i] < min) 
        {   
            min = a[i];
            j = i;
        }

    min = a[j == 0 ? 1 : 0];
    for (i = 0; i < 6; ++i)
        if (a[i] < min && i != j) 
            min = a[i];

    printf("The least is: %d\n", min);

    return 0;
}