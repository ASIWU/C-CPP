//bzj^_^
//linked-list.cpp
//链表操作的实现

#include "linked-list.h"

void linked_list::init() {
    head = tail = nullptr;
    _size = 0;
}

void linked_list::push_back(value_t d) {
    node_ptr p = new _node{d, nullptr};

    if (head == nullptr) head = p;
    else tail->next = p;
    tail = p;

    ++_size;
}

void linked_list::clear() {
    for (node_ptr p; head != nullptr;) {
        p = head;
        head = head->next;
        delete p;
    }

    tail = head; //==nullptr
    _size = 0;
}

size_t linked_list::size() {
    return _size;
}

void linked_list::traverse(callback af) {
    for (auto p = head; p != nullptr; p = p->next) af(p->data);
}
