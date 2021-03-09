//bzj^_^
//linked-list-main.cpp
//链表测试代码

#include <iostream>
#include "linked-list.h"

int main() {
    value_t a[] = {1, 2, 3, 4, 5};
    linked_list l;

    l.init(); //对象的初始化很重要！
    for (auto e : a) l.push_back(e);

    //注意这一行，会导致错误
    for (auto p = l.head; p != nullptr; p = p->next)
        std::cout << p->data << ' ';

    std::cout << std::endl << l.size();

    l.clear(); //对象失效前的清理工作也很重要！

    return 0;
}
