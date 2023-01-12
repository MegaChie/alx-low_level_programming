#include "lists.h"
/**
 * sum_dlistint - check code.
 * @head: struct pointer
 * Return: sum's value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
