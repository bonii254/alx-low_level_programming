#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index .
  * @head: pointer to head node.
  * @index: index to delete a node.
  *
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nextnode, *temp;
	unsigned int len = 0, ind = 0;

	if (!head || !(*head))
		return (-1);
	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (index > len - 1)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (temp && ind != index - 1)
	{
		temp = temp->next;
		ind++;
	}
	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);
	return (1);
}
