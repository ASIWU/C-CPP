#include <stdio.h>

int main()
{
    int x, y, z;

    // for (x = 1; x <= 9; ++x)
    //     for (y = 0; y <= 9; ++y)
    //         for (z = 0; z <= 9; ++z)
    //             if (x*x*x + y*y*y + z*z*z
    //             == 100*x + 10*y + z)
    //                 printf("%d%d%d\n", x, y, z);

    for (int n = 100; n <= 999; ++n)
    {
        x = n / 100;
        z = n % 10;
        y = n % 100 / 10;

        if (x*x*x + y*y*y + z*z*z == n)
            printf("%d\n", n);

    }
    
    return 0;
}