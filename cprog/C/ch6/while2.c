#include <stdio.h>

int main()
{
    unsigned int i, N, ai;
    double sum;

    scanf("%u", N);
    for (sum = 0.0, ai = 2, i = 1; i <= 7; ++i)
    {
        sum += 1.0 / ai;
        ai = ai * 10 + 2;
    }

    printf("%lf\n", sum);

    return 0;
}