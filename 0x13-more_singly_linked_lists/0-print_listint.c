#include "lists.h"
#include <stdio.h>
/**
 * 
 */
size_t print_listint(const listint_t *h)
{
	int a = 0;
	while(node != NULL)
    {
		printf("%d ",node->data);
		node = node->next;
		printf("\n");
		a++;
    }
return (a);
}
