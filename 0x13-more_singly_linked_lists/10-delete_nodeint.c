#include "lists.h"
/**
 * delete_nodeint_at_index - delete nodes at a certain place.
 * @head: pointer to linked list
 * @index: place of the node to delete.
 * Return: -1, 1 or 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *place, *copy = *head;
	unsigned int node;

	if (copy == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		if (copy->next == NULL)
		return (-1);
		copy = copy->next;
	}
	place = copy->next;
	copy->next = place->next;
	free(place);
	return (1);
}
