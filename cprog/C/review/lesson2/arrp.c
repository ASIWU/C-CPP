#include <stdio.h>

int main() {
    int a[5] = {0, 1, 2, 3, 4};
    int *p;

    //a + 5是虚拟元素a[5]的地址
    //这个元素是a的尾元素的“后一个”，常被称为“哨兵”
    //这里只用到了哨兵地址，而没有用到它指向的单元，因此是安全的
    for (p = a; p != a + 5; ++p)
        printf("%4d", *p);
    putchar('\n');

    return 0;
}