#include "lists.h"
/**
 * find_listint_loop - finds loop in linked list.
 * @head: pointer to linked list
 * Return: pointer to node with loop or 0
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *nodeOne, *nodeTwo;

	if (head == 0 || head->next == 0)
	{
		return (0);
	}
	nodeOne = head->next;
	nodeTwo = (head->next)->next;
	while (nodeTwo)
	{
		if (nodeOne == nodeTwo)
		{
			nodeOne = head;
			while (nodeOne != nodeTwo)
			{
				nodeOne = nodeOne->next;
				nodeTwo = nodeTwo->next;
			}
			return (nodeOne);
		}
		nodeOne = nodeOne->next;
		nodeTwo = (nodeTwo->next)->next;
	}
	return (0);
	
}
