#include "lists.h"

/**
  * add_nodeint_end - add a node at the end of a linked list.
  * @head: pointer to a pointer of the head list.
  * @n: value to be added to the newly created node.
  *
  * Return: address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = 0;

	if(*head == NULL)
	{
		*head = new;
		return (new);
	}

	while(temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
