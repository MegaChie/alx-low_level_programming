#include "lists.h"
/**
 * 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == 0)
	{
		return (0);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
	}
	if (newNode != 0)
	{
		newNode->next = *head;
	}

	*head = newNode;
	return (newNode);
}
