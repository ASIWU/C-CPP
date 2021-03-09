//list.h

#ifndef _LIST_
#define _LIST_

#include <stdio.h>
#include <malloc.h>

typedef struct _node {
	int data;
	struct _node * next;
} node, list;

extern void Init(list **L);
extern void Insert(list *L, int v);
extern void Delete();
extern void Destroy();

#endif