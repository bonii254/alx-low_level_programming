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
	unsigned int len = 0, idex = 0;
	listint_t *temp, *newnode;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (idx > len - 1)
		return (NULL);
	temp = *head;
	while (temp)
	{
		if (idex == idx)
			break;
		idex++;
		temp = temp->next;
	}
	newnode = (listint_t *) malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
