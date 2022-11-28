#include "lists.h"
/**
 * add_nodeint_end - creat a new head.
 * @head: pointer to head
 * @n: new value of new head
 * Return: pointer to new head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *newNode;
    listint_t *place = *head;

    new_node = malloc(sizeof(listint_t));
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
            place->next = next;
        }
        place->next = newNode;
    }
    else
    {
        *head = newNode;
    }
 return (newNode);
}
