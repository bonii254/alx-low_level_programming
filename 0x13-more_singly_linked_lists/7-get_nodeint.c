#include "lists.h"

/**
  * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
  * @head: pointer to the list.
  * @index:  is the index of the node.
  *
  * Return: nth node on success.
  * Null if node doess not exist.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int len = 0;
	unsigned int count = 0;

	while (temp)
	{
		len++;
		temp = temp->next;
	}

	if (index >= len)
		return (NULL);

	temp = head;
	while (count < index)
	{
		count++;
		temp = temp->next;
	}
	return (temp);
}
