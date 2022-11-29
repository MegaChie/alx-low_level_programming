#include "lists.h"
/**
 * 
 */
void free_listint(listint_t *head)
{
    listint_t *place;

    while (head != 0)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
