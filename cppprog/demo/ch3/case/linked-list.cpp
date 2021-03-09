//bzj^_^
//linked-list.cpp
//链表操作的实现

#include "linked-list.h"

void init(linked_list &l) {
    l.head = l.tail = nullptr;
    l.size = 0;
}

void push_back(linked_list &l, value_t d) {
    node_ptr p = new _node{d, nullptr};

    if (l.head == nullptr) l.head = p;
    else l.tail->next = p;
    l.tail = p;

    ++l.size;
}

void clear(linked_list &l) {
    for (node_ptr p;  l.head != nullptr;) {
        p = l.head;
        l.head = l.head->next;
        delete p;
    }

    l.tail = l.head = nullptr;
    l.size = 0;
}
