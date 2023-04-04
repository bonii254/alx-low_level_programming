#include "lists.h"

/**
  * insert_nodeint_at_index - insert a node at a given position.
  * @head: pinter to pointer to head node.
  * @idx: position to insert a node.
  * @n: value of newly created node.
  *
  * Return: address of the new node on success.
  * NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = (*head);
	unsigned int len = 0;
	unsigned int index = 0;
	listint_t *new;

	while (temp)
	{
		len++;
		temp = temp->next;
	}

	if (idx > len)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	temp = (*head);
	while (index < idx - 1)
	{
		index++;
		temp = temp->next;
	}
	new->next = temp;
	new->n = n;
	temp = new;

	return (new);
}
