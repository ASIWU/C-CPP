#include <stdio.h>

#include "list.h"

void print_node(value_type s)
{
	printf("%d\n", s.i);
}

int main()
{
	list *l;
	
	Init(&l);
	
	value_type s;
	int i;
	for (i = 1; i <= 5; ++i)
	{
		s.i = i;
		Insert(l, s, i);
	}
	s.i = i;
	if (!Insert(l, s, 30))
		printf("Insertion failed.\n");

	Traverse(l, print_node);
	
	Destroy(l);
		
	return 0;
}
