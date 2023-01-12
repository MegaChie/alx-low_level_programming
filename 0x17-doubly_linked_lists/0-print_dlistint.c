#include "lists.h"
/**
 * print_dlistint - check code.
 * @h: constant struct pointer
 * Return: count value
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == 0)
	{
		return (count);
	}
	while (h->prev != 0)
	{
		h = h->prev;
	}
	while (h != 0)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
