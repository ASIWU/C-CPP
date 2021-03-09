//bzj^_^
//linked-list-main.cpp
//链表测试代码

#include <iostream>
#include "linked-list.h"

int main()
{
    auto af = [](value_t& v) { std::cout << v << ' '; };

    linked_list l1{1, 2, 3, 4, 5}; //定义对象并初始化
    std::cout << "l1: ";
    l1.traverse(af);
    l1.peer();
    linked_list l2{l1}; //初始化时复制

    //linked_list l2;
    //l2 = l1;
    std::cout << "l2: ";
    l2.traverse(af);
    l2.peer();

    return 0;
}
