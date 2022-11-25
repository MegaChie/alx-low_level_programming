#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *okdNode;
	size_t a;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	for (a = 0; str[a]; a++)
		{}

	newNode->len = a;
	newNode->next = NULL;
	okdNode = *head;

	if (okdNode == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (okdNode->next != NULL)
		{
			okdNode = okdNode->next;
		}
		okdNode->next = newNode;
	}

	return (*head);
}
