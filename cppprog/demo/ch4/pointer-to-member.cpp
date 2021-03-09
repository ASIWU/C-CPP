//bzj^_^
//pointer-to-member.cpp

#include <iostream>

class Y
{
private:
    int a;

public:
    int b;

    Y(int i, int j) : a(i), b(j) {}
    int f() { return a; }
    int g() { return b; }
};

int main()
{
    Y o{1, 2};

    int Y::*ptr = &Y::b;
    ++(o.*ptr);
    std::cout << o.b << std::endl;

    using YFPTR = int (Y::*)(); //YFPTR是指向Y的成员函数的指针类型
    YFPTR fptr = &Y::f;
    std::cout << (o.*fptr)() << std::endl;
    fptr = &Y::g;
    std::cout << (o.*fptr)() << std::endl;

    return 0;
}
