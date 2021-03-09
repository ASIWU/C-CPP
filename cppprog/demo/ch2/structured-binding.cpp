//bzj^_^
//structured-binding.cpp

#include <iostream>

struct X { int a; double b; };

X f() { return {1, 2.3}; }

int main()
{
    auto [a, b] = f();
    std::cout << a << ' ' << b << std::endl;

    double arr[] = {1.2, 3.4, 5.6};
    auto [c, d, e] = arr;
    std::cout << c << ' ' << d << ' ' << e << ' ' << arr[2] << std::endl;

    return 0;
}
