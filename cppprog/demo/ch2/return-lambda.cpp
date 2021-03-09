//bzj^_^
//return-lambda.cpp

#include <iostream>

auto f() { return [](int a)->int { return a * a; }; }

int main()
{
    auto square = f();
    std::cout << square(2) << ',' << f()(3) << std::endl;
    return 0;
}