#include "lists.h"

/**
  * free_listint - a function that frees a listint_t list.
  * @head: pointer to head node.
  */

void free_listint(listint_t *head)
{
	if(head)
		free(head);
	head = NULL;
}
