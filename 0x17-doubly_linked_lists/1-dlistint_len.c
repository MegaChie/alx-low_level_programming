#include "lists.h"
/**
 * dlistint_len - check code.
 * @h: constant struct pointer
 */
size_t dlistint_len(const dlistint_t *h)
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
		count++;
		h = h->next;
	}
	return (count);
}
