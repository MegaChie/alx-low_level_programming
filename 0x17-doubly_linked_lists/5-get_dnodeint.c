#include "lists.h"
/**
 * get_dnodeint_at_index - check code.
 * @head: struct pointer
 * @index: unsigned integer variable
 * Return: pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	i = 0;
	while (head != NULL)
	{
		if (i == index)
		{
			break;
		}
		head = head->next;
		i++;
	}
	return (head);
}
