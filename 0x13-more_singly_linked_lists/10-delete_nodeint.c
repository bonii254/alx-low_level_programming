#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: pointer to pointer head node.
  * @index: index to delete.
  *
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current;
	unsigned int idx;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (idx < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		idx++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
