//bzj^_^
//lambda.cpp

#include <iostream>

int main()
{
    int a = 1, b = 2;
    auto square = [](int x) { return x * x; }; //lamda的类型必须是auto
    auto add3 = [a, b](int t) { return a + b + t; }; //捕获包围块中的对象a和b
    auto mul = [](auto a, auto b) { return a * b; }; //参数类型自动推导

    std::cout << square(add3(3)) << std::endl;
    std::cout << mul(1, 2.3) << std::endl;

    return 0;
}
