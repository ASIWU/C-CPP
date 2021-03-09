//bzj^_^
//linked-list-main.cpp
//链表测试代码

#include <iostream>
#include "linked-list.h"

void print(value_t &v) {
    std::cout << v << ' ';    //访问节点的函数
}

int main() {
    value_t a[] = {1, 2, 3, 4, 5};
    linked_list l;

    //l.init();
    for (auto e : a) l.push_back(e);

    auto nl = []() {
        std::cout << std::endl;
    };
    l.traverse(print); nl();
    auto af = [](value_t &v) {
        std::cout << v << ' ';
    };
    l.traverse(af); nl();
    l.traverse([](value_t &v) {
        std::cout << v << ' ';
    }); nl();

    l.clear();

    return 0;
}
