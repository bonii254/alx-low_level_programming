#include "lists.h"

/**
  * find_listint_loop - finds the loop in a linked list
  * @head: pointer to head node.
  *
  * Return: address of the node where the loop start, NULL if there is no loop
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	hare = tortoise = head;
	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (tortoise == hare)
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
		return (NULL);
	hare = head;
	while (hare && tortoise)
	{
		if (tortoise == hare)
			return (hare);
		hare = hare->next;
		tortoise = tortoise->next;
	}
	return (NULL);
}
