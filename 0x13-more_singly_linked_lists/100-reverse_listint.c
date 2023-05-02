#include "lists.h"

/**
  * reverse_listint - reverses a listint_t linked list.
  * @head: double pointer to head node.
  *
  * Return: a pointer to the first node of the reversed list.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *previous_node;

	if (!(*head) || !head)
		return (NULL);
	current_node = (*head);
	previous_node = NULL;
	while (*head)
	{
		(*head) = (*head)->next;
		current_node->next = previous_node;
		previous_node = current_node;
		current_node = (*head);
	}
	(*head) = previous_node;
	return (previous_node);
}
