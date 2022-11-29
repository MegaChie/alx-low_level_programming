#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at a certain place of list.
 * @head: pointer to linked list
 * @index: insertion place
 * @n: value of insertion
 * Return: 0 or pointer to added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == 0)
	{
		return (0);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == 0 || temp->next == 0)
		{
			return (0);
		}
		temp = temp->next;
	}
new->next = temp->next;
temp->next = new;
return (new);
}
