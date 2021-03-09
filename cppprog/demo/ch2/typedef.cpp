#include <iostream>

void f() { std::cout << 'A'; }
//void g(void (*p)()) { (*p)(); }
//void (*(h()))() { return f; } //terrible!

//typedef void (*FUN_PTR)(); //FUN_PTR是指向函数的指针类型的名字，不是对象名
using FUN = void ();
using FUN_PTR = void (*)();
void g(FUN p) { (*p)(); }
FUN_PTR h() { return f; }

int main()
{
    g(f);
    h()();

    return 0;
}
