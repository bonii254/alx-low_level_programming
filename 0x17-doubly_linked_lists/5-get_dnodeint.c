#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
  * @head: pointer to head node.
  * @index: index number of node to return.
  *
  * Return: the nth node of a dlistint_t linked list.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *curr;
	unsigned int size = 0, num = 0;

	if (!head)
		return (NULL);
	temp = curr = head;
	while (temp)
	{
		size++;
		temp = temp->next;
	}

	if (index >= size)
		return (NULL);
	while (curr)
	{
		if (num == index)
			return (curr);
		curr = curr->next;
		num++;
	}
	return (NULL);
}
