#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a certain place of list.
 * @head: pointer to linked list
 * @n: value of insertion
 * @idx: index of list
 * Return: 0 or pointer to added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *place = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == 0)
	{
		return (0);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = place;
		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (place == 0 || place->next == 0)
		{
			return (0);
		}
		place = place->next;
	}
new->next = place->next;
place->next = new;
return (new);
}
