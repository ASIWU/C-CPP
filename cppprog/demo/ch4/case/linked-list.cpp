//bzj^_^
//linked-list.cpp
//链表操作的实现

#include "linked-list.h"

linked_list::linked_list() : head(nullptr), tail(nullptr), _size(0)
{
    std::cout << "in default constructor" << std::endl;
}

linked_list::linked_list(size_t len, value_t* a) : head(nullptr), tail(nullptr), _size(0)
{
    if (a == nullptr) return;
    for (size_t i = 0; i < len; ++i) push_back(a[i]);
    std::cout << "in pointer constructor" << std::endl;
}

linked_list::linked_list(const std::initializer_list<value_t>& l) : head(nullptr), tail(nullptr), _size(0)
{
    for (auto e : l) push_back(e);
    std::cout << "in list constructor" << std::endl;
}

linked_list::~linked_list()
{
    clear();
    std::cout << "in destructor" << std::endl;
}

void linked_list::push_back(value_t d)
{
    node_ptr p = new _node{d, nullptr};

    if (head == nullptr) head = p;
    else tail->next = p;
    tail = p;

    ++_size;
}

void linked_list::clear()
{
    for (node_ptr p; head != nullptr;)
    {
        p = head;
        head = head->next;
        delete p;
    }

    tail = head; //==nullptr
    _size = 0;
}

void linked_list::traverse(callback af)
{
    for (auto p = head; p != nullptr; p = p->next) af(p->data);
}

void linked_list::peer() { std::cout << "| " << head << ' ' << tail << ' ' << _size << std::endl; }
