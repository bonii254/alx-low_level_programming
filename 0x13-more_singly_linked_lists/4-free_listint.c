#include "lists.h"
/**
  * free_listint -  a function that frees a listint_t list..
  * @head: head pointer of the linked list.
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
