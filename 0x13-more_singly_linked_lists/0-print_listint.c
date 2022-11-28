#include "lists.h"
#include <stdio.h>
/**
 * 
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	const listint_t *place = h;
	while(place != NULL)
    {
		printf("%d ",place->data);
		place = place->next;
		printf("\n");
		a++;
    }
return (a);
}
