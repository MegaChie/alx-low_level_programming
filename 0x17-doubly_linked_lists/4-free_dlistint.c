#include "lists.h"
/**
 * free_dlistint - check code.
 * @head: struct pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
