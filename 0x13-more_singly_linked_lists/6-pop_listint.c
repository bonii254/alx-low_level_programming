#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: double pointer to head node.
  *
  * Return: the head node’s data (n).
  */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (!*head || !head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
