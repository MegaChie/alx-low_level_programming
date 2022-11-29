#include "lists.h"
/**
 * sum_listint - add elements of linked list.
 * @head: pointer to linked list
 * Return: alculation result
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
