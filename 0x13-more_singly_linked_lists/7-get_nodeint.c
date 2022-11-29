#include "lists.h"
/**
 * 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t dest;

	for (dest = 0; dest < index && head->next; dest++)
	{
		head =head->next;
	}
	if (dest < index)
	{
		return (0);
	}
	return (head);
}
