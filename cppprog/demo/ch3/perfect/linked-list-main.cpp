//bzj^_^
//linked-list-main.cpp
//链表测试代码

#include <iostream>
#include "linked-list.h"

void print(value_t& v) { std::cout << v << ' '; }

int main()
{
    //linked_list l{1, 2, 3, 4, 5};
    linked_list *l = new linked_list{1, 2, 3, 4, 5};

    l->traverse(print);
    l->traverse([](value_t& v) { std::cout << v << ' '; });

    delete l;

    return 0;
}
