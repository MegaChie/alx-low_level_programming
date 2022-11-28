#include "lists.h"
/**
 * listint_len - return count of list's nodes.
 * @h: pointer to head
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;
	const listint_t *place = h;

	while (place != 0)
	{
		a++;
		place = place->next;
	}
	return (a);
}
