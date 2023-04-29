#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list.
  * @head: pointer to pointer to head node.
  * @n: new node value.
  *
  * Return: address of the new element, or NULL if it failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	if (*head == 0)
	{
		newnode->n = n;
		newnode->next = 0;
		*head = newnode;
	}
	else
	{
		newnode->n = n;
		newnode->next = (*head);
		(*head) = newnode;
	}
	return (newnode);
}
