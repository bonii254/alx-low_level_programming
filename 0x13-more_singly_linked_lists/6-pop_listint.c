#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: pointer to pointer of head node.
  *
  * Return: returns the head node’s data (n).
  * 0 if node == zero.
  */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int a;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	a = (*head)->n;

	free(*head);
	(*head) = temp;

	return (a);
}
