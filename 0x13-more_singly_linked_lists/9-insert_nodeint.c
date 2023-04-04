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
	unsigned int index = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !(*head))
		return (NULL);

	while (index < idx)
	{
		index++;
		temp = temp->next;
	}
	new->next = temp;
	new->n = n;
	temp = new;

	if (idx == 0)
	{
		(*head) = new;
	}

	return (new);
}
