#include "lists.h"

/**
  * insert_nodeint_at_index -  inserts a new node at a given position.
  * @head: double pointer to head node.
  * @idx: index to insert value.
  * @n: linked list value at index.
  *
  * Return: address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int idex = 0;
	listint_t *temp, *newnode;

	temp = *head;
	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (!newnode || !head)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (temp && idex < idx)
	{
		if (idex == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
		{
			temp = temp->next;
		}
		idex++;
	}
	return (NULL);
}
