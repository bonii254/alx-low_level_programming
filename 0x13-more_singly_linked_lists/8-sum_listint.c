#include "lists.h"

/**
  * sum_listint - returns the sum of all data in the nodes.
  * @head: pointer to the head node.
  *
  * Return: sum of data in node.
  * return 0 if list is empty.
  */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
