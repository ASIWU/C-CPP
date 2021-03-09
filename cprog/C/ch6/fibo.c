#include <stdio.h>

long fibo(long n)
{
    return n <= 2 ? 1 : fibo(n-1) + fibo(n-2);
}

long fibo2(long n, long a, long b)
{
    return n <= 2 ? b : fibo2(n-1, b, a+b);
}

int main()
{
    printf("%ld\n", fibo2(50, 1, 1));

    return 0;
}