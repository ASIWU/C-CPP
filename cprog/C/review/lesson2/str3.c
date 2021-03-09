#include <stdio.h>
#include <string.h>

int main() {
    char *s; //现在是野指针
    char *t[1]; //现在数组里全是野指针

    scanf("%s%s", s, t[0]); //使用野指针，会导致严重错误
    printf("%s\n%s\n", s, t[0]);

    return 0;
}