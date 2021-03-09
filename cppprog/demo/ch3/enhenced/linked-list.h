//bzj^_^
//project: linked-list-class-enhenced
//linke-list.h

#include <iostream>

//链表相关类型声明
using value_t = int; //类型别名
struct _node { //节点类型定义
    value_t data;
    _node *next;
};
using node_ptr = _node *; //类型别名

using callback = void (value_t &); //类型定义

class linked_list {
private:
    node_ptr head, tail;
    size_t _size;

public:
    void init();
    void push_back(value_t d);
    void clear();
    size_t size();
    void traverse(callback af); //参数是一个函数
};
