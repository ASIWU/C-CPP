//bzj^_^
//project: linked-list-class
//linked-list.h

#include <iostream>

//链表相关类型声明
using value_t = int; //类型别名
struct _node { //节点类型定义
    value_t data;
    _node *next;
};
using node_ptr = _node *; //类型别名

class linked_list {
private:
    node_ptr head, tail;
    size_t _size;

public:
    void init();
    void push_back(value_t d);
    void clear();
    size_t size();
};
