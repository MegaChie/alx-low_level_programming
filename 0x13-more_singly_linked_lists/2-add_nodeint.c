#include "lists.h"
/**
 * 
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
	
	newNode->data = data;
	newNode->next = *head;
	*head = newNode; 
}
