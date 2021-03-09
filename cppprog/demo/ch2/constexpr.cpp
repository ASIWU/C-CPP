//bzj^_^
//constexpr.cpp

#include <iostream>

constexpr int f() { return 5; }
constexpr int g(int a) { return a + 3; }

int main()
{
    int x = 5;
    int a[f()] = {1, 2, 3};
    int b[g(x)];
    constexpr int y = 5;
    int c[y] = {0};

    b[1] = 2;
    std::cout << a[0] << ' ' << b[1] << ' ' << c[0] << std::endl;

    return 0;
}