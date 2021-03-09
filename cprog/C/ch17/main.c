#include <stdio.h>

#include "list.h"

int main()
{
	list *l;
	
	Init(&l);
	
	int i;
	for (i = 1; i < 5; ++i)
		Insert(l, i);
	
	node *p = l->next;
	while (p != NULL)
	{
		printf("%d\n", p->data);
		p = p->next;	
	}
		
	return 0;
}
