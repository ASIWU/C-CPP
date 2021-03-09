//bzj^_^
//object-copy.cpp

#include <iostream>

int main()
{
    struct X {int a; double b;};
    X o1{1, 2.3}; //定义对象并初始化
    X o2{o1};  //初始化，o2是o1的复制品。等价于X o2 = o1
    X o3;

    o3 = o1; //赋值，同样是复制
    std::cout << o1.a << ' ' << o1.b << std::endl;
    std::cout << o2.a << ' ' << o2.b << std::endl;
    std::cout << o3.a << ' ' << o3.b << std::endl;

    return 0;
}
