#include "lists.h"

/**
  * add_nodeint - add a node at the beginning.
  * @head: head node pointer.
  * @n: value to add in the node
  *
  * Return: address of the new element, or NULL if failed.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
