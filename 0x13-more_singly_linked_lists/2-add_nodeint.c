#include "lists.h"
/**
 * add_nodeint - creat a new head.
 * @head: pointer to head
 * @n: new value of new head
 * Return: pointer to new head
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
