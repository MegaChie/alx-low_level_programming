#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print content of linked list.
 * @h: pointer to head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	const listint_t *place = h;
	while(place != NULL)
    {
		printf("%d", place->n);
		place = place->next;
		printf("\n");
		a++;
    }
return (a);
}
