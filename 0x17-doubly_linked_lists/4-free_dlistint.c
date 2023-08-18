#include "lists.h"

/**
  * free_dlistint - free doubly linked list.
  * @head: head pointer.
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	if (!head)
		return;
	while (head)
	{
		check = head;
		head = head->next;
		free(check);
	}
}
