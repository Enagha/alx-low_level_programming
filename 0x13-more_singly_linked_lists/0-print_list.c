#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include"lists.h"  

/**
*print_listint-printsalltheelementsofalinkedlist
*@h:pointertothe1stnodeofthelinkedlist
*Return:numberofnodes
*/

size_tprint_listint(constlistint_t*h)

{

size_tnodenum=0;



	while(h)

	{	

		printf("%d\n",h->n);

		nodenum++;	

		h=h->next;

	}	

	return(nodenum);
}
