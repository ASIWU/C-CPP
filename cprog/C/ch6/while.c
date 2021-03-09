#include <stdio.h>

int main()
{
// let sum = 0
// let x = 1
// if x <= N then 
// sum += x
// ++x
// goto [10]
// endif
// end.
    unsigned int sum, i;

    sum = 0;
    i = 1;
    while (i <= 100)
    {
        sum += i; //i ==> ai    ai=g(i)
        ++i;   //ai+1 = f(ai)
    }

    printf("%u\n", sum);

    return 0;
}