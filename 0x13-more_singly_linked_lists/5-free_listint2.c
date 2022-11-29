#include "lists.h"
/**
 * free_listint2 - free memory of list.
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *place;

	if (head == 0)
	{
		return;
	}
	while (*head != 0)
	{
		place = *head;
		*head = (*head)->next;
		free(place);
	}
	head = 0;
}
