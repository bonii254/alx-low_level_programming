#include "lists.h"

/**
  * sum_dlistint - eturns the sum of all the data (n).
  * @head: head pointer.
  *
  * Return:  the sum of all the data (n) of a dlistint_t linked list.
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
