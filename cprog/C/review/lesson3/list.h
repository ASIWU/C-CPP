//list.h

#ifndef _LIST_
#define _LIST_

#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

typedef struct {
	int i;
} value_type;

typedef struct _node {
	value_type data;
	struct _node * next;
} node, list;

#define	HEAD	0
#define TAIL	-1

typedef void (*CALLBACK)(value_type);

extern bool Init(list **L);
extern bool Insert(list *L, value_type v, int pos);
extern void Destroy(list *L);
extern void Traverse(list *L, CALLBACK f);

extern int count;

#endif