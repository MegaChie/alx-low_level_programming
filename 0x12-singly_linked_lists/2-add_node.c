/**
 * add_node - adds a new node at the beginning
 * of list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: pointer.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t a;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	newNode->len = a;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
