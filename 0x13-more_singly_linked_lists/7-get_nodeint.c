#include "lists.h"
/**
 * get_nodeint_at_index - find if node exists in linked list and give
 * a pointer to it.
 * @head: pointer to list
 * @index: number of node to be found in the linked list
 * Return: pointer to found node or 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t dest;

	for (dest = 0; dest < index && head->next; dest++)
	{
		head = head->next;
	}
	if (dest < index)
	{
		return (0);
	}
	return (head);
}
