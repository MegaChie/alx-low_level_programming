#include "lists.h"
/**
 * free_listint - free memory of list.
 * @head: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *place;

	while (head != 0)
	{
		place = head;
		head = head->next;
		free(place);
	}
}
