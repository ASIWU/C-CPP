//bzj^_^
//const-member.cpp

#include <iostream>

class X
{
private:
    const int a;
    const int c = 1;
    int b;

public:
    X(int i, int j) : a(i), b(j) {}
    const int& getA() { return a; }
    int& getB() { return b; }
};

int main()
{
    X x{1, 2};

    ++x.getB();
    std::cout << x.getA() << ' ' << x.getB();

    return 0;
}
