#include <stdio.h>

//这个程序要将二维数组的第i行向右循环移动i个位置

#define ROW 4
#define COL 6

int a[ROW][COL] = {
    {0, 1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10, 11},
    {12, 13, 14, 15, 16, 17},
    {18, 19, 20, 21, 22, 23}
};

void shift_row(int *x, int len, int shift)
{
    int i;
    int t[COL];

    for (i = 0; i < len; ++i)
        t[(i + shift) % len] = x[i];

    for (i = 0; i < len; ++i)
        x[i] = t[i];
}

void print_r(int (*x)[COL], int row, int col)
{
    int i, j;

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
            printf("%4d", x[i][j]);
        putchar('\n');
    }
}

int main()
{
    int i, j;

    printf("Original:\n");
    print_r(a, ROW, COL);

    for (i = 0; i < ROW; ++i)
        shift_row(*(a+i), COL, i);

    printf("----------------\nShifted:\n");
    print_r(a, ROW, COL);

    return 0;
}