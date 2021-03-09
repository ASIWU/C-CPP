#include <stdio.h>

int Strlen(const char *s)
{
    if (*s != '\0') return Strlen(s + 1) + 1;

    return 0;
}

int main()
{
    char *t = "Hello!";

    printf("%d,%d\n", Strlen(""), Strlen(t));

    return 0;
}