#include <stdio.h>
#include <string.h>

int main() {
    char s[]  = "abcdefg";

    *s = 'A';
    puts(s);

    strcpy(s, "XYZ");
    puts(s);

    return 0;
}