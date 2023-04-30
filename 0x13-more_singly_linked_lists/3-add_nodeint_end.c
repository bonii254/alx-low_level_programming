#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list.
  * @head: pointet to pointer head node.
  * @n: input value.
  *
  * Return: address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;

	newnode  = (listint_t *) malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = 0;

	if (!(*head))
	{
		*head = newnode;
	}
	else
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
