//bzj^_^
//statci-member.cpp

#include <iostream>

class foo
{
private:
    int a;
    static int b;

public:
    static int c;

    void set(int x) { a = x; }
    static void f() { std::cout << b << ' ' << c << std::endl; }
    static void g(const foo& o) { std::cout << o.a << std::endl; }
};

int foo::b = 0;
int foo::c = 1;

int main()
{
    foo o;

    o.set(3);
    foo::f();
    foo::g(o);

    //++foo::b; //error
    ++foo::c;
    foo::f();
    o.f(); //OK, but not good

    return 0;
}
