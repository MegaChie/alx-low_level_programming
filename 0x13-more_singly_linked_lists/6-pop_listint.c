#include "lists.h"
/**
 * 
 */
int pop_listint(listint_t **head)
{
	listint_t *place;
	int n;

	place = *head;
	if (place == 0)
	{
		return (0);
	}
	*head = place->next;
	n = place->n;
	free(place);
	return (n);
}
