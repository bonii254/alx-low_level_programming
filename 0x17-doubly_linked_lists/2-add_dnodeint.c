#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
  * @head: double pointer to head node.
  * @n: integer value of a node.
  *
  * Return: the address of the new element, or NULL if it failed.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (!(*head))
	{
		(*head) = new_node;
		return (new_node);
	}
	while ((*head)->prev != NULL)
		(*head) = (*head)->prev;
	new_node->next = (*head);
	(*head)->prev = new_node;
	(*head) = new_node;
	return (new_node);
}
