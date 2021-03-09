#include <stdio.h>

#define ROW  4
#define COL  5

int main() {
    int a[ROW][COL] = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9},
        {10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19}
    };
    int (*p)[5];
    int i, j;

    //用指针指向每一行
    for (i = 0; i < 4; ++i) {
        p = &a[i];
        for (j = 0; j < 5; ++j)
            printf("%4d", (*p)[j]);
        putchar('\n');
    }

    //常规操作，看做是一个阵列
    //按列输出
    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 4; ++j)
            printf("%4d", a[j][i]);
        putchar('\n');
    }

    return 0;
}