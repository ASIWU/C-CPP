//bzj^_^
//function-overload.cpp

#include <iostream>

int f() { return 0; }
int f(int i) { return i; }
//char f() { return '1'; } //error，重载函数仅返回类型不同
//int f(int i = 0) { return i; } //error，缺省参数导致不能区分与无参版的区别
int f(int& i) { return i; } //OK

int main()
{
    std::cout << f() << std::endl;
    std::cout << f(1) << std::endl; //call f(int)
    //std::cout << f(a) << std::endl; //error，无法区分调用的是f(int)还是f(int&)

	return 0;
}
