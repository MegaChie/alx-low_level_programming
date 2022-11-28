#include "lists.h"
/**
 * add_nodeint_end - creat a new tail.
 * @head: pointer to head
 * @n: new value of new tail
 * Return: pointer to new tail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *place = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == 0)
	{
		return (0);
	}
	else
	{
		newNode->n = n;
		newNode->next = 0;
    }
	if (place != 0)
	{
		while (place->next != 0)
		{
			place = place->next;
		}
		place->next = newNode;
	}
	else
	{
		*head = newNode;
	}
	return (newNode);
}
