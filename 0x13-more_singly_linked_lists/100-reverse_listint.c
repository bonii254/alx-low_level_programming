#include "lists.h"

/**
  * reverse_listint - a function that reverses a listint_t linked list.
  * @head: pointer to header of the list.
  *
  * Return: a pointer to the first node of the reversed list.
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = (*head);
	listint_t *previous_node = 0;

	if (*head)
	{
		while ((*head) != 0)
		{
			(*head) = (*head)->next;
			current_node->next = previous_node;
			previous_node = current_node;
			current_node = (*head);
		}
		(*head) = previous_node;
		return (*head);
	}
	return (NULL);
}
