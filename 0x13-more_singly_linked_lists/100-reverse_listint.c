#include "lists.h"
/**
 * reverse_listint - reverses linked list.
 * @head: head of a list
 * Return: pointer to node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = 0;
	listint_t *n = 0;

	while (*head != 0)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;
	return (*head);
}
