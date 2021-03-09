//bzj^_^
//linked-list-main.cpp
//链表测试代码

#include <iostream>
#include "linked-list.h"

int main()
{
    value_t a[] = {1, 2, 3, 4, 5};
    linked_list l;

    init(l); //对象的初始化很重要！
    for (auto e : a) push_back(l, e);

    for (auto p = l.head; p != nullptr; p = p->next)
        std::cout << p->data << ' ';
        
    std::cout << std::endl << l.size;

    clear(l); //对象失效前的清理工作也很重要！

    return 0;
}
