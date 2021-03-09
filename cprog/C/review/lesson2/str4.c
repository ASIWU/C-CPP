#include <stdio.h>
#include <string.h>

long Strlen(const char *s)
{
    char *p = (char *)s;
    while (*p) ++p; //向后移动指针，直到指向'\0'
    return p - s;
}

int main() {
    char s[100];

    scanf("%s", s);

    printf("the length of s: %ld\n", Strlen(s));

    return 0;
}