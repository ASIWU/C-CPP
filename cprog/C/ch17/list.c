//list.c

#include "list.h"

void Init(list **L)
{
	(*L) = (list *)malloc(sizeof(node));
	(*L)->next = NULL;
	(*L)->data = -1;		
}

void Insert(list *L, int v)
{
	list *p = (node *)malloc(sizeof(node));
	p->data = v;
	
	p->next = L->next;
	L->next = p;
}
