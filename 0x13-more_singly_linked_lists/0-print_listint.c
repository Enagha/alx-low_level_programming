#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"
/**
*print_listint-printsalltheelementsofalinkedlist
*@h:pointertothe1stnodeofthelinkedlist
*Return:numberofnodes
*/

size_t print_listint(const listint_t *h)
{

size_t num = 0;


	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
