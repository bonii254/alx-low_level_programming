#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: pointer to head node.
  * @index: index to return a node.
  *
  * Return: nth node of a listint_t linked list.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len = 0, ind = 0;
	listint_t *temp;

	if (!head)
		return (NULL);

	temp = head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (index > len - 1)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (ind == index)
			break;
		ind++;
		temp = temp->next;
	}
	return (temp);
}
