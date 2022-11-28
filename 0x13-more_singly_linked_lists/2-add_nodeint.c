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
		new_node->n = n;
		new_node->next = *head;
	}
	if (newNode != 0)
	{
		new_node->next = *head;
	}

	*head = newNode;
	return (newNode);
}
