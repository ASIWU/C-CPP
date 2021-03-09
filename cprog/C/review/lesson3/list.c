//list.c

#include "list.h"

int count = -1;

bool Init(list **L)
{
	(*L) = (list *)malloc(sizeof(node));
	if (*L == NULL)
		return false;

	(*L)->next = NULL;
	count = 0;
	return true;
}

bool Insert(list *L, value_type v, int pos)
{
	list *p, *t;

	if (pos < TAIL || pos > count + 1)
		return false;

	if (pos == HEAD)
		pos = 0;
	else if (pos == TAIL)
		pos = count + 1;

	int i = 1;
	for (p = L; i < pos; ++i)
		p = p->next;

	t = (node *)malloc(sizeof(node));
	if (t == NULL)
		return false;

	t->data = v;
	t->next = p->next;
	p->next = t;
	++count;

	return true;
}

void Destroy(list *L)
{
	node *p = L, *q;
	
	while (p != NULL)
	{
		q = p;
		p = p->next;
		free(q);
	}
	
	count = 0;
}

void Traverse(list *L, CALLBACK f)
{
	if (L == NULL)
		return;

	node *p = L->next;
	while (p != NULL)
	{
		f(p->data);
		p = p->next;	
	}
}
