#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: double pointer to head node.
  * @n: int value.
  *
  * Return: the address of the new element, or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *new_node;

	tail = (*head);
	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (tail->next != NULL)
		tail = tail->next;
	new_node->prev = tail;
	tail->next = new_node;
	return (new_node);
}
